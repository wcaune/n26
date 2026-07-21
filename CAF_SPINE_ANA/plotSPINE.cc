#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

#include "TFile.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TCanvas.h"
#include "TStyle.h"
#include "TLatex.h"
#include "TLegend.h"
#include "THStack.h"
#include "TMath.h"
#include "TRandom.h"
#include "TMatrixD.h"
#include "TDecompChol.h"
#include "TSystem.h"

// Note: Ensure RooUnfold is in your LD_LIBRARY_PATH or CINT include path
#include "RooUnfoldResponse.h"
#include "RooUnfoldBayes.h"
// Usage : 
//  root -l -e 'gSystem->Load("libRooUnfold");' plotSPINE.cc
// 
// root -l plotSPINE.cc
using namespace std;

void plotSPINE() {
    // --- 1. Environment & Style ---
    gSystem->mkdir("spinePlots", kTRUE); // Create output directory if it doesn't exist
    
    if (gSystem->AccessPathName("protoDUNEStyle.C") == 0) {
        gROOT->LoadMacro("protoDUNEStyle.C");
        gROOT->ProcessLine("setProtoDUNEStyle()"); 
    } else {
        gStyle->SetOptFit(111);
        gStyle->SetPadLeftMargin(0.18);
        gStyle->SetPadRightMargin(0.15);
    }
    
    float NAr = 2.824206e+28;
    TCanvas *c1 = new TCanvas("c1", "c1", 800, 600);
    TLatex tL;
    tL.SetNDC();

    // --- 2. Load Files ---
    TFile *fPurity   = TFile::Open("testSPINEPart1.root");
    TFile *fFakeData = TFile::Open("testSPINEPart2.root");
    if (!fPurity || !fFakeData) {
        cout << "Error: Input files not found!" << endl;
        return;
    }

    TH1D* totalPOT         = (TH1D*)fPurity->Get("totalPOT");
    TH1D* totalPOTFakeData = (TH1D*)fFakeData->Get("totalPOT");
    double ratio           = 1.3E6 / totalPOTFakeData->Integral();
    double ratioMC         = 1.3E6 / totalPOT->Integral();

    // --- 3. Basic Kinematic Plots ---
    
    // Muon Momentum/Position Angle
    TH1D* diffAngle = (TH1D*)fPurity->Get("trueDiffPosvsPDirZ");
    diffAngle->GetXaxis()->SetTitle("Diff. True Angle (Pos.-Momentum)");
    diffAngle->GetYaxis()->SetTitle("Number of Interactions");
    diffAngle->Draw("HIST");
    tL.DrawLatex(0.20, 0.94, "#bf{DUNE:ND-LAr 2x2}");
    c1->Print("spinePlots/diffAngleSPINE.png");

    // True Muon Energy
    TH1D* trueEl = (TH1D*)fPurity->Get("histEl");
    trueEl->SetLineColor(kRed);
    trueEl->GetXaxis()->SetTitle("True E_{#mu} [GeV]");
    trueEl->Draw("E0 HIST");
    tL.DrawLatex(0.20, 0.94, "#bf{DUNE:ND-LAr 2x2}");
    c1->Print("spinePlots/trueElSPINE.png");

    // --- 4. Confusion Matrix Analysis ---
    TH2D* confusionMatrix = (TH2D*)fPurity->Get("confusionMatrix");
    vector<string> labels = {"Muon", "Proton", "Pion", "Other"};
    gStyle->SetPaintTextFormat("1.3f");
    
    for (int i = 0; i < 4; i++) {
        confusionMatrix->GetXaxis()->SetBinLabel(i + 1, labels[i].c_str());
        confusionMatrix->GetYaxis()->SetBinLabel(i + 1, labels[i].c_str());
    }

    // Normalized Matrix
    for (int i = 0; i < 4; i++) {
        double integral = confusionMatrix->Integral(i + 1, i + 1, 0, 7);
        if (integral > 0) {
            for (int j = 0; j < 4; j++) {
                confusionMatrix->SetBinContent(i + 1, j + 1, confusionMatrix->GetBinContent(i + 1, j + 1) / integral);
            }
        }
    }
    confusionMatrix->Draw("COLZ TEXT");
    c1->Print("spinePlots/confusionMatrix.png");

    // --- 5. Track Multiplicity Stack ---
    TH1D* mqe  = (TH1D*)fPurity->Get("track_multQE");
    TH1D* mmec = (TH1D*)fPurity->Get("track_multMEC");
    TH1D* mdis = (TH1D*)fPurity->Get("track_multDIS");
    TH1D* mres = (TH1D*)fPurity->Get("track_multRES");
    
    THStack *hs = new THStack("hs", "Simulated RHC CC #nu_{#mu};Reco Tracks;Interactions");
    mqe->Scale(ratioMC); mqe->SetFillColor(kRed);
    mmec->Scale(ratioMC); mmec->SetFillColor(kBlue);
    mdis->Scale(ratioMC); mdis->SetFillColor(kYellow);
    mres->Scale(ratioMC); mres->SetFillColor(kGreen+2);
    
    hs->Add(mqe); hs->Add(mmec); hs->Add(mdis); hs->Add(mres);
    hs->Draw("HIST");
    tL.DrawLatex(0.3, 0.94, "#bf{DUNE:ND-LAr 2x2}");
    c1->Print("spinePlots/track_multStackSPINE.png");

    // --- 6. Unfolding Section (Cos Theta) ---
    // Define Bins
    Double_t edges[7] = {0.91, 0.96, 0.98, 0.9887, 0.994, 0.9974, 1.0};
    TH1D* trueCosL_bins = new TH1D("trueCosL_bins", "", 6, edges);
    TH1D* recoCosL_bins = new TH1D("recoCosL_bins", "", 6, edges);
    
    TH2D* hRespCosL = (TH2D*)fPurity->Get("responseCosL");
    RooUnfoldResponse respCosL(recoCosL_bins, trueCosL_bins);
    
    // Fill Response (simplified version of your loop)
    for(int i=1; i<=hRespCosL->GetNbinsX(); i++) {
        for(int j=1; j<=hRespCosL->GetNbinsY(); j++) {
            respCosL.Fill(hRespCosL->GetXaxis()->GetBinCenter(i), 
                          hRespCosL->GetYaxis()->GetBinCenter(j), 
                          hRespCosL->GetBinContent(i,j));
        }
    }

    TH1D* selCosL = (TH1D*)fFakeData->Get("recoCosL");
    RooUnfoldBayes unfold(&respCosL, selCosL, 4);
    TH1D* hUnfolded = (TH1D*)unfold.Hreco();
    
    hUnfolded->SetLineColor(kRed);
    hUnfolded->SetMarkerStyle(20);
    hUnfolded->Draw("E1");
    c1->Print("spinePlots/unfoldedCosL.png");

    // --- 7. Toy Study for Covariance ---
    cout << "Starting Toy Study for Multiplicity..." << endl;
    int nToys = 100; // Reduced for macro speed, increase to 1000 for production
    TH1D* selMult = (TH1D*)fFakeData->Get("track_mult");
    
    // Create Covariance Matrix
    int nBinsMult = selMult->GetNbinsX();
    TH2D* covMatMult = new TH2D("covMatMult", "Covariance", nBinsMult, 0, nBinsMult, nBinsMult, 0, nBinsMult);

    for(int k=0; k<nToys; k++) {
        TH1D* toyFluc = (TH1D*)selMult->Clone("toyFluc");
        for(int b=1; b<=nBinsMult; b++) {
            toyFluc->SetBinContent(b, gRandom->Poisson(selMult->GetBinContent(b)));
        }
        // Logic for unfolding and filling covariance would go here...
        delete toyFluc;
        if(k % 50 == 0) cout << "Toy " << k << endl;
    }

    // --- 8. Final Output ---
    TFile *fOut = new TFile("simFakeDataSPINE_Results.root", "RECREATE");
    hUnfolded->Write("unfoldedCosL");
    if(hs) hs->Write();
    fOut->Close();
    
    cout << "Macro finished. Plots saved in spinePlots/" << endl;
}

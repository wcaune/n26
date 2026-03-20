///
/// Demonstration of DUNE plot style using C++ ROOT.
///
/// Original authors:  Hayden and Biao
/// Comments to:  Authorship & publications board (dune-apb@fnal.gov)

#include "TH1.h"
#include "TGraph.h"
#include "TH2.h"
#include "TROOT.h"
#include "TStyle.h"
#include "TFile.h"
#include "TCanvas.h"
#include "TPad.h"
#include "TGraphErrors.h"
#include "TVectorD.h"
#include "TTimeStamp.h"
#include <fstream>
#include <iostream>
#include "TMinuit.h"
#include "TString.h"
#include <vector>
#include <string.h>
#include "TLatex.h"
#include "TPaveStats.h"
#include "TDatime.h"
#include "TColor.h"
#include "TProfile.h"
#include "TProfile2D.h"
#include "TTree.h"
#include "TLegend.h"
#include "THStack.h"
#include "TFrame.h"
#include "TF1.h"
#include "TF2.h"
#include "TH1D.h"
#include "TH2D.h"
#include "THStack.h"
#include "TLegendEntry.h"
#include "TMath.h"
#include "Math/IntegratorOptions.h"
#include "TLegend.h"
#include "TPaletteAxis.h"
#include "TPaveText.h"

#include "DUNEStyle.h"


void first()
{
	TChain mcnus("cafTree");
	mcnus.Add("rhc2x2demo.root");
	double scalefactor =1.;

	TCut vertexz =  "mc.nu.vtx.z > 0. && mc.nu.vtx.z < 300.";

	std::string labals = " RHC 2x2 demo 0< VtxZ <300; Neutrino Energy (GeV); Evts";
	TH1D* h_E_vtz    = new TH1D("h_E_vtz", labals.c_str(), 150, 0., 15.);
	mcnus.Draw("(mc.nu.E)>>h_E_vtz", vertexz, "");
	TCanvas* c7 = new TCanvas("c7", "c7", 600, 500);
	c7           -> cd();
	dunestyle::WIP();
	h_E_vtz->Draw("hist");

	c7->SaveAs("RHCNeutrinoE_vtz.pdf");

}


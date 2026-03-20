After -l the root caf files.

```bash

root [1] .ls
TFile**		rhc2x2demo.root	
 TFile*		rhc2x2demo.root	
  KEY: TTree	cafTree;1	cafTree
  KEY: TTree	globalTree;1	globalTree
  KEY: TTree	mvaTree;1	mvaTree
  KEY: TTree	meta;1	meta
  KEY: TTree	genieEvt;1	genieEvt
root [2] cafTree->GetListOfBranches()->Print()
Collection name='TObjArray', class='TObjArray', size=16
 *Branch  :rec                                                                *
*Entries :   143860 : BranchElement (see below)                              *
*............................................................................*
*Br    0 :meta      :                                                        *
*Entries :   143860 : Total  Size=    1480449 bytes  One basket in memory    *
*Baskets :        0 : Basket Size=      32000 bytes  Compression=   1.00     *
*............................................................................*
*Br    1 :meta.nd_lar.enabled : Bool_t                                       *
*Entries :   143860 : Total  Size=     223250 bytes  File Size  =     120349 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.73     *
*............................................................................*
*Br    2 :meta.nd_lar.run : Int_t                                            *
*Entries :   143860 : Total  Size=     651914 bytes  File Size  =     150583 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.23     *
*............................................................................*
*Br    3 :meta.nd_lar.subrun : Int_t                                         *
*Entries :   143860 : Total  Size=     654101 bytes  File Size  =     152758 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.18     *
*............................................................................*
*Br    4 :meta.nd_lar.event : Int_t                                          *
*Entries :   143860 : Total  Size=     653372 bytes  File Size  =     307363 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.08     *
*............................................................................*
*Br    5 :meta.nd_lar.subevt : Int_t                                         *
*Entries :   143860 : Total  Size=     654101 bytes  File Size  =      83938 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.62     *
*............................................................................*
*Br    6 :meta.nd_lar.triggertype : Int_t                                    *
*Entries :   143860 : Total  Size=     657746 bytes  File Size  =      87563 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.34     *
*............................................................................*
*Br    7 :meta.nd_lar.readoutstart_s : ULong_t                               *
*Entries :   143860 : Total  Size=    1235373 bytes  File Size  =      95265 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.81     *
*............................................................................*
*Br    8 :meta.nd_lar.readoutstart_ns : UInt_t                               *
*Entries :   143860 : Total  Size=     660662 bytes  File Size  =      90439 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.14     *
*............................................................................*
*Br    9 :meta.nd_lar.readoutend_s : ULong_t                                 *
*Entries :   143860 : Total  Size=    1233915 bytes  File Size  =      93815 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.99     *
*............................................................................*
*Br   10 :meta.nd_lar.readoutend_ns : UInt_t                                 *
*Entries :   143860 : Total  Size=     659204 bytes  File Size  =      88989 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.24     *
*............................................................................*
*Br   11 :meta.nd_lar.prism_offset : Double_t                                *
*Entries :   143860 : Total  Size=    1233915 bytes  File Size  =     100370 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.15     *
*............................................................................*
*Br   12 :meta.nd_gar.enabled : Bool_t                                       *
*Entries :   143860 : Total  Size=     223250 bytes  File Size  =      79750 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.61     *
*............................................................................*
*Br   13 :meta.nd_gar.run : Int_t                                            *
*Entries :   143860 : Total  Size=     651914 bytes  File Size  =      81763 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.79     *
*............................................................................*
*Br   14 :meta.nd_gar.subrun : Int_t                                         *
*Entries :   143860 : Total  Size=     654101 bytes  File Size  =      83938 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.62     *
*............................................................................*
*Br   15 :meta.nd_gar.event : Int_t                                          *
*Entries :   143860 : Total  Size=     653372 bytes  File Size  =      83213 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.67     *
*............................................................................*
*Br   16 :meta.nd_gar.subevt : Int_t                                         *
*Entries :   143860 : Total  Size=     654101 bytes  File Size  =      83938 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.62     *
*............................................................................*
*Br   17 :meta.nd_gar.triggertype : Int_t                                    *
*Entries :   143860 : Total  Size=     657746 bytes  File Size  =      87563 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.34     *
*............................................................................*
*Br   18 :meta.nd_gar.readoutstart_s : ULong_t                               *
*Entries :   143860 : Total  Size=    1235373 bytes  File Size  =      95265 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.81     *
*............................................................................*
*Br   19 :meta.nd_gar.readoutstart_ns : UInt_t                               *
*Entries :   143860 : Total  Size=     660662 bytes  File Size  =      90439 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.14     *
*............................................................................*
*Br   20 :meta.nd_gar.readoutend_s : ULong_t                                 *
*Entries :   143860 : Total  Size=    1233915 bytes  File Size  =      93815 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.99     *
*............................................................................*
*Br   21 :meta.nd_gar.readoutend_ns : UInt_t                                 *
*Entries :   143860 : Total  Size=     659204 bytes  File Size  =      88989 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.24     *
*............................................................................*
*Br   22 :meta.nd_gar.prism_offset : Double_t                                *
*Entries :   143860 : Total  Size=    1233915 bytes  File Size  =     100370 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.15     *
*............................................................................*
*Br   23 :meta.tms.enabled : Bool_t                                          *
*Entries :   143860 : Total  Size=     221063 bytes  File Size  =      77575 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.66     *
*............................................................................*
*Br   24 :meta.tms.run : Int_t                                               *
*Entries :   143860 : Total  Size=     649727 bytes  File Size  =      79588 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.98     *
*............................................................................*
*Br   25 :meta.tms.subrun : Int_t                                            *
*Entries :   143860 : Total  Size=     651914 bytes  File Size  =      81763 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.79     *
*............................................................................*
*Br   26 :meta.tms.event : Int_t                                             *
*Entries :   143860 : Total  Size=     651185 bytes  File Size  =      81038 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.85     *
*............................................................................*
*Br   27 :meta.tms.subevt : Int_t                                            *
*Entries :   143860 : Total  Size=     651914 bytes  File Size  =      81763 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.79     *
*............................................................................*
*Br   28 :meta.tms.triggertype : Int_t                                       *
*Entries :   143860 : Total  Size=     655559 bytes  File Size  =      85388 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.50     *
*............................................................................*
*Br   29 :meta.tms.readoutstart_s : ULong_t                                  *
*Entries :   143860 : Total  Size=    1233186 bytes  File Size  =      93090 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  13.09     *
*............................................................................*
*Br   30 :meta.tms.readoutstart_ns : UInt_t                                  *
*Entries :   143860 : Total  Size=     658475 bytes  File Size  =      88264 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.29     *
*............................................................................*
*Br   31 :meta.tms.readoutend_s : ULong_t                                    *
*Entries :   143860 : Total  Size=    1231728 bytes  File Size  =      91640 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  13.28     *
*............................................................................*
*Br   32 :meta.tms.readoutend_ns : UInt_t                                    *
*Entries :   143860 : Total  Size=     657017 bytes  File Size  =      86814 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.40     *
*............................................................................*
*Br   33 :meta.tms.prism_offset : Double_t                                   *
*Entries :   143860 : Total  Size=    1231728 bytes  File Size  =      98195 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.39     *
*............................................................................*
*Br   34 :meta.sand.enabled : Bool_t                                         *
*Entries :   143860 : Total  Size=     221792 bytes  File Size  =      78300 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.64     *
*............................................................................*
*Br   35 :meta.sand.run : Int_t                                              *
*Entries :   143860 : Total  Size=     650456 bytes  File Size  =      80313 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.91     *
*............................................................................*
*Br   36 :meta.sand.subrun : Int_t                                           *
*Entries :   143860 : Total  Size=     652643 bytes  File Size  =      82488 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.73     *
*............................................................................*
*Br   37 :meta.sand.event : Int_t                                            *
*Entries :   143860 : Total  Size=     651914 bytes  File Size  =      81763 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.79     *
*............................................................................*
*Br   38 :meta.sand.subevt : Int_t                                           *
*Entries :   143860 : Total  Size=     652643 bytes  File Size  =      82488 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.73     *
*............................................................................*
*Br   39 :meta.sand.triggertype : Int_t                                      *
*Entries :   143860 : Total  Size=     656288 bytes  File Size  =      86113 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.45     *
*............................................................................*
*Br   40 :meta.sand.readoutstart_s : ULong_t                                 *
*Entries :   143860 : Total  Size=    1233915 bytes  File Size  =      93815 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.99     *
*............................................................................*
*Br   41 :meta.sand.readoutstart_ns : UInt_t                                 *
*Entries :   143860 : Total  Size=     659204 bytes  File Size  =      88989 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.24     *
*............................................................................*
*Br   42 :meta.sand.readoutend_s : ULong_t                                   *
*Entries :   143860 : Total  Size=    1232457 bytes  File Size  =      92365 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  13.18     *
*............................................................................*
*Br   43 :meta.sand.readoutend_ns : UInt_t                                   *
*Entries :   143860 : Total  Size=     657746 bytes  File Size  =      87539 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.34     *
*............................................................................*
*Br   44 :meta.sand.prism_offset : Double_t                                  *
*Entries :   143860 : Total  Size=    1232457 bytes  File Size  =      98920 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.31     *
*............................................................................*
*Br   45 :meta.lar2x2.enabled : Bool_t                                       *
*Entries :   143860 : Total  Size=     223250 bytes  File Size  =     111623 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.87     *
*............................................................................*
*Br   46 :meta.lar2x2.run : Int_t                                            *
*Entries :   143860 : Total  Size=     651914 bytes  File Size  =     130583 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.88     *
*............................................................................*
*Br   47 :meta.lar2x2.subrun : Int_t                                         *
*Entries :   143860 : Total  Size=     654101 bytes  File Size  =     132758 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.82     *
*............................................................................*
*Br   48 :meta.lar2x2.event : Int_t                                          *
*Entries :   143860 : Total  Size=     653372 bytes  File Size  =     326768 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.95     *
*............................................................................*
*Br   49 :meta.lar2x2.subevt : Int_t                                         *
*Entries :   143860 : Total  Size=     654101 bytes  File Size  =      83938 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.62     *
*............................................................................*
*Br   50 :meta.lar2x2.triggertype : Int_t                                    *
*Entries :   143860 : Total  Size=     657746 bytes  File Size  =      87563 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.34     *
*............................................................................*
*Br   51 :meta.lar2x2.readoutstart_s : ULong_t                               *
*Entries :   143860 : Total  Size=    1235373 bytes  File Size  =     344543 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.54     *
*............................................................................*
*Br   52 :meta.lar2x2.readoutstart_ns : UInt_t                               *
*Entries :   143860 : Total  Size=     660662 bytes  File Size  =     192795 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.35     *
*............................................................................*
*Br   53 :meta.lar2x2.readoutend_s : ULong_t                                 *
*Entries :   143860 : Total  Size=    1233915 bytes  File Size  =      93815 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.99     *
*............................................................................*
*Br   54 :meta.lar2x2.readoutend_ns : UInt_t                                 *
*Entries :   143860 : Total  Size=     659204 bytes  File Size  =      88989 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.24     *
*............................................................................*
*Br   55 :meta.lar2x2.prism_offset : Double_t                                *
*Entries :   143860 : Total  Size=    1233915 bytes  File Size  =     100370 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.15     *
*............................................................................*
*Br   56 :meta.minerva.enabled : Bool_t                                      *
*Entries :   143860 : Total  Size=     223979 bytes  File Size  =      80475 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.60     *
*............................................................................*
*Br   57 :meta.minerva.run : Int_t                                           *
*Entries :   143860 : Total  Size=     652643 bytes  File Size  =      84621 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.54     *
*............................................................................*
*Br   58 :meta.minerva.subrun : Int_t                                        *
*Entries :   143860 : Total  Size=     654830 bytes  File Size  =      86796 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.37     *
*............................................................................*
*Br   59 :meta.minerva.event : Int_t                                         *
*Entries :   143860 : Total  Size=     654101 bytes  File Size  =     304506 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.10     *
*............................................................................*
*Br   60 :meta.minerva.subevt : Int_t                                        *
*Entries :   143860 : Total  Size=     654830 bytes  File Size  =      84663 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.56     *
*............................................................................*
*Br   61 :meta.minerva.triggertype : Int_t                                   *
*Entries :   143860 : Total  Size=     658475 bytes  File Size  =      88288 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.29     *
*............................................................................*
*Br   62 :meta.minerva.readoutstart_s : ULong_t                              *
*Entries :   143860 : Total  Size=    1236102 bytes  File Size  =     343850 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.55     *
*............................................................................*
*Br   63 :meta.minerva.readoutstart_ns : UInt_t                              *
*Entries :   143860 : Total  Size=     661391 bytes  File Size  =     104830 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.17     *
*............................................................................*
*Br   64 :meta.minerva.readoutend_s : ULong_t                                *
*Entries :   143860 : Total  Size=    1234644 bytes  File Size  =      94540 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.90     *
*............................................................................*
*Br   65 :meta.minerva.readoutend_ns : UInt_t                                *
*Entries :   143860 : Total  Size=     659933 bytes  File Size  =      89714 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.19     *
*............................................................................*
*Br   66 :meta.minerva.prism_offset : Double_t                               *
*Entries :   143860 : Total  Size=    1234644 bytes  File Size  =     101095 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.07     *
*............................................................................*
*Br   67 :meta.fd_hd.enabled : Bool_t                                        *
*Entries :   143860 : Total  Size=     222521 bytes  File Size  =      79025 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.63     *
*............................................................................*
*Br   68 :meta.fd_hd.run : Int_t                                             *
*Entries :   143860 : Total  Size=     651185 bytes  File Size  =      81038 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.85     *
*............................................................................*
*Br   69 :meta.fd_hd.subrun : Int_t                                          *
*Entries :   143860 : Total  Size=     653372 bytes  File Size  =      83213 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.67     *
*............................................................................*
*Br   70 :meta.fd_hd.event : Int_t                                           *
*Entries :   143860 : Total  Size=     652643 bytes  File Size  =      82488 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.73     *
*............................................................................*
*Br   71 :meta.fd_hd.subevt : Int_t                                          *
*Entries :   143860 : Total  Size=     653372 bytes  File Size  =      83213 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.67     *
*............................................................................*
*Br   72 :meta.fd_hd.triggertype : Int_t                                     *
*Entries :   143860 : Total  Size=     657017 bytes  File Size  =      86838 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.39     *
*............................................................................*
*Br   73 :meta.fd_hd.readoutstart_s : ULong_t                                *
*Entries :   143860 : Total  Size=    1234644 bytes  File Size  =      94540 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.90     *
*............................................................................*
*Br   74 :meta.fd_hd.readoutstart_ns : UInt_t                                *
*Entries :   143860 : Total  Size=     659933 bytes  File Size  =      89714 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.19     *
*............................................................................*
*Br   75 :meta.fd_hd.readoutend_s : ULong_t                                  *
*Entries :   143860 : Total  Size=    1233186 bytes  File Size  =      93090 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  13.09     *
*............................................................................*
*Br   76 :meta.fd_hd.readoutend_ns : UInt_t                                  *
*Entries :   143860 : Total  Size=     658475 bytes  File Size  =      88264 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.29     *
*............................................................................*
*Br   77 :meta.fd_hd.prism_offset : Double_t                                 *
*Entries :   143860 : Total  Size=    1233186 bytes  File Size  =      99645 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.23     *
*............................................................................*
*Br   78 :meta.fd_vd.enabled : Bool_t                                        *
*Entries :   143860 : Total  Size=     222521 bytes  File Size  =      79025 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.63     *
*............................................................................*
*Br   79 :meta.fd_vd.run : Int_t                                             *
*Entries :   143860 : Total  Size=     651185 bytes  File Size  =      81038 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.85     *
*............................................................................*
*Br   80 :meta.fd_vd.subrun : Int_t                                          *
*Entries :   143860 : Total  Size=     653372 bytes  File Size  =      83213 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.67     *
*............................................................................*
*Br   81 :meta.fd_vd.event : Int_t                                           *
*Entries :   143860 : Total  Size=     652643 bytes  File Size  =      82488 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.73     *
*............................................................................*
*Br   82 :meta.fd_vd.subevt : Int_t                                          *
*Entries :   143860 : Total  Size=     653372 bytes  File Size  =      83213 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.67     *
*............................................................................*
*Br   83 :meta.fd_vd.triggertype : Int_t                                     *
*Entries :   143860 : Total  Size=     657017 bytes  File Size  =      86838 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.39     *
*............................................................................*
*Br   84 :meta.fd_vd.readoutstart_s : ULong_t                                *
*Entries :   143860 : Total  Size=    1234644 bytes  File Size  =      94540 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.90     *
*............................................................................*
*Br   85 :meta.fd_vd.readoutstart_ns : UInt_t                                *
*Entries :   143860 : Total  Size=     659933 bytes  File Size  =      89714 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.19     *
*............................................................................*
*Br   86 :meta.fd_vd.readoutend_s : ULong_t                                  *
*Entries :   143860 : Total  Size=    1233186 bytes  File Size  =      93090 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  13.09     *
*............................................................................*
*Br   87 :meta.fd_vd.readoutend_ns : UInt_t                                  *
*Entries :   143860 : Total  Size=     658475 bytes  File Size  =      88264 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.29     *
*............................................................................*
*Br   88 :meta.fd_vd.prism_offset : Double_t                                 *
*Entries :   143860 : Total  Size=    1233186 bytes  File Size  =      99645 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.23     *
*............................................................................*
*Br   89 :meta.pd_hd.enabled : Bool_t                                        *
*Entries :   143860 : Total  Size=     222521 bytes  File Size  =      79025 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.63     *
*............................................................................*
*Br   90 :meta.pd_hd.run : Int_t                                             *
*Entries :   143860 : Total  Size=     651185 bytes  File Size  =      81038 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.85     *
*............................................................................*
*Br   91 :meta.pd_hd.subrun : Int_t                                          *
*Entries :   143860 : Total  Size=     653372 bytes  File Size  =      83213 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.67     *
*............................................................................*
*Br   92 :meta.pd_hd.event : Int_t                                           *
*Entries :   143860 : Total  Size=     652643 bytes  File Size  =      82488 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.73     *
*............................................................................*
*Br   93 :meta.pd_hd.subevt : Int_t                                          *
*Entries :   143860 : Total  Size=     653372 bytes  File Size  =      83213 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.67     *
*............................................................................*
*Br   94 :meta.pd_hd.triggertype : Int_t                                     *
*Entries :   143860 : Total  Size=     657017 bytes  File Size  =      86838 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.39     *
*............................................................................*
*Br   95 :meta.pd_hd.readoutstart_s : ULong_t                                *
*Entries :   143860 : Total  Size=    1234644 bytes  File Size  =      94540 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.90     *
*............................................................................*
*Br   96 :meta.pd_hd.readoutstart_ns : UInt_t                                *
*Entries :   143860 : Total  Size=     659933 bytes  File Size  =      89714 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.19     *
*............................................................................*
*Br   97 :meta.pd_hd.readoutend_s : ULong_t                                  *
*Entries :   143860 : Total  Size=    1233186 bytes  File Size  =      93090 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  13.09     *
*............................................................................*
*Br   98 :meta.pd_hd.readoutend_ns : UInt_t                                  *
*Entries :   143860 : Total  Size=     658475 bytes  File Size  =      88264 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.29     *
*............................................................................*
*Br   99 :meta.pd_hd.prism_offset : Double_t                                 *
*Entries :   143860 : Total  Size=    1233186 bytes  File Size  =      99645 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.23     *
*............................................................................*
*Br  100 :beam      :                                                        *
*Entries :   143860 : Total  Size=     134729 bytes  One basket in memory    *
*Baskets :        0 : Basket Size=      32000 bytes  Compression=   1.00     *
*............................................................................*
*Br  101 :beam.ismc : Bool_t                                                 *
*Entries :   143860 : Total  Size=     215960 bytes  File Size  =      72500 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.77     *
*............................................................................*
*Br  102 :beam.isgoodpulse : Bool_t                                          *
*Entries :   143860 : Total  Size=     221063 bytes  File Size  =      77575 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.66     *
*............................................................................*
*Br  103 :beam.pulsetimesec : ULong_t                                        *
*Entries :   143860 : Total  Size=    1228812 bytes  File Size  =      88740 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  13.68     *
*............................................................................*
*Br  104 :beam.pulsetimensec : ULong_t                                       *
*Entries :   143860 : Total  Size=    1229541 bytes  File Size  =      89465 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  13.58     *
*............................................................................*
*Br  105 :beam.gpspulsetimesec : ULong_t                                     *
*Entries :   143860 : Total  Size=    1230999 bytes  File Size  =      90915 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  13.38     *
*............................................................................*
*Br  106 :beam.gpspulsetimensec : ULong_t                                    *
*Entries :   143860 : Total  Size=    1231728 bytes  File Size  =      91640 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  13.28     *
*............................................................................*
*Br  107 :beam.deltapulsetimensec : Long64_t                                 *
*Entries :   143860 : Total  Size=    1233186 bytes  File Size  =      98375 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  12.38     *
*............................................................................*
*Br  108 :beam.pulsepot : Float_t                                            *
*Entries :   143860 : Total  Size=     650456 bytes  File Size  =      82467 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.71     *
*............................................................................*
*Br  109 :beam.hornI : Float_t                                               *
*Entries :   143860 : Total  Size=     648269 bytes  File Size  =      80292 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.89     *
*............................................................................*
*Br  110 :mc        :                                                        *
*Entries :   143860 : Total  Size=    1446466 bytes  One basket in memory    *
*Baskets :        0 : Basket Size=      32000 bytes  Compression=   1.00     *
*............................................................................*
*Br  111 :mc.nu     : Int_t mc.nu_                                           *
*Entries :   143860 : Total  Size=    2657185 bytes  File Size  =     461055 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.63     *
*............................................................................*
*Br  112 :mc.nu.id  : Long_t id[mc.nu_]                                      *
*Entries :   143860 : Total  Size=    5344279 bytes  File Size  =    2296316 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.32     *
*............................................................................*
*Br  113 :mc.nu.genieIdx : Long_t genieIdx[mc.nu_]                           *
*Entries :   143860 : Total  Size=    5348653 bytes  File Size  =    1368156 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.90     *
*............................................................................*
*Br  114 :mc.nu.pdg : Int_t pdg[mc.nu_]                                      *
*Entries :   143860 : Total  Size=    2999212 bytes  File Size  =     679874 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.39     *
*............................................................................*
*Br  115 :mc.nu.pdgorig : Int_t pdgorig[mc.nu_]                              *
*Entries :   143860 : Total  Size=    3002128 bytes  File Size  =     682820 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.37     *
*............................................................................*
*Br  116 :mc.nu.iscc : Bool_t iscc[mc.nu_]                                   *
*Entries :   143860 : Total  Size=    1240594 bytes  File Size  =     477274 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.57     *
*............................................................................*
*Br  117 :mc.nu.mode : Int_t mode[mc.nu_]                                    *
*Entries :   143860 : Total  Size=    2999941 bytes  File Size  =     755812 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.95     *
*............................................................................*
*Br  118 :mc.nu.targetPDG : Int_t targetPDG[mc.nu_]                          *
*Entries :   143860 : Total  Size=    3003586 bytes  File Size  =     997639 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.00     *
*............................................................................*
*Br  119 :mc.nu.hitnuc : Int_t hitnuc[mc.nu_]                                *
*Entries :   143860 : Total  Size=    3001399 bytes  File Size  =     772977 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.86     *
*............................................................................*
*Br  120 :mc.nu.removalE : Float_t removalE[mc.nu_]                          *
*Entries :   143860 : Total  Size=    3002857 bytes  File Size  =     374885 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.97     *
*............................................................................*
*Br  121 :mc.nu.E   : Float_t E[mc.nu_]                                      *
*Entries :   143860 : Total  Size=    2997754 bytes  File Size  =    2523343 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.18     *
*............................................................................*
*Br  122 :mc.nu.vtx.x : Float_t x[mc.nu_]                                    *
*Entries :   143860 : Total  Size=    3000662 bytes  File Size  =    2625556 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.14     *
*............................................................................*
*Br  123 :mc.nu.vtx.y : Float_t y[mc.nu_]                                    *
*Entries :   143860 : Total  Size=    3000662 bytes  File Size  =    2610597 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.14     *
*............................................................................*
*Br  124 :mc.nu.vtx.z : Float_t z[mc.nu_]                                    *
*Entries :   143860 : Total  Size=    3000662 bytes  File Size  =    2595402 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.15     *
*............................................................................*
*Br  125 :mc.nu.momentum.x : Float_t x[mc.nu_]                               *
*Entries :   143860 : Total  Size=    3004297 bytes  File Size  =    2640839 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.13     *
*............................................................................*
*Br  126 :mc.nu.momentum.y : Float_t y[mc.nu_]                               *
*Entries :   143860 : Total  Size=    3004297 bytes  File Size  =    2526024 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.18     *
*............................................................................*
*Br  127 :mc.nu.momentum.z : Float_t z[mc.nu_]                               *
*Entries :   143860 : Total  Size=    3004297 bytes  File Size  =    2530159 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.18     *
*............................................................................*
*Br  128 :mc.nu.isvtxcont : Bool_t isvtxcont[mc.nu_]                         *
*Entries :   143860 : Total  Size=    1244239 bytes  File Size  =     352120 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.49     *
*............................................................................*
*Br  129 :mc.nu.time : Float_t time[mc.nu_]                                  *
*Entries :   143860 : Total  Size=    2999941 bytes  File Size  =     371997 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   8.02     *
*............................................................................*
*Br  130 :mc.nu.bjorkenX : Float_t bjorkenX[mc.nu_]                          *
*Entries :   143860 : Total  Size=    3002857 bytes  File Size  =    2542287 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.18     *
*............................................................................*
*Br  131 :mc.nu.inelasticity : Float_t inelasticity[mc.nu_]                  *
*Entries :   143860 : Total  Size=    3005773 bytes  File Size  =    2555108 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.17     *
*............................................................................*
*Br  132 :mc.nu.Q2  : Float_t Q2[mc.nu_]                                     *
*Entries :   143860 : Total  Size=    2998483 bytes  File Size  =    2575476 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.16     *
*............................................................................*
*Br  133 :mc.nu.q0  : Float_t q0[mc.nu_]                                     *
*Entries :   143860 : Total  Size=    2998483 bytes  File Size  =    2570396 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.16     *
*............................................................................*
*Br  134 :mc.nu.modq : Float_t modq[mc.nu_]                                  *
*Entries :   143860 : Total  Size=    2999941 bytes  File Size  =    2555868 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.17     *
*............................................................................*
*Br  135 :mc.nu.W   : Float_t W[mc.nu_]                                      *
*Entries :   143860 : Total  Size=    2997754 bytes  File Size  =    2502666 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.19     *
*............................................................................*
*Br  136 :mc.nu.t   : Float_t t[mc.nu_]                                      *
*Entries :   143860 : Total  Size=    2997754 bytes  File Size  =     403827 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.39     *
*............................................................................*
*Br  137 :mc.nu.ischarm : Bool_t ischarm[mc.nu_]                             *
*Entries :   143860 : Total  Size=    1242781 bytes  File Size  =     377861 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.25     *
*............................................................................*
*Br  138 :mc.nu.isseaquark : Bool_t isseaquark[mc.nu_]                       *
*Entries :   143860 : Total  Size=    1244968 bytes  File Size  =     480023 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.56     *
*............................................................................*
*Br  139 :mc.nu.resnum : Int_t resnum[mc.nu_]                                *
*Entries :   143860 : Total  Size=    3001399 bytes  File Size  =     607904 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.91     *
*............................................................................*
*Br  140 :mc.nu.xsec : Float_t xsec[mc.nu_]                                  *
*Entries :   143860 : Total  Size=    2999941 bytes  File Size  =    2597022 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.15     *
*............................................................................*
*Br  141 :mc.nu.genweight : Float_t genweight[mc.nu_]                        *
*Entries :   143860 : Total  Size=    3003586 bytes  File Size  =     378576 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.89     *
*............................................................................*
*Br  142 :mc.nu.baseline : Float_t baseline[mc.nu_]                          *
*Entries :   143860 : Total  Size=    3002857 bytes  File Size  =     374885 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.97     *
*............................................................................*
*Br  143 :mc.nu.prod_vtx.x : Float_t x[mc.nu_]                               *
*Entries :   143860 : Total  Size=    3004297 bytes  File Size  =     379295 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.88     *
*............................................................................*
*Br  144 :mc.nu.prod_vtx.y : Float_t y[mc.nu_]                               *
*Entries :   143860 : Total  Size=    3004297 bytes  File Size  =     379295 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.88     *
*............................................................................*
*Br  145 :mc.nu.prod_vtx.z : Float_t z[mc.nu_]                               *
*Entries :   143860 : Total  Size=    3004297 bytes  File Size  =     379295 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.88     *
*............................................................................*
*Br  146 :mc.nu.parent_dcy_mom.x : Float_t x[mc.nu_]                         *
*Entries :   143860 : Total  Size=    3008659 bytes  File Size  =     380792 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.86     *
*............................................................................*
*Br  147 :mc.nu.parent_dcy_mom.y : Float_t y[mc.nu_]                         *
*Entries :   143860 : Total  Size=    3008659 bytes  File Size  =     380792 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.86     *
*............................................................................*
*Br  148 :mc.nu.parent_dcy_mom.z : Float_t z[mc.nu_]                         *
*Entries :   143860 : Total  Size=    3008659 bytes  File Size  =     380792 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.86     *
*............................................................................*
*Br  149 :mc.nu.parent_dcy_mode : Int_t parent_dcy_mode[mc.nu_]              *
*Entries :   143860 : Total  Size=    3007960 bytes  File Size  =     379253 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.89     *
*............................................................................*
*Br  150 :mc.nu.parent_pdg : Int_t parent_pdg[mc.nu_]                        *
*Entries :   143860 : Total  Size=    3004315 bytes  File Size  =     374826 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.98     *
*............................................................................*
*Br  151 :mc.nu.parent_dcy_E : Float_t parent_dcy_E[mc.nu_]                  *
*Entries :   143860 : Total  Size=    3005773 bytes  File Size  =     377852 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.92     *
*............................................................................*
*Br  152 :mc.nu.imp_weight : Float_t imp_weight[mc.nu_]                      *
*Entries :   143860 : Total  Size=    3004315 bytes  File Size  =     379295 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.88     *
*............................................................................*
*Br  153 :mc.nu.generator : Int_t generator[mc.nu_]                          *
*Entries :   143860 : Total  Size=    3003586 bytes  File Size  =     374115 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.99     *
*............................................................................*
*Br  154 :mc.nu.genVersion : vector<unsigned int> genVersion[mc.nu_]         *
*Entries :   143860 : Total  Size=    3867475 bytes  File Size  =     700835 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   5.50     *
*............................................................................*
*Br  155 :mc.nu.nproton : Int_t nproton[mc.nu_]                              *
*Entries :   143860 : Total  Size=    3002128 bytes  File Size  =     886408 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.37     *
*............................................................................*
*Br  156 :mc.nu.nneutron : Int_t nneutron[mc.nu_]                            *
*Entries :   143860 : Total  Size=    3002857 bytes  File Size  =     902731 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.31     *
*............................................................................*
*Br  157 :mc.nu.npip : Int_t npip[mc.nu_]                                    *
*Entries :   143860 : Total  Size=    2999941 bytes  File Size  =     752896 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.96     *
*............................................................................*
*Br  158 :mc.nu.npim : Int_t npim[mc.nu_]                                    *
*Entries :   143860 : Total  Size=    2999941 bytes  File Size  =     770351 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.87     *
*............................................................................*
*Br  159 :mc.nu.npi0 : Int_t npi0[mc.nu_]                                    *
*Entries :   143860 : Total  Size=    2999941 bytes  File Size  =     781829 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.82     *
*............................................................................*
*Br  160 :mc.nu.nprim : Int_t nprim[mc.nu_]                                  *
*Entries :   143860 : Total  Size=    3000670 bytes  File Size  =    1010467 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.95     *
*............................................................................*
*Br  161 :mc.nu.prim : vector<caf::SRTrueParticle> prim[mc.nu_]              *
*Entries :   143860 : Total  Size=  522337203 bytes  File Size  =  176272070 *
*Baskets :    17611 : Basket Size=      32000 bytes  Compression=   2.96     *
*............................................................................*
*Br  162 :mc.nu.nprefsi : Int_t nprefsi[mc.nu_]                              *
*Entries :   143860 : Total  Size=    3002128 bytes  File Size  =     898854 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.32     *
*............................................................................*
*Br  163 :mc.nu.prefsi : vector<caf::SRTrueParticle> prefsi[mc.nu_]          *
*Entries :   143860 : Total  Size=  233135929 bytes  File Size  =   61855263 *
*Baskets :     7831 : Basket Size=      32000 bytes  Compression=   3.77     *
*............................................................................*
*Br  164 :mc.nu.nsec : Int_t nsec[mc.nu_]                                    *
*Entries :   143860 : Total  Size=    2999941 bytes  File Size  =     927514 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.22     *
*............................................................................*
*Br  165 :mc.nu.sec : vector<caf::SRTrueParticle> sec[mc.nu_]                *
*Entries :   143860 : Total  Size=  191194998 bytes  File Size  =   80064810 *
*Baskets :     6521 : Basket Size=      32000 bytes  Compression=   2.39     *
*............................................................................*
*Br  166 :mc.nu.xsec_cvwgt : Float_t xsec_cvwgt[mc.nu_]                      *
*Entries :   143860 : Total  Size=    3004315 bytes  File Size  =     379286 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.88     *
*............................................................................*
*Br  167 :mc.nnu    : ULong_t                                                *
*Entries :   143860 : Total  Size=    1220793 bytes  File Size  =     230760 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   5.23     *
*............................................................................*
*Br  168 :common    :                                                        *
*Entries :   143860 : Total  Size=    1453192 bytes  One basket in memory    *
*Baskets :        0 : Basket Size=      32000 bytes  Compression=   1.00     *
*............................................................................*
*Br  169 :common.ixn.dlp : Int_t common.ixn.dlp_                             *
*Entries :   143860 : Total  Size=    1951943 bytes  File Size  =     448485 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.71     *
*............................................................................*
*Br  170 :common.ixn.dlp.id : Long_t id[common.ixn.dlp_]                     *
*Entries :   143860 : Total  Size=    2234298 bytes  File Size  =     463851 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.78     *
*............................................................................*
*Br  171 :common.ixn.dlp.vtx.x : Float_t x[common.ixn.dlp_]                  *
*Entries :   143860 : Total  Size=    1448961 bytes  File Size  =     932109 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.54     *
*............................................................................*
*Br  172 :common.ixn.dlp.vtx.y : Float_t y[common.ixn.dlp_]                  *
*Entries :   143860 : Total  Size=    1448961 bytes  File Size  =     948328 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.51     *
*............................................................................*
*Br  173 :common.ixn.dlp.vtx.z : Float_t z[common.ixn.dlp_]                  *
*Entries :   143860 : Total  Size=    1448961 bytes  File Size  =     868842 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.65     *
*............................................................................*
*Br  174 :common.ixn.dlp.dir.lngtrk.x : Float_t x[common.ixn.dlp_]           *
*Entries :   143860 : Total  Size=    1454050 bytes  File Size  =     323283 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.45     *
*............................................................................*
*Br  175 :common.ixn.dlp.dir.lngtrk.y : Float_t y[common.ixn.dlp_]           *
*Entries :   143860 : Total  Size=    1454050 bytes  File Size  =     323283 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.45     *
*............................................................................*
*Br  176 :common.ixn.dlp.dir.lngtrk.z : Float_t z[common.ixn.dlp_]           *
*Entries :   143860 : Total  Size=    1454050 bytes  File Size  =     323283 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.45     *
*............................................................................*
*Br  177 :common.ixn.dlp.dir.heshw.x : Float_t x[common.ixn.dlp_]            *
*Entries :   143860 : Total  Size=    1453323 bytes  File Size  =     319937 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.50     *
*............................................................................*
*Br  178 :common.ixn.dlp.dir.heshw.y : Float_t y[common.ixn.dlp_]            *
*Entries :   143860 : Total  Size=    1453323 bytes  File Size  =     319937 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.50     *
*............................................................................*
*Br  179 :common.ixn.dlp.dir.heshw.z : Float_t z[common.ixn.dlp_]            *
*Entries :   143860 : Total  Size=    1453323 bytes  File Size  =     319937 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.50     *
*............................................................................*
*Br  180 :common.ixn.dlp.nuhyp.cvn.isnubar : Float_t isnubar[common.ixn.dlp_]*
*Entries :   143860 : Total  Size=    1457697 bytes  File Size  =     326901 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.41     *
*............................................................................*
*Br  181 :common.ixn.dlp.nuhyp.cvn.nue : Float_t nue[common.ixn.dlp_]        *
*Entries :   143860 : Total  Size=    1454781 bytes  File Size  =     323974 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.44     *
*............................................................................*
*Br  182 :common.ixn.dlp.nuhyp.cvn.numu : Float_t numu[common.ixn.dlp_]      *
*Entries :   143860 : Total  Size=    1455510 bytes  File Size  =     323983 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.45     *
*............................................................................*
*Br  183 :common.ixn.dlp.nuhyp.cvn.nutau : Float_t nutau[common.ixn.dlp_]    *
*Entries :   143860 : Total  Size=    1456239 bytes  File Size  =     322848 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.46     *
*............................................................................*
*Br  184 :common.ixn.dlp.nuhyp.cvn.nc : Float_t nc[common.ixn.dlp_]          *
*Entries :   143860 : Total  Size=    1454052 bytes  File Size  =     323283 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.45     *
*............................................................................*
*Br  185 :common.ixn.dlp.nuhyp.cvn.protons0 :                                *
*         | Float_t protons0[common.ixn.dlp_]                                *
*Entries :   143860 : Total  Size=    1458426 bytes  File Size  =     326912 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.42     *
*............................................................................*
*Br  186 :common.ixn.dlp.nuhyp.cvn.protons1 :                                *
*         | Float_t protons1[common.ixn.dlp_]                                *
*Entries :   143860 : Total  Size=    1458426 bytes  File Size  =     326912 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.42     *
*............................................................................*
*Br  187 :common.ixn.dlp.nuhyp.cvn.protons2 :                                *
*         | Float_t protons2[common.ixn.dlp_]                                *
*Entries :   143860 : Total  Size=    1458426 bytes  File Size  =     326912 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.42     *
*............................................................................*
*Br  188 :common.ixn.dlp.nuhyp.cvn.protonsN :                                *
*         | Float_t protonsN[common.ixn.dlp_]                                *
*Entries :   143860 : Total  Size=    1458426 bytes  File Size  =     326912 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.42     *
*............................................................................*
*Br  189 :common.ixn.dlp.nuhyp.cvn.chgpi0 : Float_t chgpi0[common.ixn.dlp_]  *
*Entries :   143860 : Total  Size=    1456968 bytes  File Size  =     326267 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.42     *
*............................................................................*
*Br  190 :common.ixn.dlp.nuhyp.cvn.chgpi1 : Float_t chgpi1[common.ixn.dlp_]  *
*Entries :   143860 : Total  Size=    1456968 bytes  File Size  =     326267 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.42     *
*............................................................................*
*Br  191 :common.ixn.dlp.nuhyp.cvn.chgpi2 : Float_t chgpi2[common.ixn.dlp_]  *
*Entries :   143860 : Total  Size=    1456968 bytes  File Size  =     326267 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.42     *
*............................................................................*
*Br  192 :common.ixn.dlp.nuhyp.cvn.chgpiN : Float_t chgpiN[common.ixn.dlp_]  *
*Entries :   143860 : Total  Size=    1456968 bytes  File Size  =     326267 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.42     *
*............................................................................*
*Br  193 :common.ixn.dlp.nuhyp.cvn.pizero0 : Float_t pizero0[common.ixn.dlp_]*
*Entries :   143860 : Total  Size=    1457697 bytes  File Size  =     326901 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.41     *
*............................................................................*
*Br  194 :common.ixn.dlp.nuhyp.cvn.pizero1 : Float_t pizero1[common.ixn.dlp_]*
*Entries :   143860 : Total  Size=    1457697 bytes  File Size  =     326901 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.41     *
*............................................................................*
*Br  195 :common.ixn.dlp.nuhyp.cvn.pizero2 : Float_t pizero2[common.ixn.dlp_]*
*Entries :   143860 : Total  Size=    1457697 bytes  File Size  =     326901 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.41     *
*............................................................................*
*Br  196 :common.ixn.dlp.nuhyp.cvn.pizeroN : Float_t pizeroN[common.ixn.dlp_]*
*Entries :   143860 : Total  Size=    1457697 bytes  File Size  =     326901 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.41     *
*............................................................................*
*Br  197 :common.ixn.dlp.nuhyp.cvn.neutron0 :                                *
*         | Float_t neutron0[common.ixn.dlp_]                                *
*Entries :   143860 : Total  Size=    1458426 bytes  File Size  =     326912 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.42     *
*............................................................................*
*Br  198 :common.ixn.dlp.nuhyp.cvn.neutron1 :                                *
*         | Float_t neutron1[common.ixn.dlp_]                                *
*Entries :   143860 : Total  Size=    1458426 bytes  File Size  =     326912 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.42     *
*............................................................................*
*Br  199 :common.ixn.dlp.nuhyp.cvn.neutron2 :                                *
*         | Float_t neutron2[common.ixn.dlp_]                                *
*Entries :   143860 : Total  Size=    1458426 bytes  File Size  =     326912 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.42     *
*............................................................................*
*Br  200 :common.ixn.dlp.nuhyp.cvn.neutronN :                                *
*         | Float_t neutronN[common.ixn.dlp_]                                *
*Entries :   143860 : Total  Size=    1458426 bytes  File Size  =     326912 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.42     *
*............................................................................*
*Br  201 :common.ixn.dlp.Enu.calo : Float_t calo[common.ixn.dlp_]            *
*Entries :   143860 : Total  Size=    1451148 bytes  File Size  =     320462 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.48     *
*............................................................................*
*Br  202 :common.ixn.dlp.Enu.lep_calo : Float_t lep_calo[common.ixn.dlp_]    *
*Entries :   143860 : Total  Size=    1454064 bytes  File Size  =     323283 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.45     *
*............................................................................*
*Br  203 :common.ixn.dlp.Enu.mu_range : Float_t mu_range[common.ixn.dlp_]    *
*Entries :   143860 : Total  Size=    1454064 bytes  File Size  =     323283 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.45     *
*............................................................................*
*Br  204 :common.ixn.dlp.Enu.mu_mcs : Float_t mu_mcs[common.ixn.dlp_]        *
*Entries :   143860 : Total  Size=    1452606 bytes  File Size  =     321139 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.48     *
*............................................................................*
*Br  205 :common.ixn.dlp.Enu.e_calo : Float_t e_calo[common.ixn.dlp_]        *
*Entries :   143860 : Total  Size=    1452606 bytes  File Size  =     321139 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.48     *
*............................................................................*
*Br  206 :common.ixn.dlp.Enu.regcnn : Float_t regcnn[common.ixn.dlp_]        *
*Entries :   143860 : Total  Size=    1452606 bytes  File Size  =     321139 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.48     *
*............................................................................*
*Br  207 :common.ixn.dlp.part.ndlp : Int_t ndlp[common.ixn.dlp_]             *
*Entries :   143860 : Total  Size=    1451875 bytes  File Size  =     486243 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.96     *
*............................................................................*
*Br  208 :common.ixn.dlp.part.dlp : vector<caf:                              *
*         | :SRRecoParticle> dlp[common.ixn.dlp_]                            *
*Entries :   143860 : Total  Size=   60072131 bytes  File Size  =   27481855 *
*Baskets :     2284 : Basket Size=      32000 bytes  Compression=   2.18     *
*............................................................................*
*Br  209 :common.ixn.dlp.part.npandora : Int_t npandora[common.ixn.dlp_]     *
*Entries :   143860 : Total  Size=    1454791 bytes  File Size  =     321192 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.48     *
*............................................................................*
*Br  210 :common.ixn.dlp.part.pandora : vector<caf:                          *
*         | :SRRecoParticle> pandora[common.ixn.dlp_]                        *
*Entries :   143860 : Total  Size=    2604942 bytes  File Size  =     614255 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.22     *
*............................................................................*
*Br  211 :common.ixn.dlp.part.npida : Int_t npida[common.ixn.dlp_]           *
*Entries :   143860 : Total  Size=    1452604 bytes  File Size  =     319069 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.51     *
*............................................................................*
*Br  212 :common.ixn.dlp.part.pida : vector<caf:                             *
*         | :SRRecoParticle> pida[common.ixn.dlp_]                           *
*Entries :   143860 : Total  Size=    2602755 bytes  File Size  =     612361 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.23     *
*............................................................................*
*Br  213 :common.ixn.dlp.truth : vector<unsigned long> truth[common.ixn.dlp_]*
*Entries :   143860 : Total  Size=    3925529 bytes  File Size  =     791181 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.94     *
*............................................................................*
*Br  214 :common.ixn.dlp.truthOverlap :                                      *
*         | vector<float> truthOverlap[common.ixn.dlp_]                      *
*Entries :   143860 : Total  Size=    3123932 bytes  File Size  =    1456144 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.14     *
*............................................................................*
*Br  215 :common.ixn.ndlp : ULong_t                                          *
*Entries :   143860 : Total  Size=    1227354 bytes  File Size  =     213942 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   5.67     *
*............................................................................*
*Br  216 :common.ixn.pandora : Int_t common.ixn.pandora_                     *
*Entries :   143860 : Total  Size=    1938907 bytes  File Size  =     437159 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.79     *
*............................................................................*
*Br  217 :common.ixn.pandora.id : Long_t id[common.ixn.pandora_]             *
*Entries :   143860 : Total  Size=    1829262 bytes  File Size  =     395060 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.59     *
*............................................................................*
*Br  218 :common.ixn.pandora.vtx.x : Float_t x[common.ixn.pandora_]          *
*Entries :   143860 : Total  Size=    1247905 bytes  File Size  =     881799 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.40     *
*............................................................................*
*Br  219 :common.ixn.pandora.vtx.y : Float_t y[common.ixn.pandora_]          *
*Entries :   143860 : Total  Size=    1247905 bytes  File Size  =     882433 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.40     *
*............................................................................*
*Br  220 :common.ixn.pandora.vtx.z : Float_t z[common.ixn.pandora_]          *
*Entries :   143860 : Total  Size=    1247905 bytes  File Size  =     838869 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.47     *
*............................................................................*
*Br  221 :common.ixn.pandora.dir.lngtrk.x : Float_t x[common.ixn.pandora_]   *
*Entries :   143860 : Total  Size=    1252994 bytes  File Size  =     806919 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.53     *
*............................................................................*
*Br  222 :common.ixn.pandora.dir.lngtrk.y : Float_t y[common.ixn.pandora_]   *
*Entries :   143860 : Total  Size=    1252994 bytes  File Size  =     800078 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.55     *
*............................................................................*
*Br  223 :common.ixn.pandora.dir.lngtrk.z : Float_t z[common.ixn.pandora_]   *
*Entries :   143860 : Total  Size=    1252994 bytes  File Size  =     758004 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.63     *
*............................................................................*
*Br  224 :common.ixn.pandora.dir.heshw.x : Float_t x[common.ixn.pandora_]    *
*Entries :   143860 : Total  Size=    1252267 bytes  File Size  =     542006 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.28     *
*............................................................................*
*Br  225 :common.ixn.pandora.dir.heshw.y : Float_t y[common.ixn.pandora_]    *
*Entries :   143860 : Total  Size=    1252267 bytes  File Size  =     539280 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.29     *
*............................................................................*
*Br  226 :common.ixn.pandora.dir.heshw.z : Float_t z[common.ixn.pandora_]    *
*Entries :   143860 : Total  Size=    1252267 bytes  File Size  =     534980 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.31     *
*............................................................................*
*Br  227 :common.ixn.pandora.nuhyp.cvn.isnubar :                             *
*         | Float_t isnubar[common.ixn.pandora_]                             *
*Entries :   143860 : Total  Size=    1256641 bytes  File Size  =     316969 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.92     *
*............................................................................*
*Br  228 :common.ixn.pandora.nuhyp.cvn.nue : Float_t nue[common.ixn.pandora_]*
*Entries :   143860 : Total  Size=    1253725 bytes  File Size  =     314041 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.94     *
*............................................................................*
*Br  229 :common.ixn.pandora.nuhyp.cvn.numu :                                *
*         | Float_t numu[common.ixn.pandora_]                                *
*Entries :   143860 : Total  Size=    1254454 bytes  File Size  =     313463 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.95     *
*............................................................................*
*Br  230 :common.ixn.pandora.nuhyp.cvn.nutau :                               *
*         | Float_t nutau[common.ixn.pandora_]                               *
*Entries :   143860 : Total  Size=    1255183 bytes  File Size  =     313229 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.96     *
*............................................................................*
*Br  231 :common.ixn.pandora.nuhyp.cvn.nc : Float_t nc[common.ixn.pandora_]  *
*Entries :   143860 : Total  Size=    1252996 bytes  File Size  =     313406 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.95     *
*............................................................................*
*Br  232 :common.ixn.pandora.nuhyp.cvn.protons0 :                            *
*         | Float_t protons0[common.ixn.pandora_]                            *
*Entries :   143860 : Total  Size=    1257370 bytes  File Size  =     316354 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.93     *
*............................................................................*
*Br  233 :common.ixn.pandora.nuhyp.cvn.protons1 :                            *
*         | Float_t protons1[common.ixn.pandora_]                            *
*Entries :   143860 : Total  Size=    1257370 bytes  File Size  =     316354 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.93     *
*............................................................................*
*Br  234 :common.ixn.pandora.nuhyp.cvn.protons2 :                            *
*         | Float_t protons2[common.ixn.pandora_]                            *
*Entries :   143860 : Total  Size=    1257370 bytes  File Size  =     316354 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.93     *
*............................................................................*
*Br  235 :common.ixn.pandora.nuhyp.cvn.protonsN :                            *
*         | Float_t protonsN[common.ixn.pandora_]                            *
*Entries :   143860 : Total  Size=    1257370 bytes  File Size  =     316354 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.93     *
*............................................................................*
*Br  236 :common.ixn.pandora.nuhyp.cvn.chgpi0 :                              *
*         | Float_t chgpi0[common.ixn.pandora_]                              *
*Entries :   143860 : Total  Size=    1255912 bytes  File Size  =     316301 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.92     *
*............................................................................*
*Br  237 :common.ixn.pandora.nuhyp.cvn.chgpi1 :                              *
*         | Float_t chgpi1[common.ixn.pandora_]                              *
*Entries :   143860 : Total  Size=    1255912 bytes  File Size  =     316301 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.92     *
*............................................................................*
*Br  238 :common.ixn.pandora.nuhyp.cvn.chgpi2 :                              *
*         | Float_t chgpi2[common.ixn.pandora_]                              *
*Entries :   143860 : Total  Size=    1255912 bytes  File Size  =     316301 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.92     *
*............................................................................*
*Br  239 :common.ixn.pandora.nuhyp.cvn.chgpiN :                              *
*         | Float_t chgpiN[common.ixn.pandora_]                              *
*Entries :   143860 : Total  Size=    1255912 bytes  File Size  =     316301 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.92     *
*............................................................................*
*Br  240 :common.ixn.pandora.nuhyp.cvn.pizero0 :                             *
*         | Float_t pizero0[common.ixn.pandora_]                             *
*Entries :   143860 : Total  Size=    1256641 bytes  File Size  =     316969 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.92     *
*............................................................................*
*Br  241 :common.ixn.pandora.nuhyp.cvn.pizero1 :                             *
*         | Float_t pizero1[common.ixn.pandora_]                             *
*Entries :   143860 : Total  Size=    1256641 bytes  File Size  =     316969 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.92     *
*............................................................................*
*Br  242 :common.ixn.pandora.nuhyp.cvn.pizero2 :                             *
*         | Float_t pizero2[common.ixn.pandora_]                             *
*Entries :   143860 : Total  Size=    1256641 bytes  File Size  =     316969 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.92     *
*............................................................................*
*Br  243 :common.ixn.pandora.nuhyp.cvn.pizeroN :                             *
*         | Float_t pizeroN[common.ixn.pandora_]                             *
*Entries :   143860 : Total  Size=    1256641 bytes  File Size  =     316969 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.92     *
*............................................................................*
*Br  244 :common.ixn.pandora.nuhyp.cvn.neutron0 :                            *
*         | Float_t neutron0[common.ixn.pandora_]                            *
*Entries :   143860 : Total  Size=    1257370 bytes  File Size  =     316354 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.93     *
*............................................................................*
*Br  245 :common.ixn.pandora.nuhyp.cvn.neutron1 :                            *
*         | Float_t neutron1[common.ixn.pandora_]                            *
*Entries :   143860 : Total  Size=    1257370 bytes  File Size  =     316354 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.93     *
*............................................................................*
*Br  246 :common.ixn.pandora.nuhyp.cvn.neutron2 :                            *
*         | Float_t neutron2[common.ixn.pandora_]                            *
*Entries :   143860 : Total  Size=    1257370 bytes  File Size  =     316354 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.93     *
*............................................................................*
*Br  247 :common.ixn.pandora.nuhyp.cvn.neutronN :                            *
*         | Float_t neutronN[common.ixn.pandora_]                            *
*Entries :   143860 : Total  Size=    1257370 bytes  File Size  =     316354 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.93     *
*............................................................................*
*Br  248 :common.ixn.pandora.Enu.calo : Float_t calo[common.ixn.pandora_]    *
*Entries :   143860 : Total  Size=    1250092 bytes  File Size  =     871734 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.42     *
*............................................................................*
*Br  249 :common.ixn.pandora.Enu.lep_calo :                                  *
*         | Float_t lep_calo[common.ixn.pandora_]                            *
*Entries :   143860 : Total  Size=    1253008 bytes  File Size  =     313406 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.95     *
*............................................................................*
*Br  250 :common.ixn.pandora.Enu.mu_range :                                  *
*         | Float_t mu_range[common.ixn.pandora_]                            *
*Entries :   143860 : Total  Size=    1253008 bytes  File Size  =     313406 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.95     *
*............................................................................*
*Br  251 :common.ixn.pandora.Enu.mu_mcs : Float_t mu_mcs[common.ixn.pandora_]*
*Entries :   143860 : Total  Size=    1251550 bytes  File Size  =     310519 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.98     *
*............................................................................*
*Br  252 :common.ixn.pandora.Enu.e_calo : Float_t e_calo[common.ixn.pandora_]*
*Entries :   143860 : Total  Size=    1251550 bytes  File Size  =     310519 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.98     *
*............................................................................*
*Br  253 :common.ixn.pandora.Enu.regcnn : Float_t regcnn[common.ixn.pandora_]*
*Entries :   143860 : Total  Size=    1251550 bytes  File Size  =     310519 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.98     *
*............................................................................*
*Br  254 :common.ixn.pandora.part.ndlp : Int_t ndlp[common.ixn.pandora_]     *
*Entries :   143860 : Total  Size=    1250819 bytes  File Size  =     308446 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.01     *
*............................................................................*
*Br  255 :common.ixn.pandora.part.dlp : vector<caf:                          *
*         | :SRRecoParticle> dlp[common.ixn.pandora_]                        *
*Entries :   143860 : Total  Size=    2400970 bytes  File Size  =     575855 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.14     *
*............................................................................*
*Br  256 :common.ixn.pandora.part.npandora :                                 *
*         | Int_t npandora[common.ixn.pandora_]                              *
*Entries :   143860 : Total  Size=    1253735 bytes  File Size  =     425075 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.91     *
*............................................................................*
*Br  257 :common.ixn.pandora.part.pandora : vector<caf:                      *
*         | :SRRecoParticle> pandora[common.ixn.pandora_]                    *
*Entries :   143860 : Total  Size=   32419087 bytes  File Size  =   16893200 *
*Baskets :     1450 : Basket Size=      32000 bytes  Compression=   1.92     *
*............................................................................*
*Br  258 :common.ixn.pandora.part.npida : Int_t npida[common.ixn.pandora_]   *
*Entries :   143860 : Total  Size=    1251548 bytes  File Size  =     308573 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.01     *
*............................................................................*
*Br  259 :common.ixn.pandora.part.pida : vector<caf:                         *
*         | :SRRecoParticle> pida[common.ixn.pandora_]                       *
*Entries :   143860 : Total  Size=    2401699 bytes  File Size  =     577361 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.13     *
*............................................................................*
*Br  260 :common.ixn.pandora.truth :                                         *
*         | vector<unsigned long> truth[common.ixn.pandora_]                 *
*Entries :   143860 : Total  Size=    4341417 bytes  File Size  =    1061289 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.08     *
*............................................................................*
*Br  261 :common.ixn.pandora.truthOverlap :                                  *
*         | vector<float> truthOverlap[common.ixn.pandora_]                  *
*Entries :   143860 : Total  Size=    3231348 bytes  File Size  =    1762318 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.83     *
*............................................................................*
*Br  262 :common.ixn.npandora : ULong_t                                      *
*Entries :   143860 : Total  Size=    1230270 bytes  File Size  =     203293 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   5.98     *
*............................................................................*
*Br  263 :fd        :                                                        *
*Entries :   143860 : Total  Size=     358796 bytes  One basket in memory    *
*Baskets :        0 : Basket Size=      32000 bytes  Compression=   1.00     *
*............................................................................*
*Br  264 :fd.hd.pandora : Int_t fd.hd.pandora_                               *
*Entries :   143860 : Total  Size=    1306292 bytes  File Size  =     304077 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.00     *
*............................................................................*
*Br  265 :fd.hd.pandora.tracks : vector<caf::SRTrack> tracks[fd.hd.pandora_] *
*Entries :   143860 : Total  Size=    1812331 bytes  File Size  =     293179 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.13     *
*............................................................................*
*Br  266 :fd.hd.pandora.ntracks : ULong_t ntracks[fd.hd.pandora_]            *
*Entries :   143860 : Total  Size=     662180 bytes  File Size  =      91212 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.10     *
*............................................................................*
*Br  267 :fd.hd.pandora.showers : vector<caf:                                *
*         | :SRShower> showers[fd.hd.pandora_]                               *
*Entries :   143860 : Total  Size=    1813060 bytes  File Size  =     295550 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.08     *
*............................................................................*
*Br  268 :fd.hd.pandora.nshowers : ULong_t nshowers[fd.hd.pandora_]          *
*Entries :   143860 : Total  Size=     662909 bytes  File Size  =      91937 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.05     *
*............................................................................*
*Br  269 :fd.hd.npandora : ULong_t                                           *
*Entries :   143860 : Total  Size=    1226625 bytes  File Size  =      86565 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  14.00     *
*............................................................................*
*Br  270 :fd.vd.pandora : Int_t fd.vd.pandora_                               *
*Entries :   143860 : Total  Size=    1306292 bytes  File Size  =     304077 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.00     *
*............................................................................*
*Br  271 :fd.vd.pandora.tracks : vector<caf::SRTrack> tracks[fd.vd.pandora_] *
*Entries :   143860 : Total  Size=    1812331 bytes  File Size  =     293179 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.13     *
*............................................................................*
*Br  272 :fd.vd.pandora.ntracks : ULong_t ntracks[fd.vd.pandora_]            *
*Entries :   143860 : Total  Size=     662180 bytes  File Size  =      91212 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.10     *
*............................................................................*
*Br  273 :fd.vd.pandora.showers : vector<caf:                                *
*         | :SRShower> showers[fd.vd.pandora_]                               *
*Entries :   143860 : Total  Size=    1813060 bytes  File Size  =     295550 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.08     *
*............................................................................*
*Br  274 :fd.vd.pandora.nshowers : ULong_t nshowers[fd.vd.pandora_]          *
*Entries :   143860 : Total  Size=     662909 bytes  File Size  =      91937 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.05     *
*............................................................................*
*Br  275 :fd.vd.npandora : ULong_t                                           *
*Entries :   143860 : Total  Size=    1226625 bytes  File Size  =      86565 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  14.00     *
*............................................................................*
*Br  276 :fd.pd_hd.pandora : Int_t fd.pd_hd.pandora_                         *
*Entries :   143860 : Total  Size=    1308533 bytes  File Size  =     307000 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.97     *
*............................................................................*
*Br  277 :fd.pd_hd.pandora.tracks : vector<caf:                              *
*         | :SRTrack> tracks[fd.pd_hd.pandora_]                              *
*Entries :   143860 : Total  Size=    1814524 bytes  File Size  =     297526 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.05     *
*............................................................................*
*Br  278 :fd.pd_hd.pandora.ntracks : ULong_t ntracks[fd.pd_hd.pandora_]      *
*Entries :   143860 : Total  Size=     664373 bytes  File Size  =      93387 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.95     *
*............................................................................*
*Br  279 :fd.pd_hd.pandora.showers : vector<caf:                             *
*         | :SRShower> showers[fd.pd_hd.pandora_]                            *
*Entries :   143860 : Total  Size=    1815253 bytes  File Size  =     296600 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.07     *
*............................................................................*
*Br  280 :fd.pd_hd.pandora.nshowers : ULong_t nshowers[fd.pd_hd.pandora_]    *
*Entries :   143860 : Total  Size=     665102 bytes  File Size  =      94112 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.91     *
*............................................................................*
*Br  281 :fd.pd_hd.npandora : ULong_t                                        *
*Entries :   143860 : Total  Size=    1228812 bytes  File Size  =      88740 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  13.68     *
*............................................................................*
*Br  282 :fd.pd_vd.pandora : Int_t fd.pd_vd.pandora_                         *
*Entries :   143860 : Total  Size=    1308533 bytes  File Size  =     307000 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.97     *
*............................................................................*
*Br  283 :fd.pd_vd.pandora.tracks : vector<caf:                              *
*         | :SRTrack> tracks[fd.pd_vd.pandora_]                              *
*Entries :   143860 : Total  Size=    1814524 bytes  File Size  =     297526 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.05     *
*............................................................................*
*Br  284 :fd.pd_vd.pandora.ntracks : ULong_t ntracks[fd.pd_vd.pandora_]      *
*Entries :   143860 : Total  Size=     664373 bytes  File Size  =      93387 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.95     *
*............................................................................*
*Br  285 :fd.pd_vd.pandora.showers : vector<caf:                             *
*         | :SRShower> showers[fd.pd_vd.pandora_]                            *
*Entries :   143860 : Total  Size=    1815253 bytes  File Size  =     296600 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.07     *
*............................................................................*
*Br  286 :fd.pd_vd.pandora.nshowers : ULong_t nshowers[fd.pd_vd.pandora_]    *
*Entries :   143860 : Total  Size=     665102 bytes  File Size  =      94112 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.91     *
*............................................................................*
*Br  287 :fd.pd_vd.npandora : ULong_t                                        *
*Entries :   143860 : Total  Size=    1228812 bytes  File Size  =      88740 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  13.68     *
*............................................................................*
*Br  288 :nd        :                                                        *
*Entries :   143860 : Total  Size=    1677809 bytes  One basket in memory    *
*Baskets :        0 : Basket Size=      32000 bytes  Compression=   1.00     *
*............................................................................*
*Br  289 :nd.lar.dlp : Int_t nd.lar.dlp_                                     *
*Entries :   143860 : Total  Size=    1337106 bytes  File Size  =     445603 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.73     *
*............................................................................*
*Br  290 :nd.lar.dlp.tracks : vector<caf::SRTrack> tracks[nd.lar.dlp_]       *
*Entries :   143860 : Total  Size=   40943164 bytes  File Size  =   22078801 *
*Baskets :     1583 : Basket Size=      32000 bytes  Compression=   1.85     *
*............................................................................*
*Br  291 :nd.lar.dlp.ntracks : ULong_t ntracks[nd.lar.dlp_]                  *
*Entries :   143860 : Total  Size=    2235019 bytes  File Size  =     471438 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.71     *
*............................................................................*
*Br  292 :nd.lar.dlp.showers : vector<caf::SRShower> showers[nd.lar.dlp_]    *
*Entries :   143860 : Total  Size=   13091947 bytes  File Size  =    6403852 *
*Baskets :      772 : Basket Size=      32000 bytes  Compression=   2.04     *
*............................................................................*
*Br  293 :nd.lar.dlp.nshowers : ULong_t nshowers[nd.lar.dlp_]                *
*Entries :   143860 : Total  Size=    2235748 bytes  File Size  =     456017 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.87     *
*............................................................................*
*Br  294 :nd.lar.dlp.flash : vector<caf::FlashMatch> flash[nd.lar.dlp_]      *
*Entries :   143860 : Total  Size=    6322429 bytes  File Size  =     695496 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   9.07     *
*............................................................................*
*Br  295 :nd.lar.ndlp : ULong_t                                              *
*Entries :   143860 : Total  Size=    1224438 bytes  File Size  =     211042 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   5.73     *
*............................................................................*
*Br  296 :nd.lar.pandora : Int_t nd.lar.pandora_                             *
*Entries :   143860 : Total  Size=    1336510 bytes  File Size  =     434260 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.80     *
*............................................................................*
*Br  297 :nd.lar.pandora.tracks : vector<caf:                                *
*         | :SRTrack> tracks[nd.lar.pandora_]                                *
*Entries :   143860 : Total  Size=   29085135 bytes  File Size  =   15405936 *
*Baskets :     1450 : Basket Size=      32000 bytes  Compression=   1.89     *
*............................................................................*
*Br  298 :nd.lar.pandora.ntracks : ULong_t ntracks[nd.lar.pandora_]          *
*Entries :   143860 : Total  Size=    1829983 bytes  File Size  =     420128 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.32     *
*............................................................................*
*Br  299 :nd.lar.pandora.showers : vector<caf:                               *
*         | :SRShower> showers[nd.lar.pandora_]                              *
*Entries :   143860 : Total  Size=    7185217 bytes  File Size  =    3570983 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.01     *
*............................................................................*
*Br  300 :nd.lar.pandora.nshowers : ULong_t nshowers[nd.lar.pandora_]        *
*Entries :   143860 : Total  Size=    1830712 bytes  File Size  =     397126 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.57     *
*............................................................................*
*Br  301 :nd.lar.pandora.flash : vector<caf:                                 *
*         | :FlashMatch> flash[nd.lar.pandora_]                              *
*Entries :   143860 : Total  Size=    2971309 bytes  File Size  =     596454 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.96     *
*............................................................................*
*Br  302 :nd.lar.npandora : ULong_t                                          *
*Entries :   143860 : Total  Size=    1227354 bytes  File Size  =     200393 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.05     *
*............................................................................*
*Br  303 :nd.lar.flashes : Int_t nd.lar.flashes_                             *
*Entries :   143860 : Total  Size=    1322042 bytes  File Size  =     512442 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.38     *
*............................................................................*
*Br  304 :nd.lar.flashes.id : Int_t id[nd.lar.flashes_]                      *
*Entries :   143860 : Total  Size=    5709774 bytes  File Size  =    2154939 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.64     *
*............................................................................*
*Br  305 :nd.lar.flashes.tpc_id : Int_t tpc_id[nd.lar.flashes_]              *
*Entries :   143860 : Total  Size=    5712690 bytes  File Size  =    1235676 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.61     *
*............................................................................*
*Br  306 :nd.lar.flashes.time : Double_t time[nd.lar.flashes_]               *
*Entries :   143860 : Total  Size=   10761740 bytes  File Size  =    5715383 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.88     *
*............................................................................*
*Br  307 :nd.lar.flashes.time_width : Double_t time_width[nd.lar.flashes_]   *
*Entries :   143860 : Total  Size=   10766114 bytes  File Size  =    1735633 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.19     *
*............................................................................*
*Br  308 :nd.lar.flashes.total_pe : Float_t total_pe[nd.lar.flashes_]        *
*Entries :   143860 : Total  Size=    5714148 bytes  File Size  =    5150402 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.11     *
*............................................................................*
*Br  309 :nd.lar.nflashes : ULong_t                                          *
*Entries :   143860 : Total  Size=    1227354 bytes  File Size  =     279067 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.34     *
*............................................................................*
*Br  310 :nd.gar.nixn : ULong_t                                              *
*Entries :   143860 : Total  Size=    1224438 bytes  File Size  =      84390 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  14.33     *
*............................................................................*
*Br  311 :nd.gar.ixn : Int_t nd.gar.ixn_                                     *
*Entries :   143860 : Total  Size=    1423569 bytes  File Size  =     301645 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.03     *
*............................................................................*
*Br  312 :nd.gar.ixn.tracks : vector<caf::SRGArTrack> tracks[nd.gar.ixn_]    *
*Entries :   143860 : Total  Size=    1810138 bytes  File Size  =     290929 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.17     *
*............................................................................*
*Br  313 :nd.gar.ixn.ntracks : ULong_t ntracks[nd.gar.ixn_]                  *
*Entries :   143860 : Total  Size=     659987 bytes  File Size  =      89037 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.24     *
*............................................................................*
*Br  314 :nd.gar.ixn.clusters : vector<caf::SRGArECAL> clusters[nd.gar.ixn_] *
*Entries :   143860 : Total  Size=    1811596 bytes  File Size  =     292353 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.15     *
*............................................................................*
*Br  315 :nd.gar.ixn.nclusters : ULong_t nclusters[nd.gar.ixn_]              *
*Entries :   143860 : Total  Size=     661445 bytes  File Size  =      90487 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.14     *
*............................................................................*
*Br  316 :nd.gar.ixn.nFSP : Int_t nFSP[nd.gar.ixn_]                          *
*Entries :   143860 : Total  Size=     657800 bytes  File Size  =      86862 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.40     *
*............................................................................*
*Br  317 :nd.gar.ixn.pdg : vector<int> pdg[nd.gar.ixn_]                      *
*Entries :   143860 : Total  Size=    1520231 bytes  File Size  =     328625 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.58     *
*............................................................................*
*Br  318 :nd.gar.ixn.ptrue : vector<float> ptrue[nd.gar.ixn_]                *
*Entries :   143860 : Total  Size=    1521689 bytes  File Size  =     332226 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.54     *
*............................................................................*
*Br  319 :nd.gar.ixn.trkLen : vector<float> trkLen[nd.gar.ixn_]              *
*Entries :   143860 : Total  Size=    1522418 bytes  File Size  =     332509 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.53     *
*............................................................................*
*Br  320 :nd.gar.ixn.trkLenPerp : vector<float> trkLenPerp[nd.gar.ixn_]      *
*Entries :   143860 : Total  Size=    1525334 bytes  File Size  =     336336 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.49     *
*............................................................................*
*Br  321 :nd.gar.ixn.partEvReco : vector<float> partEvReco[nd.gar.ixn_]      *
*Entries :   143860 : Total  Size=    1525334 bytes  File Size  =     336336 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.49     *
*............................................................................*
*Br  322 :nd.gar.ixn.gastpc_pi_pl_mult : Int_t gastpc_pi_pl_mult[nd.gar.ixn_]*
*Entries :   143860 : Total  Size=     667277 bytes  File Size  =      96287 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.77     *
*............................................................................*
*Br  323 :nd.gar.ixn.gastpc_pi_min_mult :                                    *
*         | Int_t gastpc_pi_min_mult[nd.gar.ixn_]                            *
*Entries :   143860 : Total  Size=     668006 bytes  File Size  =      97012 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.73     *
*............................................................................*
*Br  324 :nd.tms.ixn : Int_t nd.tms.ixn_                                     *
*Entries :   143860 : Total  Size=    1274199 bytes  File Size  =     301645 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.03     *
*............................................................................*
*Br  325 :nd.tms.ixn.tracks : vector<caf::SRTrack> tracks[nd.tms.ixn_]       *
*Entries :   143860 : Total  Size=    1810138 bytes  File Size  =     291844 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.15     *
*............................................................................*
*Br  326 :nd.tms.ixn.ntracks : ULong_t ntracks[nd.tms.ixn_]                  *
*Entries :   143860 : Total  Size=     659987 bytes  File Size  =      89037 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.24     *
*............................................................................*
*Br  327 :nd.tms.nixn : ULong_t                                              *
*Entries :   143860 : Total  Size=    1224438 bytes  File Size  =      84390 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  14.33     *
*............................................................................*
*Br  328 :nd.sand.nixn : ULong_t                                             *
*Entries :   143860 : Total  Size=    1225167 bytes  File Size  =      85115 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  14.22     *
*............................................................................*
*Br  329 :nd.sand.ixn : Int_t nd.sand.ixn_                                   *
*Entries :   143860 : Total  Size=    1424349 bytes  File Size  =     303347 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.01     *
*............................................................................*
*Br  330 :nd.sand.ixn.tracks : vector<caf::SRGArTrack> tracks[nd.sand.ixn_]  *
*Entries :   143860 : Total  Size=    1810869 bytes  File Size  =     290109 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.19     *
*............................................................................*
*Br  331 :nd.sand.ixn.ntracks : ULong_t ntracks[nd.sand.ixn_]                *
*Entries :   143860 : Total  Size=     660718 bytes  File Size  =      89762 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.19     *
*............................................................................*
*Br  332 :nd.sand.ixn.clusters : vector<caf:                                 *
*         | :SRGArECAL> clusters[nd.sand.ixn_]                               *
*Entries :   143860 : Total  Size=    1812327 bytes  File Size  =     294046 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.11     *
*............................................................................*
*Br  333 :nd.sand.ixn.nclusters : ULong_t nclusters[nd.sand.ixn_]            *
*Entries :   143860 : Total  Size=     662176 bytes  File Size  =      91212 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.10     *
*............................................................................*
*Br  334 :nd.sand.ixn.nFSP : Int_t nFSP[nd.sand.ixn_]                        *
*Entries :   143860 : Total  Size=     658531 bytes  File Size  =      87587 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   7.35     *
*............................................................................*
*Br  335 :nd.sand.ixn.pdg : vector<int> pdg[nd.sand.ixn_]                    *
*Entries :   143860 : Total  Size=    1520962 bytes  File Size  =     331534 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.54     *
*............................................................................*
*Br  336 :nd.sand.ixn.ptrue : vector<float> ptrue[nd.sand.ixn_]              *
*Entries :   143860 : Total  Size=    1522420 bytes  File Size  =     332509 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.53     *
*............................................................................*
*Br  337 :nd.sand.ixn.trkLen : vector<float> trkLen[nd.sand.ixn_]            *
*Entries :   143860 : Total  Size=    1523149 bytes  File Size  =     334014 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.52     *
*............................................................................*
*Br  338 :nd.sand.ixn.trkLenPerp : vector<float> trkLenPerp[nd.sand.ixn_]    *
*Entries :   143860 : Total  Size=    1526065 bytes  File Size  =     337253 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.48     *
*............................................................................*
*Br  339 :nd.sand.ixn.partEvReco : vector<float> partEvReco[nd.sand.ixn_]    *
*Entries :   143860 : Total  Size=    1526065 bytes  File Size  =     337253 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.48     *
*............................................................................*
*Br  340 :nd.sand.ixn.gastpc_pi_pl_mult :                                    *
*         | Int_t gastpc_pi_pl_mult[nd.sand.ixn_]                            *
*Entries :   143860 : Total  Size=     668008 bytes  File Size  =      97012 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.73     *
*............................................................................*
*Br  341 :nd.sand.ixn.gastpc_pi_min_mult :                                   *
*         | Int_t gastpc_pi_min_mult[nd.sand.ixn_]                           *
*Entries :   143860 : Total  Size=     668737 bytes  File Size  =      97737 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.69     *
*............................................................................*
*Br  342 :nd.minerva.ixn : Int_t nd.minerva.ixn_                             *
*Entries :   143860 : Total  Size=    1352869 bytes  File Size  =     466404 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.61     *
*............................................................................*
*Br  343 :nd.minerva.ixn.tracks : vector<caf:                                *
*         | :SRTrack> tracks[nd.minerva.ixn_]                                *
*Entries :   143860 : Total  Size=   58183898 bytes  File Size  =   27644773 *
*Baskets :     2175 : Basket Size=      32000 bytes  Compression=   2.10     *
*............................................................................*
*Br  344 :nd.minerva.ixn.ntracks : ULong_t ntracks[nd.minerva.ixn_]          *
*Entries :   143860 : Total  Size=    5069895 bytes  File Size  =     753119 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.71     *
*............................................................................*
*Br  345 :nd.minerva.ixn.showers : vector<caf:                               *
*         | :SRShower> showers[nd.minerva.ixn_]                              *
*Entries :   143860 : Total  Size=   43368499 bytes  File Size  =   20647854 *
*Baskets :     1564 : Basket Size=      32000 bytes  Compression=   2.10     *
*............................................................................*
*Br  346 :nd.minerva.ixn.nshowers : ULong_t nshowers[nd.minerva.ixn_]        *
*Entries :   143860 : Total  Size=    5070624 bytes  File Size  =     860631 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   5.87     *
*............................................................................*
*Br  347 :nd.minerva.nixn : ULong_t                                          *
*Entries :   143860 : Total  Size=    1227354 bytes  File Size  =     235688 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   5.14     *
*............................................................................*
*Br  348 :nd.trkmatch.nextrap : ULong_t                                      *
*Entries :   143860 : Total  Size=    1230270 bytes  File Size  =     210700 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   5.77     *
*............................................................................*
*Br  349 :nd.trkmatch.extrap : Int_t nd.trkmatch.extrap_                     *
*Entries :   143860 : Total  Size=    1699176 bytes  File Size  =     444466 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   2.75     *
*............................................................................*
*Br  350 :nd.trkmatch.extrap.larid.reco : Int_t reco[nd.trkmatch.extrap_]    *
*Entries :   143860 : Total  Size=    1425706 bytes  File Size  =     380666 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.71     *
*............................................................................*
*Br  351 :nd.trkmatch.extrap.larid.ixn : Int_t ixn[nd.trkmatch.extrap_]      *
*Entries :   143860 : Total  Size=    1424977 bytes  File Size  =     410063 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.44     *
*............................................................................*
*Br  352 :nd.trkmatch.extrap.larid.idx : Int_t idx[nd.trkmatch.extrap_]      *
*Entries :   143860 : Total  Size=    1424977 bytes  File Size  =     349218 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.04     *
*............................................................................*
*Br  353 :nd.trkmatch.extrap.tmsid.ixn : Int_t ixn[nd.trkmatch.extrap_]      *
*Entries :   143860 : Total  Size=    1424977 bytes  File Size  =     292680 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.82     *
*............................................................................*
*Br  354 :nd.trkmatch.extrap.tmsid.idx : Int_t idx[nd.trkmatch.extrap_]      *
*Entries :   143860 : Total  Size=    1424977 bytes  File Size  =     292680 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.82     *
*............................................................................*
*Br  355 :nd.trkmatch.extrap.minervaid.ixn : Int_t ixn[nd.trkmatch.extrap_]  *
*Entries :   143860 : Total  Size=    1427885 bytes  File Size  =     448337 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.15     *
*............................................................................*
*Br  356 :nd.trkmatch.extrap.minervaid.idx : Int_t idx[nd.trkmatch.extrap_]  *
*Entries :   143860 : Total  Size=    1427885 bytes  File Size  =     308387 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.58     *
*............................................................................*
*Br  357 :nd.trkmatch.extrap.garid.ixn : Int_t ixn[nd.trkmatch.extrap_]      *
*Entries :   143860 : Total  Size=    1424977 bytes  File Size  =     292680 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.82     *
*............................................................................*
*Br  358 :nd.trkmatch.extrap.garid.idx : Int_t idx[nd.trkmatch.extrap_]      *
*Entries :   143860 : Total  Size=    1424977 bytes  File Size  =     292680 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.82     *
*............................................................................*
*Br  359 :nd.trkmatch.extrap.transdispl :                                    *
*         | Float_t transdispl[nd.trkmatch.extrap_]                          *
*Entries :   143860 : Total  Size=    1425718 bytes  File Size  =    1014047 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.39     *
*............................................................................*
*Br  360 :nd.trkmatch.extrap.angdispl : Float_t angdispl[nd.trkmatch.extrap_]*
*Entries :   143860 : Total  Size=    1424260 bytes  File Size  =     806953 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   1.75     *
*............................................................................*
*Br  361 :nd.trkmatch.extrap.trk.start.x : Float_t x[nd.trkmatch.extrap_]    *
*Entries :   143860 : Total  Size=    1426427 bytes  File Size  =     294798 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.79     *
*............................................................................*
*Br  362 :nd.trkmatch.extrap.trk.start.y : Float_t y[nd.trkmatch.extrap_]    *
*Entries :   143860 : Total  Size=    1426427 bytes  File Size  =     294798 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.79     *
*............................................................................*
*Br  363 :nd.trkmatch.extrap.trk.start.z : Float_t z[nd.trkmatch.extrap_]    *
*Entries :   143860 : Total  Size=    1426427 bytes  File Size  =     294798 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.79     *
*............................................................................*
*Br  364 :nd.trkmatch.extrap.trk.end.x : Float_t x[nd.trkmatch.extrap_]      *
*Entries :   143860 : Total  Size=    1424973 bytes  File Size  =     294958 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.78     *
*............................................................................*
*Br  365 :nd.trkmatch.extrap.trk.end.y : Float_t y[nd.trkmatch.extrap_]      *
*Entries :   143860 : Total  Size=    1424973 bytes  File Size  =     294958 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.78     *
*............................................................................*
*Br  366 :nd.trkmatch.extrap.trk.end.z : Float_t z[nd.trkmatch.extrap_]      *
*Entries :   143860 : Total  Size=    1424973 bytes  File Size  =     294958 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.78     *
*............................................................................*
*Br  367 :nd.trkmatch.extrap.trk.dir.x : Float_t x[nd.trkmatch.extrap_]      *
*Entries :   143860 : Total  Size=    1424973 bytes  File Size  =     294958 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.78     *
*............................................................................*
*Br  368 :nd.trkmatch.extrap.trk.dir.y : Float_t y[nd.trkmatch.extrap_]      *
*Entries :   143860 : Total  Size=    1424973 bytes  File Size  =     294958 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.78     *
*............................................................................*
*Br  369 :nd.trkmatch.extrap.trk.dir.z : Float_t z[nd.trkmatch.extrap_]      *
*Entries :   143860 : Total  Size=    1424973 bytes  File Size  =     294958 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.78     *
*............................................................................*
*Br  370 :nd.trkmatch.extrap.trk.enddir.x : Float_t x[nd.trkmatch.extrap_]   *
*Entries :   143860 : Total  Size=    1427154 bytes  File Size  =     297244 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.75     *
*............................................................................*
*Br  371 :nd.trkmatch.extrap.trk.enddir.y : Float_t y[nd.trkmatch.extrap_]   *
*Entries :   143860 : Total  Size=    1427154 bytes  File Size  =     297244 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.75     *
*............................................................................*
*Br  372 :nd.trkmatch.extrap.trk.enddir.z : Float_t z[nd.trkmatch.extrap_]   *
*Entries :   143860 : Total  Size=    1427154 bytes  File Size  =     297244 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.75     *
*............................................................................*
*Br  373 :nd.trkmatch.extrap.trk.Evis : Float_t Evis[nd.trkmatch.extrap_]    *
*Entries :   143860 : Total  Size=    1424252 bytes  File Size  =     294259 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.79     *
*............................................................................*
*Br  374 :nd.trkmatch.extrap.trk.qual : Float_t qual[nd.trkmatch.extrap_]    *
*Entries :   143860 : Total  Size=    1424252 bytes  File Size  =     294259 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.79     *
*............................................................................*
*Br  375 :nd.trkmatch.extrap.trk.len_gcm2 :                                  *
*         | Float_t len_gcm2[nd.trkmatch.extrap_]                            *
*Entries :   143860 : Total  Size=    1427168 bytes  File Size  =     297244 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.75     *
*............................................................................*
*Br  376 :nd.trkmatch.extrap.trk.len_cm : Float_t len_cm[nd.trkmatch.extrap_]*
*Entries :   143860 : Total  Size=    1425710 bytes  File Size  =     295088 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.78     *
*............................................................................*
*Br  377 :nd.trkmatch.extrap.trk.E : Float_t E[nd.trkmatch.extrap_]          *
*Entries :   143860 : Total  Size=    1422065 bytes  File Size  =     291984 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.82     *
*............................................................................*
*Br  378 :nd.trkmatch.extrap.trk.truth : vector<caf:                         *
*         | :TrueParticleID> truth[nd.trkmatch.extrap_]                      *
*Entries :   143860 : Total  Size=    2575861 bytes  File Size  =     590477 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.34     *
*............................................................................*
*Br  379 :nd.trkmatch.extrap.trk.truthOverlap :                              *
*         | vector<float> truthOverlap[nd.trkmatch.extrap_]                  *
*Entries :   143860 : Total  Size=    2293244 bytes  File Size  =     599252 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.80     *
*............................................................................*
*Br  380 :nd.shwmatch.nextrap : ULong_t                                      *
*Entries :   143860 : Total  Size=    1230270 bytes  File Size  =      90190 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=  13.48     *
*............................................................................*
*Br  381 :nd.shwmatch.extrap : Int_t nd.shwmatch.extrap_                     *
*Entries :   143860 : Total  Size=    1459794 bytes  File Size  =     307345 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   3.97     *
*............................................................................*
*Br  382 :nd.shwmatch.extrap.larid.reco : Int_t reco[nd.shwmatch.extrap_]    *
*Entries :   143860 : Total  Size=     668010 bytes  File Size  =      97012 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.73     *
*............................................................................*
*Br  383 :nd.shwmatch.extrap.larid.ixn : Int_t ixn[nd.shwmatch.extrap_]      *
*Entries :   143860 : Total  Size=     667281 bytes  File Size  =      96287 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.77     *
*............................................................................*
*Br  384 :nd.shwmatch.extrap.larid.idx : Int_t idx[nd.shwmatch.extrap_]      *
*Entries :   143860 : Total  Size=     667281 bytes  File Size  =      96287 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.77     *
*............................................................................*
*Br  385 :nd.shwmatch.extrap.minervaid.ixn : Int_t ixn[nd.shwmatch.extrap_]  *
*Entries :   143860 : Total  Size=     670189 bytes  File Size  =      99187 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.61     *
*............................................................................*
*Br  386 :nd.shwmatch.extrap.minervaid.idx : Int_t idx[nd.shwmatch.extrap_]  *
*Entries :   143860 : Total  Size=     670189 bytes  File Size  =      99187 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.61     *
*............................................................................*
*Br  387 :nd.shwmatch.extrap.shw.start.x : Float_t x[nd.shwmatch.extrap_]    *
*Entries :   143860 : Total  Size=     668731 bytes  File Size  =      97737 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.69     *
*............................................................................*
*Br  388 :nd.shwmatch.extrap.shw.start.y : Float_t y[nd.shwmatch.extrap_]    *
*Entries :   143860 : Total  Size=     668731 bytes  File Size  =      97737 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.69     *
*............................................................................*
*Br  389 :nd.shwmatch.extrap.shw.start.z : Float_t z[nd.shwmatch.extrap_]    *
*Entries :   143860 : Total  Size=     668731 bytes  File Size  =      97737 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.69     *
*............................................................................*
*Br  390 :nd.shwmatch.extrap.shw.direction.x : Float_t x[nd.shwmatch.extrap_]*
*Entries :   143860 : Total  Size=     671639 bytes  File Size  =     100637 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.52     *
*............................................................................*
*Br  391 :nd.shwmatch.extrap.shw.direction.y : Float_t y[nd.shwmatch.extrap_]*
*Entries :   143860 : Total  Size=     671639 bytes  File Size  =     100637 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.52     *
*............................................................................*
*Br  392 :nd.shwmatch.extrap.shw.direction.z : Float_t z[nd.shwmatch.extrap_]*
*Entries :   143860 : Total  Size=     671639 bytes  File Size  =     100637 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.52     *
*............................................................................*
*Br  393 :nd.shwmatch.extrap.shw.Evis : Float_t Evis[nd.shwmatch.extrap_]    *
*Entries :   143860 : Total  Size=     666556 bytes  File Size  =      95562 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.82     *
*............................................................................*
*Br  394 :nd.shwmatch.extrap.shw.truth : vector<caf:                         *
*         | :TrueParticleID> truth[nd.shwmatch.extrap_]                      *
*Entries :   143860 : Total  Size=    1818165 bytes  File Size  =     298979 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   6.03     *
*............................................................................*
*Br  395 :nd.shwmatch.extrap.shw.truthOverlap :                              *
*         | vector<float> truthOverlap[nd.shwmatch.extrap_]                  *
*Entries :   143860 : Total  Size=    1535548 bytes  File Size  =     346604 *
*Baskets :      725 : Basket Size=      32000 bytes  Compression=   4.39     *
*............................................................................*
```

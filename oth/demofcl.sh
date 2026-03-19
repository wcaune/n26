# Fhicls here: https://github.com/DUNE/dunesw/tree/develop/fcl/protodunevd

# Examples:
# gen stage
lar -n1 -c gen_protodunevd_cosmics.fcl -o gen.root
# lar -n1 -c gen_protodunevd_electron_1GeV.fcl -o gen.root

# g4 stage1
lar -n1 -c protodunevd_refactored_g4_stage1.fcl gen.root -o g4a.root
# g4 stage2
lar -n1 -c protodunevd_refactored_g4_stage2_pureAr.fcl g4a.root -o g4b.root

# detsim stage (w/o Xe doping)
lar -n1 -c protodunevd_refactored_detsim_pureAr.fcl g4b.root -o detsim.root

# reco stage
# lar -n1 -c protodunevd_reco.fcl detsim.root -o reco1.root

#!/bin/bash

# This macro is used to generate the ROOT dictionaries
# To use the ctest launchers one needs some environment variables which
# are only present when running CMake. To have the same environment at
# the time the dictionary is build this script is used which is build
# at the time cmake runs.

# Setup the needed environment
export LD_LIBRARY_PATH=/home/eicc/software/FairSoft/install/lib::/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib:/home/eicc/FairRoot/build_18.4.2/lib:/home/eicc/software/FairSoft/install/lib:/home/eicc/software/FairSoft/install/lib/Geant3-3.7.0/..
export DYLD_LIBRARY_PATH=/home/eicc/software/FairSoft/install/lib::/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib:/home/eicc/FairRoot/build_18.4.2/lib:/home/eicc/software/FairSoft/install/lib:/home/eicc/software/FairSoft/install/lib/Geant3-3.7.0/..
export ROOTSYS=/home/eicc/software/FairSoft/install

/home/eicc/software/FairSoft/install/bin/rootcint -f /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/fsim/G__fsimDict.cxx -rmf /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libfsim.rootmap -rml fsim.so  -c   -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/trackbase -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsData -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsData/PidData -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/passive -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/fsim -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/fsim/scrut -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoBase -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools -I/home/eicc/software/FairSoft/install/include/root -I/home/eicc/software/FairSoft/install/include -I/home/eicc/FairRoot/build_18.4.2/include ChnsFastSim.h ChnsFsmTrack.h ChnsFsmResponse.h ChnsFsmAbsDet.h ChnsFsmDetFactory.h ChnsFsmEmcBarrel.h ChnsFsmEmcBwCap.h ChnsFsmEmcFwCap.h ChnsFsmEmcFS.h ChnsFsmTpc.h ChnsFsmStt.h ChnsFsmMdcFS.h ChnsFsmMdcTS.h ChnsFsmRich.h ChnsFsmDrcDisc.h ChnsFsmDrcBarrel.h ChnsFsmEffTracker.h ChnsFsmMvd.h ChnsFsmMvd2.h ChnsFsmTof.h ChnsFsmTofBwCap.h ChnsFsmTofFwCap.h ChnsFsmGemBwCap.h ChnsFsmGemFwCap.h ChnsFsmSimpleTracker.h ChnsFsmCmpDet.h ChnsFsmCombiDet.h ChnsFsmRandom.h ChnsFsmMvdPid.h ChnsFsmTpcPid.h ChnsFsmSttPid.h ChnsFsmSimpleVtx.h ChnsFsmMdtPid.h ChnsFsmEmcPid.h ChnsFsmIdealPid.h fsimLinkDef.h

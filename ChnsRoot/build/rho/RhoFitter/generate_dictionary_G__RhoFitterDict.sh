#!/bin/bash

# This macro is used to generate the ROOT dictionaries
# To use the ctest launchers one needs some environment variables which
# are only present when running CMake. To have the same environment at
# the time the dictionary is build this script is used which is build
# at the time cmake runs.

# Setup the needed environment
export LD_LIBRARY_PATH=/home/eicc/software/FairSoft/install/lib::/data2/rwang/ChnsRoot/build/lib:/home/eicc/FairRoot/build_18.4.2/lib:/home/eicc/software/FairSoft/install/lib:/home/eicc/software/FairSoft/install/lib/Geant3-3.7.0/..
export DYLD_LIBRARY_PATH=/home/eicc/software/FairSoft/install/lib::/data2/rwang/ChnsRoot/build/lib:/home/eicc/FairRoot/build_18.4.2/lib:/home/eicc/software/FairSoft/install/lib:/home/eicc/software/FairSoft/install/lib/Geant3-3.7.0/..
export ROOTSYS=/home/eicc/software/FairSoft/install

/home/eicc/software/FairSoft/install/bin/rootcint -f /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/rho/RhoFitter/G__RhoFitterDict.cxx -rmf /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib/libRhoFitter.rootmap -rml RhoFitter.so  -c   -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/field -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsData -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsData/PidData -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoBase -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoMath -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoFitter -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoSelector -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoConstraints -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoTools -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoHistogram -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho -I/home/eicc/software/FairSoft/install/include/root -I/home/eicc/software/FairSoft/install/include -I/home/eicc/FairRoot/build_18.4.2/include Rho4CFitter.h RhoKinVtxFitter.h RhoKinFitter.h RhoVtxPoca.h RhoKalmanVtxFitter.h RhoDecayTreeFitter.h RhoFitter_LinkDef.h

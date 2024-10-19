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

/home/eicc/software/FairSoft/install/bin/rootcint -f /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/ChnsGenerators/G__ChnsGenDict.cxx -rmf /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libChnsGen.rootmap -rml ChnsGen.so  -c   -I/home/eicc/software/FairSoft/install/include -I/home/eicc/software/FairSoft/install/include -I/home/eicc/FairRoot/build_18.4.2/include -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsGenerators -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/generators -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsData -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/gconfig -I/home/eicc/software/FairSoft/install/include/root -I/home/eicc/software/FairSoft/install/include Pythia6Generator.h ChnsBoxGenerator.h ChnsEvtGenGenerator.h ChnsPlutoGenerator.h ChnsJamGenerator.h PDataBase.h PMesh.h PParticle.h PStaticData.h PStdData.h PValues.h GenLinkDef.h

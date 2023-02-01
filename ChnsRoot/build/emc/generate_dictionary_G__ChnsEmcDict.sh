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

/home/eicc/software/FairSoft/install/bin/rootcint -f /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/emc/G__ChnsEmcDict.cxx -rmf /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib/libChnsEmc.rootmap -rml ChnsEmc.so  -c   -I/home/eicc/FairRoot/build_18.4.2/include -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsData -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/emc/EmcMC -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/emc/EmcReco -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/emc -I/home/eicc/software/FairSoft/install/include/root -I/home/eicc/software/FairSoft/install/include ChnsEmcReadPar.h ChnsEmcContFact.h EmcMC/ChnsEmc.h EmcMC/ChnsEmcGeo.h EmcMC/ChnsEmcGeoPar.h EmcMC/ChnsEmcPoint.h EmcReco/ChnsEmcDigiTask.h EmcReco/ChnsEmcDigi.h EmcReco/ChnsEmcClusterTask.h EmcReco/ChnsEmcCluster.h EmcReco/ChnsEmcParticleTask.h EmcReco/ChnsEmcParticle.h ChnsEmcLinkDef.h

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

/home/eicc/software/FairSoft/install/bin/rootcint -f /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/ChnsGenerators/EvtGen/EvtGenDirect/G__EvtGenDirectDict.cxx -rmf /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib/libEvtGenDirect.rootmap -rml EvtGenDirect.so  -c   -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsGenerators/EvtGen/EvtGenDirect -I/home/eicc/software/FairSoft/install/include -I/home/eicc/software/FairSoft/install/include/root -I/home/eicc/software/FairSoft/install/include -I/home/eicc/FairRoot/build_18.4.2/include -I/home/eicc/software/FairSoft/install/include -I/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsGenerators/EvtGen/EvtGen/R02-00-00 ChnsEvtGenDirect.h EvtGenDirectLinkDef.h

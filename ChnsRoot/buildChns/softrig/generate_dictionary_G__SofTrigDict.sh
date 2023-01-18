#!/bin/bash

# This macro is used to generate the ROOT dictionaries
# To use the ctest launchers one needs some environment variables which
# are only present when running CMake. To have the same environment at
# the time the dictionary is build this script is used which is build
# at the time cmake runs.

# Setup the needed environment
export LD_LIBRARY_PATH=/home/eicc/software/FairSoft/install/lib::/home/hexh/simulation/ChnsRoot/buildChns/lib:/home/eicc/FairRoot/build_18.4.2/lib:/home/eicc/software/FairSoft/install/lib:/home/eicc/software/FairSoft/install/lib/Geant3-3.7.0/..
export DYLD_LIBRARY_PATH=/home/eicc/software/FairSoft/install/lib::/home/hexh/simulation/ChnsRoot/buildChns/lib:/home/eicc/FairRoot/build_18.4.2/lib:/home/eicc/software/FairSoft/install/lib:/home/eicc/software/FairSoft/install/lib/Geant3-3.7.0/..
export ROOTSYS=/home/eicc/software/FairSoft/install

/home/eicc/software/FairSoft/install/bin/rootcint -f /home/hexh/simulation/ChnsRoot/buildChns/softrig/G__SofTrigDict.cxx -rmf /home/hexh/simulation/ChnsRoot/buildChns/lib/libSofTrig.rootmap -rml SofTrig.so  -c   -I/home/hexh/simulation/ChnsRoot/field -I/home/hexh/simulation/ChnsRoot/trackbase -I/home/hexh/simulation/ChnsRoot/ChnsData -I/home/hexh/simulation/ChnsRoot/ChnsData/PidData -I/home/hexh/simulation/ChnsRoot/rho/RhoBase -I/home/hexh/simulation/ChnsRoot/rho/RhoMath -I/home/hexh/simulation/ChnsRoot/rho/RhoSelector -I/home/hexh/simulation/ChnsRoot/rho/RhoConstraints -I/home/hexh/simulation/ChnsRoot/rho/RhoTools -I/home/hexh/simulation/ChnsRoot/rho/RhoFitter -I/home/hexh/simulation/ChnsRoot/rho/RhoHistogram -I/home/hexh/simulation/ChnsRoot/ChnsTools/AnalysisTools -I/home/hexh/simulation/ChnsRoot/ChnsTools/ChnsParticleFitters -I/home/hexh/simulation/ChnsRoot/rho -I/home/hexh/simulation/ChnsRoot/softrig -I/home/eicc/software/FairSoft/install/include/root -I/home/eicc/software/FairSoft/install/include -I/home/eicc/FairRoot/build_18.4.2/include ChnsSoftTriggerTask.h ChnsSoftTriggerLine.h ChnsOnlineFilterInfo.h ChnsAnaWithTrigger.h SofTrig_LinkDef.h

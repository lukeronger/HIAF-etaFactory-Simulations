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

/home/eicc/software/FairSoft/install/bin/rootcint -f /home/hexh/simulation/ChnsRoot/buildChns/ChnsData/G__ChnsDataDict.cxx -rmf /home/hexh/simulation/ChnsRoot/buildChns/lib/libChnsData.rootmap -rml ChnsData.so  -c   -I/home/eicc/FairRoot/build_18.4.2/include -I/home/hexh/simulation/ChnsRoot/ChnsData -I/home/hexh/simulation/ChnsRoot/ChnsData/PidData -I/home/hexh/simulation/ChnsRoot/ChnsData/TrackData -I/home/hexh/simulation/ChnsRoot/trackbase -I/home/eicc/software/FairSoft/install/include/root -I/home/eicc/software/FairSoft/install/include -I/home/eicc/FairRoot/build_18.4.2/include ChnsStack.h ChnsMCTrack.h PidData/ChnsPidCandidate.h PidData/ChnsPidProbability.h PidData/ChnsPidBremCorrected4Mom.h TrackData/ChnsTrackCandHit.h TrackData/ChnsTrackCand.h TrackData/ChnsTrack.h TrackData/ChnsSimpleTrack.h TrackData/ChnsTrackID.h FairRecoCandidate.h ChnsDataLinkDef.h

#!/bin/bash

source ../build/config.sh
which root

cp run_sample.C run_sample_cpy.C
sed -i 's/EEG/EEG_mDarkPhoton0.05/' run_sample_cpy.C
root -l -q run_sample_cpy.C
sleep 5

cp run_sample.C run_sample_cpy.C
sed -i 's/EEG/EEG_mDarkPhoton0.25/' run_sample_cpy.C
root -l -q run_sample_cpy.C
sleep 5

cp run_sample.C run_sample_cpy.C
sed -i 's/EEG/EEPi0_mDarkHiggs0.05/' run_sample_cpy.C
root -l -q run_sample_cpy.C
sleep 5

cp run_sample.C run_sample_cpy.C
sed -i 's/EEG/EEPi0_mDarkHiggs0.25/' run_sample_cpy.C
root -l -q run_sample_cpy.C
sleep 5

cp run_sample.C run_sample_cpy.C
sed -i 's/EEG/PipPimPi0_mDarkHiggs0.3/' run_sample_cpy.C
root -l -q run_sample_cpy.C
sleep 5

cp run_sample.C run_sample_cpy.C
sed -i 's/EEG/PipPimPi0_mDarkHiggs0.4/' run_sample_cpy.C
root -l -q run_sample_cpy.C
sleep 5















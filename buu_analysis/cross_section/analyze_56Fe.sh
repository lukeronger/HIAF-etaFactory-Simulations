#!/bin/bash

ls -lh /data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/BUU-data/p56Fe_1.8GeV_b*   |  awk '{print $9}'    > filelist_56Fe
sleep 1

ls -lh /data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/BUU-data/p4He_1.8GeV_b*   |  awk '{print $9}'    > filelist_4He
sleep 1


root -l plot_eta_prob.C

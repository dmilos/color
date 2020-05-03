#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi.cpp    -o hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl.cpp    -o hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv.cpp    -o hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb.cpp    -o hwb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src LabCh.cpp  -o LabCh
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src LuvCH.cpp  -o LuvCH

#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi.cpp       -o  hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl.cpp       -o  hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv.cpp       -o  hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lab.cpp       -o  lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src LabCH.cpp     -o  LabCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv.cpp       -o  luv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src LuvCH.cpp     -o  LuvCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb_hsi.cpp   -o  rgb_hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb_hsl.cpp   -o  rgb_hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb_hsv.cpp   -o  rgb_hsv

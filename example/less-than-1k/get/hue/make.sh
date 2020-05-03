#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb_acos.cpp  -o  rgb_acos
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb_atan2.cpp -o  rgb_atan2
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb_hex.cpp   -o  rgb_hex
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb_polar.cpp -o  rgb_polar
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsi.cpp       -o  hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl.cpp       -o  hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv.cpp       -o  hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb.cpp       -o  hwb
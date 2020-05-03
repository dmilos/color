#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy.cpp     -o  cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk.cpp    -o  cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src gray.cpp    -o  gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl.cpp     -o  hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv.cpp     -o  hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb.cpp     -o  rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq.cpp     -o  yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv.cpp     -o  yuv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb.cpp     -o  hwb



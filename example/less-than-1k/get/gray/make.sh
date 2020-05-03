#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmy.cpp        -o   cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk.cpp       -o   cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src gray.cpp       -o   gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl.cpp        -o   hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv.cpp        -o   hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lab.cpp        -o   lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms.cpp        -o   lms
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv.cpp        -o   luv

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb_average.cpp     -o rgb_average
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb_lightness.cpp   -o rgb_lightness
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb_middle.cpp      -o rgb_middle
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb_yuv709.cpp      -o rgb_yuv709

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YCgCo.cpp      -o   YCgCo
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YDbDr.cpp      -o   YDbDr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq.cpp        -o   yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv.cpp        -o   yuv
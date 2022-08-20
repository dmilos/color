#!/bin/bash

colorTestCounter=$(($colorTestCounter+1)); echo [$colorTestCounter][$(date)]$(pwd)

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src cmyk.cpp   -o  cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsl.cpp    -o  hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hsv.cpp    -o  hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src hwb.cpp    -o  hwb

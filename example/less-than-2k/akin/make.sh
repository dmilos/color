#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../src cmy.cpp    -o  cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src cmyk.cpp   -o  cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src gray.cpp   -o  gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src rgb.cpp    -o  rgb










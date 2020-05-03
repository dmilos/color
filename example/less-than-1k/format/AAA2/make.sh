#!/bin/bash

# Make all examples.
# No Scons, no CMake, no Make or any other make tool
# One line one example
# Designed for easy copy/paste

# TODO g++ $gccBaseSwitch $gccExtraSwitch -I../src abgr.cpp                -o  akin

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./abgr.cpp   -o  abgr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./argb.cpp   -o  argb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./bgra.cpp   -o  bgra
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./rgba.cpp   -o  rgba
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./cmyk.cpp   -o  cmyk

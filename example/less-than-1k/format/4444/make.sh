#!/bin/bash

# Make all examples.
# No Scons, no CMake, no Make or any other make tool
# One line one example
# Designed for easy copy/paste

# TODO g++ -fexceptions -std=c++11 -g -I../src abgr.cpp                -o  akin

pwd

g++ -std=c++11 -g -I../../../../src  ./abgr.cpp   -o  abgr
g++ -std=c++11 -g -I../../../../src  ./argb.cpp   -o  argb
g++ -std=c++11 -g -I../../../../src  ./bgra.cpp   -o  bgra
g++ -std=c++11 -g -I../../../../src  ./rgba.cpp   -o  rgba
g++ -std=c++11 -g -I../../../../src  ./cmyk.cpp   -o  cmyk
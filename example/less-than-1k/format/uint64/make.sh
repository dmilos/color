#!/bin/bash

# Make all examples.
# No Scons, no CMake, no Make or any other make tool
# One line one example
# Designed for easy copy/paste

# TODO g++ -fexceptions -std=c++11 -g -I../src akin.cpp                -o  akin

pwd


g++ -std=c++11 -g -I../../../../src  cmy.cpp          -o  cmy
g++ -std=c++11 -g -I../../../../src  cmyk.cpp         -o  cmyk
g++ -std=c++11 -g -I../../../../src  gray.cpp         -o  gray
g++ -std=c++11 -g -I../../../../src  hsl.cpp          -o  hsl
g++ -std=c++11 -g -I../../../../src  hsv.cpp          -o  hsv
g++ -std=c++11 -g -I../../../../src  rgb.cpp          -o  rgb
g++ -std=c++11 -g -I../../../../src  yiq.cpp          -o  yiq
g++ -std=c++11 -g -I../../../../src  yuv.cpp          -o  yuv

#!/bin/bash

pwd

g++ -fexceptions -std=c++11 -g -I../../../../src hsl.cpp   -o  hsl
g++ -fexceptions -std=c++11 -g -I../../../../src hsv.cpp   -o  hsv
g++ -fexceptions -std=c++11 -g -I../../../../src hsv.cpp   -o  hwb

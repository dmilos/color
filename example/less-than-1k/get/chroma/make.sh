#!/bin/bash

pwd

g++ -fexceptions -std=c++11 -g -I../../../../src hsi.cpp       -o  hsi
g++ -fexceptions -std=c++11 -g -I../../../../src hsl.cpp       -o  hsl
g++ -fexceptions -std=c++11 -g -I../../../../src hsv.cpp       -o  hsv
g++ -fexceptions -std=c++11 -g -I../../../../src lab.cpp       -o  lab
g++ -fexceptions -std=c++11 -g -I../../../../src LabCH.cpp     -o  LabCH
g++ -fexceptions -std=c++11 -g -I../../../../src luv.cpp       -o  luv
g++ -fexceptions -std=c++11 -g -I../../../../src LuvCH.cpp     -o  LuvCH
g++ -fexceptions -std=c++11 -g -I../../../../src rgb_d2g.cpp   -o  rgb_d2g
g++ -fexceptions -std=c++11 -g -I../../../../src rgb_mmm.cpp   -o  rgb_mmm

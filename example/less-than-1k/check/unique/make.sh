#!/bin/bash

pwd

g++ -fexceptions -std=c++11 -g -I../../../../src hsi.cpp    -o hsi
g++ -fexceptions -std=c++11 -g -I../../../../src hsl.cpp    -o hsl
g++ -fexceptions -std=c++11 -g -I../../../../src hsv.cpp    -o hsv
g++ -fexceptions -std=c++11 -g -I../../../../src hwb.cpp    -o hwb
g++ -fexceptions -std=c++11 -g -I../../../../src LabCh.cpp  -o LabCh
g++ -fexceptions -std=c++11 -g -I../../../../src LuvCH.cpp  -o LuvCH

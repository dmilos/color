#!/bin/bash

pwd

g++ -fexceptions -std=c++11 -g -I../../../../src  ./cmy.cpp            -o  cmy
g++ -fexceptions -std=c++11 -g -I../../../../src  ./cmyk.cpp           -o  cmyk
g++ -fexceptions -std=c++11 -g -I../../../../src  ./gray.cpp           -o  gray
g++ -fexceptions -std=c++11 -g -I../../../../src  ./hsi.cpp            -o  hsi
g++ -fexceptions -std=c++11 -g -I../../../../src  ./hsl.cpp            -o  hsl
g++ -fexceptions -std=c++11 -g -I../../../../src  ./hsv.cpp            -o  hsv
g++ -fexceptions -std=c++11 -g -I../../../../src  ./hwb.cpp            -o  hwb
g++ -fexceptions -std=c++11 -g -I../../../../src  ./lab.cpp            -o  lab
g++ -fexceptions -std=c++11 -g -I../../../../src  ./LabCH.cpp          -o  LabCH
g++ -fexceptions -std=c++11 -g -I../../../../src  ./lms.cpp            -o  lms
g++ -fexceptions -std=c++11 -g -I../../../../src  ./luv.cpp            -o  luv
g++ -fexceptions -std=c++11 -g -I../../../../src  ./LuvCH.cpp          -o  LuvCH
g++ -fexceptions -std=c++11 -g -I../../../../src  ./rgb.cpp            -o  rgb
g++ -fexceptions -std=c++11 -g -I../../../../src  ./xyy.cpp            -o  xyy
g++ -fexceptions -std=c++11 -g -I../../../../src  ./xyz.cpp            -o  xyz
g++ -fexceptions -std=c++11 -g -I../../../../src  ./YCgCo.cpp          -o  YCgCo
g++ -fexceptions -std=c++11 -g -I../../../../src  ./YDbDr.cpp          -o  YDbDr
g++ -fexceptions -std=c++11 -g -I../../../../src  ./yiq.cpp            -o  yiq
g++ -fexceptions -std=c++11 -g -I../../../../src  ./YPbPr.cpp          -o  YPbPr
g++ -fexceptions -std=c++11 -g -I../../../../src  ./yuv.cpp            -o  yuv

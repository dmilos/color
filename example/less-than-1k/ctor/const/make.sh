#!/bin/bash

pwd

g++ -fexceptions -std=c++11 -g -I../../../../src  ./cmy_lavenderA.cpp            -o  cmy_lavenderA
g++ -fexceptions -std=c++11 -g -I../../../../src  ./cmy_lavenderB.cpp            -o  cmy_lavenderB

g++ -fexceptions -std=c++11 -g -I../../../../src  ./cmyk_lavender.cpp           -o  cmyk_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./gray_lavender.cpp           -o  gray_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./hsi_lavender.cpp            -o  hsi_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./hsl_lavender.cpp            -o  hsl_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./hsv_lavender.cpp            -o  hsv_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./hwb_lavender.cpp            -o  hwb_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./lab_lavender.cpp            -o  lab_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./LabCH_lavender.cpp          -o  LabCH_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./lms_lavender.cpp            -o  lms_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./luv_lavender.cpp            -o  luv_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./LuvCH_lavender.cpp          -o  LuvCH_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./rgb_lavender.cpp            -o  rgb_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./xyy_lavender.cpp            -o  xyy_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./xyz_lavender.cpp            -o  xyz_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./YCgCo_lavender.cpp          -o  YCgCo_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./YDbDr_lavender.cpp          -o  YDbDr_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./yiq_lavender.cpp            -o  yiq_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./YPbPr_lavender.cpp          -o  YPbPr_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./yuv_lavender.cpp            -o  yuv_lavender
g++ -fexceptions -std=c++11 -g -I../../../../src  ./rgb_red.cpp                 -o  rgb_red

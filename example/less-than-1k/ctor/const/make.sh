#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./cmy_lavenderA.cpp            -o  cmy_lavenderA
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./cmy_lavenderB.cpp            -o  cmy_lavenderB

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./cmyk_lavender.cpp           -o  cmyk_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./gray_lavender.cpp           -o  gray_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./hsi_lavender.cpp            -o  hsi_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./hsl_lavender.cpp            -o  hsl_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./hsv_lavender.cpp            -o  hsv_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./hwb_lavender.cpp            -o  hwb_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./lab_lavender.cpp            -o  lab_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./LabCH_lavender.cpp          -o  LabCH_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./lms_lavender.cpp            -o  lms_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./luv_lavender.cpp            -o  luv_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./LuvCH_lavender.cpp          -o  LuvCH_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./rgb_lavender.cpp            -o  rgb_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./xyy_lavender.cpp            -o  xyy_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./xyz_lavender.cpp            -o  xyz_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./YCgCo_lavender.cpp          -o  YCgCo_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./YDbDr_lavender.cpp          -o  YDbDr_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./yiq_lavender.cpp            -o  yiq_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./YPbPr_lavender.cpp          -o  YPbPr_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./yuv_lavender.cpp            -o  yuv_lavender
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src  ./rgb_red.cpp                 -o  rgb_red

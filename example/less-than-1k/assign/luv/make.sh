#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2cmy.cpp            -o luv2cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2cmyk.cpp           -o luv2cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2gray.cpp           -o luv2gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2hsi.cpp            -o luv2hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2hsl.cpp            -o luv2hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2hsv.cpp            -o luv2hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2hwb.cpp            -o luv2hwb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2lab.cpp            -o luv2lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2lab_CIE.cpp        -o luv2lab_CIE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2lab_Hunter.cpp     -o luv2lab_Hunter
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2LabCH.cpp          -o luv2LabCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2lms.cpp            -o luv2lms
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2lms_BFD.cpp        -o luv2lms_BFD
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2lms_K65.cpp        -o luv2lms_K65
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2lms_KE.cpp         -o luv2lms_KE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2lms_MCAT02.cpp     -o luv2lms_MCAT02
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2luv.cpp            -o luv2luv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2LuvCH.cpp          -o luv2LuvCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2rgb.cpp            -o luv2rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2xyy.cpp            -o luv2xyy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2xyz.cpp            -o luv2xyz
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2YCgCo.cpp          -o luv2YCgCo
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2YDbDr.cpp          -o luv2YDbDr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2yiq.cpp            -o luv2yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2YPbPr.cpp          -o luv2YPbPr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2YPbPr2020.cpp      -o luv2YPbPr2020
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2YPbPr601.cpp       -o luv2YPbPr601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2YPbPr709.cpp       -o luv2YPbPr709
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2yuv.cpp            -o luv2yuv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2yuv601.cpp         -o luv2yuv601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src luv2yuv709.cpp         -o luv2yuv709
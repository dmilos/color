#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2cmy.cpp            -o xyy2cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2cmyk.cpp           -o xyy2cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2gray.cpp           -o xyy2gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2hsi.cpp            -o xyy2hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2hsl.cpp            -o xyy2hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2hsv.cpp            -o xyy2hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2hwb.cpp            -o xyy2hwb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2lab.cpp            -o xyy2lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2lab_CIE.cpp        -o xyy2lab_CIE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2lab_Hunter.cpp     -o xyy2lab_Hunter
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2LabCH.cpp          -o xyy2LabCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2lms.cpp            -o xyy2lms
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2lms_BFD.cpp        -o xyy2lms_BFD
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2lms_K65.cpp        -o xyy2lms_K65
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2lms_KE.cpp         -o xyy2lms_KE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2lms_MCAT02.cpp     -o xyy2lms_MCAT02
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2luv.cpp            -o xyy2luv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2LuvCH.cpp          -o xyy2LuvCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2rgb.cpp            -o xyy2rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2xyy.cpp            -o xyy2xyy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2xyz.cpp            -o xyy2xyz
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2YCgCo.cpp          -o xyy2YCgCo
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2YDbDr.cpp          -o xyy2YDbDr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2yiq.cpp            -o xyy2yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2YPbPr.cpp          -o xyy2YPbPr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2YPbPr2020.cpp      -o xyy2YPbPr2020
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2YPbPr601.cpp       -o xyy2YPbPr601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2YPbPr709.cpp       -o xyy2YPbPr709
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2yuv.cpp            -o xyy2yuv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2yuv601.cpp         -o xyy2yuv601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src xyy2yuv709.cpp         -o xyy2yuv709
#!/bin/bash

colorTestCounter=$(($colorTestCounter+1)); echo [$colorTestCounter][$(date)]$(pwd)

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2cmy.cpp            -o YPbPr2cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2cmyk.cpp           -o YPbPr2cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2gray.cpp           -o YPbPr2gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2hsi.cpp            -o YPbPr2hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2hsl.cpp            -o YPbPr2hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2hsv.cpp            -o YPbPr2hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2hwb.cpp            -o YPbPr2hwb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2lab.cpp            -o YPbPr2lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2lab_CIE.cpp        -o YPbPr2lab_CIE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2lab_Hunter.cpp     -o YPbPr2lab_Hunter
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2LabCH.cpp          -o YPbPr2LabCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2lms.cpp            -o YPbPr2lms
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2lms_BFD.cpp        -o YPbPr2lms_BFD
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2lms_K65.cpp        -o YPbPr2lms_K65
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2lms_KE.cpp         -o YPbPr2lms_KE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2lms_MCAT02.cpp     -o YPbPr2lms_MCAT02
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2luv.cpp            -o YPbPr2luv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2LuvCH.cpp          -o YPbPr2LuvCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2rgb.cpp            -o YPbPr2rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2xyy.cpp            -o YPbPr2xyy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2xyz.cpp            -o YPbPr2xyz
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2YCgCo.cpp          -o YPbPr2YCgCo
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2YDbDr.cpp          -o YPbPr2YDbDr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2yiq.cpp            -o YPbPr2yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2YPbPr.cpp          -o YPbPr2YPbPr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2YPbPr2020.cpp      -o YPbPr2YPbPr2020
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2YPbPr601.cpp       -o YPbPr2YPbPr601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2YPbPr709.cpp       -o YPbPr2YPbPr709
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2yuv.cpp            -o YPbPr2yuv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2yuv601.cpp         -o YPbPr2yuv601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src YPbPr2yuv709.cpp         -o YPbPr2yuv709
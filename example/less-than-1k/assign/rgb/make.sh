#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2cmy.cpp            -o rgb2cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2cmyk.cpp           -o rgb2cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2gray.cpp           -o rgb2gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2hsi.cpp            -o rgb2hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2hsl.cpp            -o rgb2hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2hsv.cpp            -o rgb2hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2hwb.cpp            -o rgb2hwb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2lab.cpp            -o rgb2lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2lab_CIE.cpp        -o rgb2lab_CIE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2lab_Hunter.cpp     -o rgb2lab_Hunter
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2LabCH.cpp          -o rgb2LabCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2lms.cpp            -o rgb2lms
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2lms_BFD.cpp        -o rgb2lms_BFD
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2lms_K65.cpp        -o rgb2lms_K65
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2lms_KE.cpp         -o rgb2lms_KE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2lms_MCAT02.cpp     -o rgb2lms_MCAT02
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2luv.cpp            -o rgb2luv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2LuvCH.cpp          -o rgb2LuvCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2rgb.cpp            -o rgb2rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2xyy.cpp            -o rgb2xyy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2xyz.cpp            -o rgb2xyz
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2YCgCo.cpp          -o rgb2YCgCo
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2YDbDr.cpp          -o rgb2YDbDr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2yiq.cpp            -o rgb2yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2YPbPr.cpp          -o rgb2YPbPr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2YPbPr2020.cpp      -o rgb2YPbPr2020
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2YPbPr601.cpp       -o rgb2YPbPr601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2YPbPr709.cpp       -o rgb2YPbPr709
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2yuv.cpp            -o rgb2yuv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2yuv601.cpp         -o rgb2yuv601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src rgb2yuv709.cpp         -o rgb2yuv709
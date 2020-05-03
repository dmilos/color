#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2cmy.cpp            -o lms2cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2cmyk.cpp           -o lms2cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2gray.cpp           -o lms2gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2hsi.cpp            -o lms2hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2hsl.cpp            -o lms2hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2hsv.cpp            -o lms2hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2hwb.cpp            -o lms2hwb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2lab.cpp            -o lms2lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2lab_CIE.cpp        -o lms2lab_CIE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2lab_Hunter.cpp     -o lms2lab_Hunter
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2LabCH.cpp          -o lms2LabCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2lms.cpp            -o lms2lms
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2lms_BFD.cpp        -o lms2lms_BFD
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2lms_K65.cpp        -o lms2lms_K65
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2lms_KE.cpp         -o lms2lms_KE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2lms_MCAT02.cpp     -o lms2lms_MCAT02
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2luv.cpp            -o lms2luv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2LuvCH.cpp          -o lms2LuvCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2rgb.cpp            -o lms2rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2xyy.cpp            -o lms2xyy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2xyz.cpp            -o lms2xyz
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2YCgCo.cpp          -o lms2YCgCo
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2YDbDr.cpp          -o lms2YDbDr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2yiq.cpp            -o lms2yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2YPbPr.cpp          -o lms2YPbPr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2YPbPr2020.cpp      -o lms2YPbPr2020
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2YPbPr601.cpp       -o lms2YPbPr601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2YPbPr709.cpp       -o lms2YPbPr709
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2yuv.cpp            -o lms2yuv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2yuv601.cpp         -o lms2yuv601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src lms2yuv709.cpp         -o lms2yuv709
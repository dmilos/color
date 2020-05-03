#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2cmy.cpp            -o yiq2cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2cmyk.cpp           -o yiq2cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2gray.cpp           -o yiq2gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2hsi.cpp            -o yiq2hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2hsl.cpp            -o yiq2hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2hsv.cpp            -o yiq2hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2hwb.cpp            -o yiq2hwb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2lab.cpp            -o yiq2lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2lab_CIE.cpp        -o yiq2lab_CIE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2lab_Hunter.cpp     -o yiq2lab_Hunter
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2LabCH.cpp          -o yiq2LabCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2lms.cpp            -o yiq2lms
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2lms_BFD.cpp        -o yiq2lms_BFD
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2lms_K65.cpp        -o yiq2lms_K65
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2lms_KE.cpp         -o yiq2lms_KE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2lms_MCAT02.cpp     -o yiq2lms_MCAT02
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2luv.cpp            -o yiq2luv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2LuvCH.cpp          -o yiq2LuvCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2rgb.cpp            -o yiq2rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2xyy.cpp            -o yiq2xyy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2xyz.cpp            -o yiq2xyz
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2YCgCo.cpp          -o yiq2YCgCo
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2YDbDr.cpp          -o yiq2YDbDr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2yiq.cpp            -o yiq2yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2YPbPr.cpp          -o yiq2YPbPr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2YPbPr2020.cpp      -o yiq2YPbPr2020
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2YPbPr601.cpp       -o yiq2YPbPr601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2YPbPr709.cpp       -o yiq2YPbPr709
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2yuv.cpp            -o yiq2yuv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2yuv601.cpp         -o yiq2yuv601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yiq2yuv709.cpp         -o yiq2yuv709
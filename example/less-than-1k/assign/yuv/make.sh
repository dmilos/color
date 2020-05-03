#!/bin/bash

pwd

g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2cmy.cpp            -o yuv2cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2cmyk.cpp           -o yuv2cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2gray.cpp           -o yuv2gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2hsi.cpp            -o yuv2hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2hsl.cpp            -o yuv2hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2hsv.cpp            -o yuv2hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2hwb.cpp            -o yuv2hwb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2lab.cpp            -o yuv2lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2lab_CIE.cpp        -o yuv2lab_CIE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2lab_Hunter.cpp     -o yuv2lab_Hunter
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2LabCH.cpp          -o yuv2LabCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2lms.cpp            -o yuv2lms
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2lms_BFD.cpp        -o yuv2lms_BFD
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2lms_K65.cpp        -o yuv2lms_K65
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2lms_KE.cpp         -o yuv2lms_KE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2lms_MCAT02.cpp     -o yuv2lms_MCAT02
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2luv.cpp            -o yuv2luv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2LuvCH.cpp          -o yuv2LuvCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2rgb.cpp            -o yuv2rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2xyy.cpp            -o yuv2xyy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2xyz.cpp            -o yuv2xyz
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2YCgCo.cpp          -o yuv2YCgCo
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2YDbDr.cpp          -o yuv2YDbDr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2yiq.cpp            -o yuv2yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2YPbPr.cpp          -o yuv2YPbPr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2YPbPr2020.cpp      -o yuv2YPbPr2020
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2YPbPr601.cpp       -o yuv2YPbPr601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2YPbPr709.cpp       -o yuv2YPbPr709
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2yuv.cpp            -o yuv2yuv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2yuv601.cpp         -o yuv2yuv601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../../src yuv2yuv709.cpp         -o yuv2yuv709
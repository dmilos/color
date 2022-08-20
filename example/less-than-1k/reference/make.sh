#!/bin/bash

colorTestCounter=$(($colorTestCounter+1)); echo [$colorTestCounter][$(date)]$(pwd)

g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   cmy.cpp              -o cmy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   cmyk.cpp             -o cmyk
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   gray.cpp             -o gray
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   hsi.cpp              -o hsi
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   hsl.cpp              -o hsl
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   hsv.cpp              -o hsv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   hwb.cpp              -o hwb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   lab.cpp              -o lab
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   lab_CIE.cpp          -o lab_CIE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   lab_Hunter.cpp       -o lab_Hunter
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   LabCH.cpp            -o LabCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   lms.cpp              -o lms
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   lms_BFD.cpp          -o lms_BFD
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   lms_MCAT02.cpp       -o lms_MCAT02
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   lms_vKD65.cpp        -o lms_vKD65
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   lms_vKE.cpp          -o lms_vKE
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   luv.cpp              -o luv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   LuvCH.cpp            -o LuvCH
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   rgb.cpp              -o rgb
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   xyy.cpp              -o xyy
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   xyz.cpp              -o xyz
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   YCgCo.cpp            -o YCgCo
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   YDbDr.cpp            -o YDbDr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   yiq.cpp              -o yiq
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   YPbPr.cpp            -o YPbPr
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   YPbPr_601.cpp        -o YPbPr_601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   YPbPr_709.cpp        -o YPbPr_709
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   yuv.cpp              -o yuv
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   yuv_601.cpp          -o yuv_601
g++ $gccBaseSwitch $gccExtraSwitch -I../../../src   yuv_709.cpp          -o yuv_709
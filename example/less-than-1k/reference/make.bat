@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../src   cmy.cpp
cl /EHsc  -I../../../src   cmyk.cpp
cl /EHsc  -I../../../src   gray.cpp
cl /EHsc  -I../../../src   hsi.cpp
cl /EHsc  -I../../../src   hsl.cpp
cl /EHsc  -I../../../src   hsv.cpp
cl /EHsc  -I../../../src   hwb.cpp
cl /EHsc  -I../../../src   lab.cpp
cl /EHsc  -I../../../src   lab_CIE.cpp
cl /EHsc  -I../../../src   lab_Hunter.cpp
cl /EHsc  -I../../../src   LabCH.cpp
cl /EHsc  -I../../../src   lms.cpp
cl /EHsc  -I../../../src   lms_BFD.cpp
cl /EHsc  -I../../../src   lms_MCAT02.cpp
cl /EHsc  -I../../../src   lms_vKD65.cpp
cl /EHsc  -I../../../src   lms_vKE.cpp
cl /EHsc  -I../../../src   luv.cpp
cl /EHsc  -I../../../src   LuvCH.cpp
cl /EHsc  -I../../../src   rgb.cpp
cl /EHsc  -I../../../src   xyy.cpp
cl /EHsc  -I../../../src   xyz.cpp
cl /EHsc  -I../../../src   YCgCo.cpp
cl /EHsc  -I../../../src   YDbDr.cpp
cl /EHsc  -I../../../src   yiq.cpp
cl /EHsc  -I../../../src   YPbPr.cpp
cl /EHsc  -I../../../src   YPbPr_601.cpp
cl /EHsc  -I../../../src   YPbPr_709.cpp
cl /EHsc  -I../../../src   yuv.cpp
cl /EHsc  -I../../../src   yuv_601.cpp
cl /EHsc  -I../../../src   yuv_709.cpp
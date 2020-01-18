@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../src /D%PP2F% cmy.cpp
cl /EHsc  -I../../../src /D%PP2F% cmyk.cpp
cl /EHsc  -I../../../src /D%PP2F% gray.cpp
cl /EHsc  -I../../../src /D%PP2F% rgb.cpp










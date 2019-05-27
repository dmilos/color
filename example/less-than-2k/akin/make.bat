@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../src cmy.cpp
cl /EHsc  -I../../../src cmyk.cpp
cl /EHsc  -I../../../src gray.cpp
cl /EHsc  -I../../../src rgb.cpp










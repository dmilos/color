@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src orange.cpp

cl /EHsc  -I../../../../src lavanderA.cpp
cl /EHsc  -I../../../../src lavanderB.cpp
cl /EHsc  -I../../../../src lavanderC.cpp

cl /EHsc  -I../../../../src gray.cpp
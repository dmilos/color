@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src /D%PP2F% orange.cpp

cl /EHsc  -I../../../../src /D%PP2F% lavanderA.cpp
cl /EHsc  -I../../../../src /D%PP2F% lavanderB.cpp
cl /EHsc  -I../../../../src /D%PP2F% lavanderC.cpp

cl /EHsc  -I../../../../src /D%PP2F% gray.cpp
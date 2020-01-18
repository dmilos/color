@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src /D%PP2F% alpha2.cpp
cl /EHsc  -I../../../../src /D%PP2F% alpha3.cpp
cl /EHsc  -I../../../../src /D%PP2F% noalpha2.cpp
cl /EHsc  -I../../../../src /D%PP2F% noalpha3.cpp

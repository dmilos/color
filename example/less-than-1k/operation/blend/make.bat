@rem !/bin/msdos

@echo %cd%

cl /EHsc  -I../../../../src alpha2.cpp
cl /EHsc  -I../../../../src alpha3.cpp
cl /EHsc  -I../../../../src noalpha2.cpp
cl /EHsc  -I../../../../src noalpha3.cpp

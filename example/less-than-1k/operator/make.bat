@rem !/bin/msdos
@
@echo %cd%
@
@cd compare
@call make.bat
@cd ..
@
@cl /EHsc  -I../../../src addition.cpp
@cl /EHsc  -I../../../src divide.cpp
@cl /EHsc  -I../../../src scale.cpp
@cl /EHsc  -I../../../src subtraction.cpp

@rem !/bin/msdos
@
@echo %cd%
@
@cd addition
@call make.bat
@cd ..
@
@cd invert
@call make.bat
@cd ..
@
@cd blend
@call make.bat
@cd ..
@
@cd distance
@call make.bat
@cd ..
@
@
@cl /EHsc  -I../../../src /D%PP2F% convex1.cpp
@cl /EHsc  -I../../../src /D%PP2F% convex2.cpp
@cl /EHsc  -I../../../src /D%PP2F% mix_alpha.cpp
@cl /EHsc  -I../../../src /D%PP2F% mix_noalpha.cpp
@cl /EHsc  -I../../../src /D%PP2F% bias.cpp
@cl /EHsc  -I../../../src /D%PP2F% delta.cpp
@cl /EHsc  -I../../../src /D%PP2F% gain.cpp
@cl /EHsc  -I../../../src /D%PP2F% gamma.cpp
@cl /EHsc  -I../../../src /D%PP2F% scale.cpp
@cl /EHsc  -I../../../src /D%PP2F% subtract.cpp
@cl /EHsc  -I../../../src /D%PP2F% divide.cpp
@cl /EHsc  -I../../../src /D%PP2F% multiply.cpp
@cl /EHsc  -I../../../src /D%PP2F% ceil.cpp
@cl /EHsc  -I../../../src /D%PP2F% clip.cpp
@cl /EHsc  -I../../../src /D%PP2F% floor.cpp

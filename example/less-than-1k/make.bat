@rem !/bin/msdos
@
@echo %cd%
@
@rem  Make all examples.
@rem  No Scons, no CMake, no Make or any other make tool
@
@rem cd akin
@rem make.bat
@rem @cd ..
@
@cd assign
@call make.bat
@cd ..
@
@cd check
@call make.bat
@cd ..
@
@cd compare
@call make.bat
@cd ..
@
@cd constant
@call make.bat
@cd ..
@
@cd convert
@call make.bat
@cd ..
@
@cd ctor
@call make.bat
@cd ..
@
@cd fix
@call make.bat
@cd ..
@
@cd format
@call make.bat
@cd ..
@
@cd get
@call make.bat
@cd ..
@
@cd operation
@call make.bat
@cd ..
@
@cd operator
@call make.bat
@cd ..
@
@rem cd place
@rem make.bat
@rem @cd ..
@
@cd reference
@call make.bat
@cd ..
@
@cd set
@call make.bat
@cd ..
@
@cd tip
@call make.bat
@cd ..
@
@cd trait
@call make.bat
@cd ..
@
@cl /EHsc  -I../../src empty.cpp
@cl /EHsc  -I../../src hello.cpp
@cl /EHsc  -I../../src pp2f.cpp


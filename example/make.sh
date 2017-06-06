# Make all examples.
# No Scons, no CMake, no Make or any other make tool
# One line one example
# Designed for easy copy/paste

# TODO COLOR_USE_PP2FILE


# TODO g++ -fexceptions -std=c++11 -g -I../src akin.cpp                -o  akin

g++ -std=c++11 -g -I../src  readme.cpp                        -o  readme

g++ -std=c++11 -g -I../src  akin.cpp                          -o  akin
g++ -std=c++11 -g -I../src  assign_const_heavy.cpp            -o  assign_const_heavy
g++ -std=c++11 -g -I../src  format_split233.cpp               -o  format_split233
g++ -std=c++11 -g -I../src  format_split332.cpp               -o  format_split332
g++ -std=c++11 -g -I../src  format_split422.cpp               -o  format_split422
g++ -std=c++11 -g -I../src  format_split556.cpp               -o  format_split556
g++ -std=c++11 -g -I../src  format_split655.cpp               -o  format_split655
g++ -std=c++11 -g -I../src  get_alpha.cpp                     -o  get_alpha
g++ -std=c++11 -g -I../src  place.cpp                         -o  place
g++ -std=c++11 -g -I../src  set_gray.cpp                      -o  set_gray
g++ -std=c++11 -g -I../src  set_green.cpp                     -o  set_green
g++ -std=c++11 -g -I../src  set_red.cpp                       -o  set_red
g++ -std=c++11 -g -I../src  memfill.cpp                       -o  memfill

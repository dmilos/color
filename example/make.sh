# Make all examples.
# No Scons, no CMake, no Make or any other make tool
# One line one example
# Designed for easy copy/paste

# TODO COLOR_USE_PP2FILE


# TODO g++ -fexceptions -std=c++11 -g -I../src akin.cpp                -o  akin

g++ -std=c++11 -g -I../src  readme.cpp                        -o  readme

g++ -std=c++11 -g -I../src  akin.cpp                          -o  akin
g++ -std=c++11 -g -I../src  get_alpha.cpp                     -o  get_alpha
g++ -std=c++11 -g -I../src  place.cpp                         -o  place
#g++ -std=c++11 -g -I../src  set_gray.cpp                      -o  set_gray
g++ -std=c++11 -g -I../src  set_green.cpp                     -o  set_green
g++ -std=c++11 -g -I../src  set_red.cpp                       -o  set_red
g++ -std=c++11 -g -I../src  memfill.cpp                       -o  memfill

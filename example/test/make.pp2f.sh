g++ ../../src/color/color.body.hpp  -o ./color.pp2f0.hpp -E
sed '/^#/ d'                    < ./color.pp2f0.hpp > ./color.pp2f1.hpp
astyle --options=./astyle.conf  < ./color.pp2f1.hpp > ./color.pp2f2.hpp
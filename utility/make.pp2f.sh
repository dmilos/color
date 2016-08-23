mkdir out


g++ ../src/color/color.body.hpp  -o ./out/color.pp2f0.hpp -E  -D COLOR_EXCLUDE_MODEL_YPbPr


sed '/^#/ d'                    < ./out/color.pp2f0.hpp > ./out/color.pp2f1.hpp
astyle --options=./astyle.conf  < ./out/color.pp2f1.hpp > ./out/color.pp2f2.hpp
cat -s                          < ./out/color.pp2f2.hpp > ./out/color.pp2f3.hpp

rm  ./out/color.pp2f4.hpp
cat                             < ../src/color/copyright.hpp     > ./out/color.pp2f4.hpp
cat                             < ./out/color.pp2f3.hpp            >> ./out/color.pp2f4.hpp
#include <iomanip>
#include <iostream>
#include <typeinfo>
#include <string>

using namespace color::operation::arithmetic;

#include "../print.hpp"

template < template<typename> class color_left_name, template<typename> class color_right_name >
 void test_conversion()
  {
   std::cout << std::endl;
   std::cout << "{{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
   std::cout << "  function - " << __FUNCTION__ << std::endl;
   std::cout << "type - " << typeid( color_left_name<std::uint8_t>  ).name() << std::endl;
   std::cout << "type - " << typeid( color_right_name<std::uint8_t>  ).name() << std::endl;
   std::cout << std::endl;

   color_left_name<bool>            lb;    color::make::black( lb   );
   color_left_name<std::uint8_t>    lu8;   color::make::black( lu8  );
   color_left_name<std::uint16_t>   lu16;  color::make::black( lu16 );
   color_left_name<std::uint32_t>   lu32;  color::make::black( lu32 );
   color_left_name<std::uint64_t>   lu64;  color::make::black( lu64 );
   color_left_name<float>           lf;    color::make::black( lf   );
   color_left_name<double>          ld;    color::make::black( ld   );
   color_left_name<long double>     lld;   color::make::black( lld  );

   color_right_name<bool>            rb;    color::make::gray50( rb   );
   color_right_name<std::uint8_t>    ru8;   color::make::gray50( ru8  );
   color_right_name<std::uint16_t>   ru16;  color::make::gray50( ru16 );
   color_right_name<std::uint32_t>   ru32;  color::make::gray50( ru32 );
   color_right_name<std::uint64_t>   ru64;  color::make::gray50( ru64 );
   color_right_name<float>           rf;    color::make::gray50( rf   );
   color_right_name<double>          rd;    color::make::gray50( rd   );
   color_right_name<long double>     rld;   color::make::gray50( rld  );


   std::cout << "  "; lb = rb;    print(lb); lu8 = rb;    print(lu8); lu16 = rb;    print(lu16); lu32 = rb;    print(lu32); lu64 = rb;    print(lu64); lf = rb;    print(lf); ld = rb;   print(ld); lld = rb;    print(lld); std::cout << std::endl;
   std::cout << "  "; lb = ru8;   print(lb); lu8 = ru8;   print(lu8); lu16 = ru8;   print(lu16); lu32 = ru8;   print(lu32); lu64 = ru8;   print(lu64); lf = ru8;   print(lf); ld = ru8;  print(ld); lld = ru8;   print(lld); std::cout << std::endl;
   std::cout << "  "; lb = ru16;  print(lb); lu8 = ru16;  print(lu8); lu16 = ru16;  print(lu16); lu32 = ru16;  print(lu32); lu64 = ru16;  print(lu64); lf = ru16;  print(lf); ld = ru16; print(ld); lld = ru16;  print(lld); std::cout << std::endl;
   std::cout << "  "; lb = ru32;  print(lb); lu8 = ru32;  print(lu8); lu16 = ru32;  print(lu16); lu32 = ru32;  print(lu32); lu64 = ru32;  print(lu64); lf = ru32;  print(lf); ld = ru32; print(ld); lld = ru32;  print(lld); std::cout << std::endl;
   std::cout << "  "; lb = ru64;  print(lb); lu8 = ru64;  print(lu8); lu16 = ru64;  print(lu16); lu32 = ru64;  print(lu32); lu64 = ru64;  print(lu64); lf = ru64;  print(lf); ld = ru64; print(ld); lld = ru64;  print(lld); std::cout << std::endl;
   std::cout << "  "; lb = rf;    print(lb); lu8 = rf;    print(lu8); lu16 = rf;    print(lu16); lu32 = rf;    print(lu32); lu64 = rf;    print(lu64); lf = rf;    print(lf); ld = rf;   print(ld); lld = rf;    print(lld); std::cout << std::endl;
   std::cout << "  "; lb = rd;    print(lb); lu8 = rd;    print(lu8); lu16 = rd;    print(lu16); lu32 = rd;    print(lu32); lu64 = rd;    print(lu64); lf = rd;    print(lf); ld = rd;   print(ld); lld = rd;    print(lld); std::cout << std::endl;
   std::cout << "  "; lb = rld;   print(lb); lu8 = rld;   print(lu8); lu16 = rld;   print(lu16); lu32 = rld;   print(lu32); lu64 = rld;   print(lu64); lf = rld;   print(lf); ld = rld;  print(ld); lld = rld;   print(lld); std::cout << std::endl;

   std::cout << std::endl;
   std::cout << "  function - " << __FUNCTION__ << std::endl;
   std::cout << "type - " << typeid( color_left_name<std::uint8_t>  ).name() << std::endl;
   std::cout << "type - " << typeid( color_right_name<std::uint8_t>  ).name() << std::endl;
   std::cout << "}}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
  }
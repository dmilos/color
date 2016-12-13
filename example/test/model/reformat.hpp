#include <iomanip>
#include <iostream>
#include <typeinfo>
#include <string>

using namespace color::operation::arithmetic;

#include "../print.hpp"

template < template<typename> class color_name >
 void test_reformatX()
  {
   //std::cout << std::endl;
   //std::cout << "{{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
   //std::cout << "  function - " << __FUNCTION__ << std::endl;
   //std::cout << "type - " << typeid( color_name<bool>  ).name() << std::endl;
   //std::cout << std::endl;

   color_name<bool>            b  { color::constant::gray50_t{}} ;
   color_name<std::uint8_t>    u8 { color::constant::gray50_t{}} ;
   color_name<std::uint16_t>   u16{ color::constant::gray50_t{}} ;
   color_name<std::uint32_t>   u32{ color::constant::gray50_t{}} ;
   color_name<std::uint64_t>   u64{ color::constant::gray50_t{}} ;
   color_name<float>           f  { color::constant::gray50_t{}} ;
   color_name<double>          d  { color::constant::gray50_t{}} ;
   color_name<long double>     ld { color::constant::gray50_t{}} ;

   b = b;    u8 = b;    u16 = b;    u32 = b;    u64 = b;    f = b;    d = b;   ld = b;
   b = u8;   u8 = u8;   u16 = u8;   u32 = u8;   u64 = u8;   f = u8;   d = u8;  ld = u8;
   b = u16;  u8 = u16;  u16 = u16;  u32 = u16;  u64 = u16;  f = u16;  d = u16; ld = u16;
   b = u32;  u8 = u32;  u16 = u32;  u32 = u32;  u64 = u32;  f = u32;  d = u32; ld = u32;
   b = u64;  u8 = u64;  u16 = u64;  u32 = u64;  u64 = u64;  f = u64;  d = u64; ld = u64;
   b = f;    u8 = f;    u16 = f;    u32 = f;    u64 = f;    f = f;    d = f;   ld = f;
   b = d;    u8 = d;    u16 = d;    u32 = d;    u64 = d;    f = d;    d = d;   ld = d;
   b = ld;   u8 = ld;   u16 = ld;   u32 = ld;   u64 = ld;   f = ld;   d = ld;  ld = ld;


   //std::cout << "  "; b = b;    print(b); u8 = b;    print(u8); u16 = b;    print(u16); u32 = b;    print(u32); u64 = b;    print(u64); f = b;    print(f); d = b;   print(d); ld = b;    print(ld); std::cout << std::endl;
   //std::cout << "  "; b = u8;   print(b); u8 = u8;   print(u8); u16 = u8;   print(u16); u32 = u8;   print(u32); u64 = u8;   print(u64); f = u8;   print(f); d = u8;  print(d); ld = u8;   print(ld); std::cout << std::endl;
   //std::cout << "  "; b = u16;  print(b); u8 = u16;  print(u8); u16 = u16;  print(u16); u32 = u16;  print(u32); u64 = u16;  print(u64); f = u16;  print(f); d = u16; print(d); ld = u16;  print(ld); std::cout << std::endl;
   //std::cout << "  "; b = u32;  print(b); u8 = u32;  print(u8); u16 = u32;  print(u16); u32 = u32;  print(u32); u64 = u32;  print(u64); f = u32;  print(f); d = u32; print(d); ld = u32;  print(ld); std::cout << std::endl;
   //std::cout << "  "; b = u64;  print(b); u8 = u64;  print(u8); u16 = u64;  print(u16); u32 = u64;  print(u32); u64 = u64;  print(u64); f = u64;  print(f); d = u64; print(d); ld = u64;  print(ld); std::cout << std::endl;
   //std::cout << "  "; b = f;    print(b); u8 = f;    print(u8); u16 = f;    print(u16); u32 = f;    print(u32); u64 = f;    print(u64); f = f;    print(f); d = f;   print(d); ld = f;    print(ld); std::cout << std::endl;
   //std::cout << "  "; b = d;    print(b); u8 = d;    print(u8); u16 = d;    print(u16); u32 = d;    print(u32); u64 = d;    print(u64); f = d;    print(f); d = d;   print(d); ld = d;    print(ld); std::cout << std::endl;
   //std::cout << "  "; b = ld;   print(b); u8 = ld;   print(u8); u16 = ld;   print(u16); u32 = ld;   print(u32); u64 = ld;   print(u64); f = ld;   print(f); d = ld;  print(d); ld = ld;   print(ld); std::cout << std::endl;

   //std::cout << std::endl;
   //std::cout << "  function - " << __FUNCTION__ << std::endl;
   //std::cout << "type - " << typeid(color_name<bool>).name() << std::endl;
   //std::cout << "}}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
  }
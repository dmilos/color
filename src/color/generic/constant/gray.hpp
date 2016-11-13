#ifndef color_generic_constant_gray50
#define color_generic_constant_gray50

// ::color::constant::gray50( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      template< std::uintmax_t numerator_number, std::uintmax_t denominator_number = 1 >
       struct gray{};

      typedef ::color::constant::_internal::gray< 5,100> gray05_type, gray05_t;
      typedef ::color::constant::_internal::gray<10,100> gray10_type, gray10_t;
      typedef ::color::constant::_internal::gray<20,100> gray20_type, gray20_t;
      typedef ::color::constant::_internal::gray<20,100> gray25_type, gray25_t;
      typedef ::color::constant::_internal::gray<30,100> gray30_type, gray30_t;
      typedef ::color::constant::_internal::gray<1,3>    gray33_type, gray33_t;
      typedef ::color::constant::_internal::gray<40,100> gray40_type, gray40_t;
      typedef ::color::constant::_internal::gray<50,100> gray50_type, gray50_t;
      typedef ::color::constant::_internal::gray<60,1>   gray60_type, gray60_t;
      typedef ::color::constant::_internal::gray<2,3>    gray66_type, gray66_t;
      typedef ::color::constant::_internal::gray<70,100> gray70_type, gray70_t;
      typedef ::color::constant::_internal::gray<70,100> gray75_type, gray75_t;
      typedef ::color::constant::_internal::gray<80,100> gray80_type, gray80_t;
      typedef ::color::constant::_internal::gray<90,100> gray90_type, gray90_t;
      typedef ::color::constant::_internal::gray<99,100> gray99_type, gray99_t;
     }

    typedef ::color::constant::base< ::color::constant::_internal::gray50_type > gray50_type, gray50_t ;
    
    template< std::uintmax_t numerator_number, std::uintmax_t denominator_number >
     using  gray_type = ::color::constant::base< ::color::constant::_internal::gray< numerator_number, denominator_number > > ;

    template< std::uintmax_t numerator_number, std::uintmax_t denominator_number >
     using  gray_t = ::color::constant::gray_type< numerator_number, denominator_number >;

    namespace w3c
     {
      typedef  ::color::constant::gray50_type    gray_type;
      typedef  ::color::constant::w3c::gray_type gray_t;
     }

    namespace _internal
     {
      struct gray_x11_type{};
     }

    namespace x11
     {// Distinctively different
      typedef  ::color::constant::gray_type< 3, 4 >  gray_type;
      typedef  ::color::constant::x11::gray_type     gray_t;
     }

    namespace vga
     {
      typedef  ::color::constant::gray50_type      gray_type;
      typedef  ::color::constant::vga::gray_type   gray_t;
     }

   }
 }

#endif

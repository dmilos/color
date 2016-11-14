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

      template< std::uintmax_t black_number, std::uintmax_t white_number = 1 >
       struct gray{};

     }


    template< std::uintmax_t black_number, std::uintmax_t white_number >
     using  gray_type = ::color::constant::base< ::color::constant::_internal::gray< black_number, white_number > > ;

    typedef ::color::constant::gray_type< 99,  1  > gray01_type;
    typedef ::color::constant::gray_type< 95,  5  > gray05_type;
    typedef ::color::constant::gray_type< 90, 10  > gray10_type;
    typedef ::color::constant::gray_type< 80, 20  > gray20_type;
    typedef ::color::constant::gray_type< 75, 25  > gray25_type;
    typedef ::color::constant::gray_type< 70, 30  > gray30_type;
    typedef ::color::constant::gray_type<  2,  1  > gray33_type;
    typedef ::color::constant::gray_type< 60, 40  > gray40_type;
    typedef ::color::constant::gray_type< 50, 50  > gray50_type;
    typedef ::color::constant::gray_type< 40, 60  > gray60_type;
    typedef ::color::constant::gray_type<  1,  2  > gray66_type;
    typedef ::color::constant::gray_type< 30, 70  > gray70_type;
    typedef ::color::constant::gray_type< 25, 75  > gray75_type;
    typedef ::color::constant::gray_type< 20, 80  > gray80_type;
    typedef ::color::constant::gray_type< 10, 90  > gray90_type;
    typedef ::color::constant::gray_type<  5, 95  > gray95_type;
    typedef ::color::constant::gray_type<  1, 99  > gray99_type;

    namespace w3c
     {
      typedef  ::color::constant::gray50_type    gray_type;
     }

    namespace _internal
     {
      struct gray_x11_type{};
     }

    namespace x11
     {// Distinctively different
      typedef  ::color::constant::gray75_type        gray_type;
     }

    namespace vga
     {
      typedef  ::color::constant::gray50_type      gray_type;
     }

   }
 }

#endif

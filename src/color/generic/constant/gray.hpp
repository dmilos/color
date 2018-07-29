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


    template< std::uintmax_t black_number = 50, std::uintmax_t white_number = 50 >
     using  gray_t= ::color::constant::base< ::color::constant::_internal::gray< black_number, white_number > > ;

    typedef ::color::constant::gray_t< 99,  1  > gray01_t;
    typedef ::color::constant::gray_t< 95,  5  > gray05_t;
    typedef ::color::constant::gray_t< 90, 10  > gray10_t;
    typedef ::color::constant::gray_t< 80, 20  > gray20_t;
    typedef ::color::constant::gray_t< 75, 25  > gray25_t;
    typedef ::color::constant::gray_t< 70, 30  > gray30_t;
    typedef ::color::constant::gray_t<  2,  1  > gray33_t;
    typedef ::color::constant::gray_t< 60, 40  > gray40_t;
    typedef ::color::constant::gray_t< 50, 50  > gray50_t;
    typedef ::color::constant::gray_t< 40, 60  > gray60_t;
    typedef ::color::constant::gray_t<  1,  2  > gray66_t;
    typedef ::color::constant::gray_t< 30, 70  > gray70_t;
    typedef ::color::constant::gray_t< 25, 75  > gray75_t;
    typedef ::color::constant::gray_t< 20, 80  > gray80_t;
    typedef ::color::constant::gray_t< 10, 90  > gray90_t;
    typedef ::color::constant::gray_t<  5, 95  > gray95_t;
    typedef ::color::constant::gray_t<  1, 99  > gray99_t;

    namespace w3c
     {
      typedef  ::color::constant::gray50_t    gray_t;
     }

    namespace x11
     {// Distinctively different
      typedef  ::color::constant::gray75_t        gray_t;
     }

    //namespace vga
    // {// Same as w3c
    //  typedef  ::color::constant::gray50_t      gray_t;
    // }

   }
 }

#endif

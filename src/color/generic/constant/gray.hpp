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
      struct gray50_type{};
     }

    using  gray50_type = ::color::constant::base< ::color::constant::_internal::gray50_type >;
    using  gray50_t    = ::color::constant::gray50_type;

    namespace _internal
     {
      struct gray_w3c_type{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::gray_w3c_type > gray_type;
      typedef  ::color::constant::w3c::gray_type                                      gray_t;
     }

    namespace _internal
     {
      struct gray_x11_type{};
     }

    namespace x11
     {// Distinctively different
      typedef  ::color::constant::base< ::color::constant::_internal::gray_x11_type >  gray_type;
      typedef  ::color::constant::x11::gray_type                                       gray_t;
     }

    typedef ::color::constant::w3c::gray_type gray_t, gray_type;
   }
 }

#endif

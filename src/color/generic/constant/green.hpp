#ifndef color_generic_constant_green
#define color_generic_constant_green

// ::color::constant::green( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct green_w3c_type{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::green_w3c_type > green_type;
      typedef  ::color::constant::w3c::green_type                                      green_t;
     }

    namespace _internal
     {
      struct green_x11_type{};
     }

    namespace x11
     {// Distinctively different
      typedef  ::color::constant::base< ::color::constant::_internal::green_x11_type >  green_type;
      typedef  ::color::constant::x11::green_type                                       green_t;
     }

    typedef ::color::constant::w3c::green_type green_t, green_type;
   }
 }

#endif

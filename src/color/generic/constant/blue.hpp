#ifndef color_generic_constant_blue
#define color_generic_constant_blue

// ::color::constant::blue( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct blue_w3c_type{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::blue_w3c_type > blue_type;
      typedef  ::color::constant::w3c::blue_type                                      blue_t;
     }

    namespace _internal
     {
      struct blue_x11_type{};
     }

    namespace x11
     {// Same as w3c
      typedef  ::color::constant::w3c::blue_type  blue_type;
      typedef  ::color::constant::w3c::blue_type  blue_t;
     }

    namespace vga
     {// Same as w3c
      typedef  ::color::constant::w3c::blue_type  blue_type;
      typedef  ::color::constant::w3c::blue_type  blue_t;
     }

    typedef ::color::constant::w3c::blue_type blue_t, blue_type;

   }
 }

#endif 
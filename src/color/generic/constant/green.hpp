#ifndef color_generic_constant_green
#define color_generic_constant_green

// ::color::constant::green( c )

#include "./base.hpp"
#include "./lime.hpp"

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
     }

    namespace _internal
     {
      struct green_x11_type{};
     }

    namespace x11
     {// Distinctively different
      typedef  ::color::constant::w3c::lime_type  green_type;
     }

    namespace vga
     {// Same as w3c
      typedef  ::color::constant::w3c::green_type  green_type;
     }
 

    typedef ::color::constant::w3c::green_type green_t, green_type;
   }
 }

#endif

#ifndef color_generic_constant_red
#define color_generic_constant_red

// ::color::constant::red( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct red_w3c_type{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::red_w3c_type > red_type;
     }

    namespace _internal
     {
      struct red_x11_type{};
     }

    namespace x11
     {// Same as w3c
      typedef  ::color::constant::w3c::red_type  red_type;
     }

    namespace vga
     {// Same as w3c
      typedef  ::color::constant::w3c::red_type  red_type;
     }

    typedef ::color::constant::w3c::red_type red_t, red_type;

   }
 }

#endif 
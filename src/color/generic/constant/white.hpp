#ifndef color_generic_constant_white
#define color_generic_constant_white

// ::color::constant::white( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct white_w3c_type{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::white_w3c_type > white_type;
      typedef  ::color::constant::w3c::white_type                                      white_t;
     }

    namespace _internal
     {
      struct white_x11_type{};
     }

    namespace x11
     {// Same as w3c
      typedef  ::color::constant::w3c::white_type  white_type;
      typedef  ::color::constant::w3c::white_type  white_t;
     }

    namespace vga
     {// Same as w3c
      typedef  ::color::constant::w3c::white_type  white_type;
      typedef  ::color::constant::w3c::white_type  white_t;
     }

    typedef ::color::constant::w3c::white_type white_t, white_type;

   }
 }

#endif

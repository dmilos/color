#ifndef color_generic_constant_teal
#define color_generic_constant_teal

// ::color::constant::teal( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct teal_w3c_type{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::teal_w3c_type > teal_type;
     }

    namespace _internal
     {
      struct teal_x11_type{};
     }

    namespace x11
     {// Same as w3c
      typedef  ::color::constant::w3c::teal_type  teal_type;
     }

    namespace vga
     {// Same as w3c
      typedef  ::color::constant::w3c::teal_type  teal_type;
     }

    typedef ::color::constant::w3c::teal_type teal_t, teal_type;

   }
 }

#endif 
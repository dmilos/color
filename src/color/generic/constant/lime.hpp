#ifndef color_generic_constant_lime
#define color_generic_constant_lime

// ::color::constant::lime( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct lime_w3c_type{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::lime_w3c_type > lime_type;
     }

    namespace _internal
     {
      struct lime_x11_type{};
     }

    namespace vga
     {// Same as w3c
      typedef  ::color::constant::w3c::lime_type  lime_type;
     }

    typedef ::color::constant::w3c::lime_type lime_t, lime_type;

   }
 }

#endif 
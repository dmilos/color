#ifndef color_generic_constant_maroon
#define color_generic_constant_maroon

// ::color::constant::maroon( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct maroon_w3c_type{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::maroon_w3c_type > maroon_type;
     }

    namespace _internal
     {
      struct maroon_x11_type{};
     }

    namespace x11
     {// Distinctively different
      typedef  ::color::constant::base< ::color::constant::_internal::maroon_x11_type >  maroon_type;
     }

    namespace vga
     {// Same as w3c
      typedef  ::color::constant::w3c::maroon_type  maroon_type;
     }
 
    typedef ::color::constant::w3c::maroon_type maroon_t, maroon_type;

   }
 }

#endif

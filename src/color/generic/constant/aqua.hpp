#ifndef color_generic_constant_aqua
#define color_generic_constant_aqua

// ::color::constant::aqua( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct aqua_w3c_type{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::aqua_w3c_type > aqua_type;
      typedef  ::color::constant::w3c::aqua_type                                      aqua_t;
     }

    namespace x11
     { // Same as w3c
      typedef  ::color::constant::w3c::aqua_type  aqua_type;
      typedef  ::color::constant::w3c::aqua_type  aqua_t;
     }

    namespace vga
     {// Same as w3c
      typedef  ::color::constant::w3c::aqua_type  aqua_type;
      typedef  ::color::constant::w3c::aqua_type  aqua_t;
     }

    typedef ::color::constant::w3c::aqua_type aqua_t, aqua_type;

   }
 }

#endif

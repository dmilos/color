#ifndef color_generic_constant_purple
#define color_generic_constant_purple

// ::color::constant::purple( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct purple_w3c_type{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::purple_w3c_type > purple_type;
      typedef  ::color::constant::w3c::purple_type                                      purple_t;
     }

    namespace _internal
     {
      struct purple_x11_type{};
     }

    namespace x11
     {// Distinctively different
      typedef  ::color::constant::base< ::color::constant::_internal::purple_x11_type >  purple_type;
      typedef  ::color::constant::x11::purple_type                                       purple_t;
     }

    typedef ::color::constant::w3c::purple_type purple_t, purple_type;

   }
 }

#endif

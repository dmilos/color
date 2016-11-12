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
      struct aqua_w3_type{};
     }

    namespace w3
     {
      typedef  ::color::constant::base< ::color::constant::_internal::aqua_w3_type > aqua_type;
      typedef  ::color::constant::w3::aqua_type                                      aqua_t;
     }

    namespace _internal
     {
      struct aqua_x11_type{};
     }

    namespace x11
     {
      typedef  ::color::constant::base< ::color::constant::_internal::aqua_x11_type >  aqua_type;
      typedef  ::color::constant::x11::aqua_type                                       aqua_t;
     }

    typedef ::color::constant::w3::aqua_type aqua_t, aqua_type;

   }
 }

#endif

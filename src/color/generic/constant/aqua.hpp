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
      struct aqua_type{};
     }

    using  aqua_type = ::color::constant::base< ::color::constant::_internal::aqua_type >;
    using  aqua_t    = ::color::constant::aqua_type;

   }
 }

#endif

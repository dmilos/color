#ifndef color_generic_constant_magenta
#define color_generic_constant_magenta

// ::color::constant::magenta( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct magenta_type{};
     }

    using  magenta_type = ::color::constant::base< ::color::constant::_internal::magenta_type >;
    using  magenta_t    = ::color::constant::magenta_type;

   }
 }

#endif

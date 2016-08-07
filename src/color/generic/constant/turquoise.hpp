#ifndef color_generic_constant_turquoise
#define color_generic_constant_turquoise

// ::color::constant::turquoise( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct turquoise_type{};
     }

    using  turquoise_type = ::color::constant::base< ::color::constant::_internal::turquoise_type >;
    using  turquoise_t    = ::color::constant::turquoise_type;

   }
 }

#endif

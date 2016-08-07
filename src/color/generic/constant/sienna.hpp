#ifndef color_generic_constant_sienna
#define color_generic_constant_sienna

// ::color::constant::sienna( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct sienna_type{};
     }

    using  sienna_type = ::color::constant::base< ::color::constant::_internal::sienna_type >;
    using  sienna_t    = ::color::constant::sienna_type;

   }
 }

#endif

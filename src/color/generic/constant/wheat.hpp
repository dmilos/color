#ifndef color_generic_constant_wheat
#define color_generic_constant_wheat

// ::color::constant::wheat( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct wheat_type{};
     }

    using  wheat_type = ::color::constant::base< ::color::constant::_internal::wheat_type >;
    using  wheat_t    = ::color::constant::wheat_type;

   }
 }

#endif

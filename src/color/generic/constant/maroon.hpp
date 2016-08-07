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
      struct maroon_type{};
     }

    using  maroon_type = ::color::constant::base< ::color::constant::_internal::maroon_type >;
    using  maroon_t    = ::color::constant::maroon_type;

   }
 }

#endif

#ifndef color_generic_constant_snow
#define color_generic_constant_snow

// ::color::constant::snow( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct snow_type{};
     }

    using  snow_type = ::color::constant::base< ::color::constant::_internal::snow_type >;
    using  snow_t    = ::color::constant::snow_type;

   }
 }

#endif

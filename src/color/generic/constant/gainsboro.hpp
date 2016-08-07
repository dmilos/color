#ifndef color_generic_constant_gainsboro
#define color_generic_constant_gainsboro

// ::color::constant::gainsboro( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct gainsboro_type{};
     }

    using  gainsboro_type = ::color::constant::base< ::color::constant::_internal::gainsboro_type >;
    using  gainsboro_t    = ::color::constant::gainsboro_type;

   }
 }

#endif

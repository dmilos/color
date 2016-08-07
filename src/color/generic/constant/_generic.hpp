#ifndef color_generic_constant_$[![name]!]
#define color_generic_constant_$[![name]!]

// ::color::constant::$[![name]!]( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct $[![name]!]_type{};
     }

    using  $[![name]!]_type = ::color::constant::base< ::color::constant::_internal::$[![name]!]_type >;
    using  $[![name]!]_t    = ::color::constant::$[![name]!]_type;

   }
 }

#endif

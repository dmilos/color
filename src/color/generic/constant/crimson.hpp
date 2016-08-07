#ifndef color_generic_constant_crimson
#define color_generic_constant_crimson

// ::color::constant::crimson( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct crimson_type{};
     }

    using  crimson_type = ::color::constant::base< ::color::constant::_internal::crimson_type >;
    using  crimson_t    = ::color::constant::crimson_type;

   }
 }

#endif

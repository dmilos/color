#ifndef color_generic_constant_yellow
#define color_generic_constant_yellow

// ::color::constant::yellow( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct yellow_type{};
     }

    using  yellow_type = ::color::constant::base< ::color::constant::_internal::yellow_type >;
    using  yellow_t    = ::color::constant::yellow_type;

   }
 }

#endif

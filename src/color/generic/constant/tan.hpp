#ifndef color_generic_constant_tan
#define color_generic_constant_tan

// ::color::constant::tan( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct tan_type{};
     }

    using  tan_type = ::color::constant::base< ::color::constant::_internal::tan_type >;
    using  tan_t    = ::color::constant::tan_type;

   }
 }

#endif

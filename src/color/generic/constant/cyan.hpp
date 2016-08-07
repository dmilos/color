#ifndef color_generic_constant_cyan
#define color_generic_constant_cyan

// ::color::constant::cyan( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct cyan_type{};
     }

    using  cyan_type = ::color::constant::base< ::color::constant::_internal::cyan_type >;
    using  cyan_t    = ::color::constant::cyan_type;

   }
 }

#endif

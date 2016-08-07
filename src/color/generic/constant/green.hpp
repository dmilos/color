#ifndef color_generic_constant_green
#define color_generic_constant_green

// ::color::constant::green( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct green_type{};
     }

    using  green_type = ::color::constant::base< ::color::constant::_internal::green_type >;
    using  green_t    = ::color::constant::green_type;

   }
 }

#endif

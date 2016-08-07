#ifndef color_generic_constant_blue
#define color_generic_constant_blue

// ::color::constant::blue( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct blue_type{};
     }

    using  blue_type = ::color::constant::base< ::color::constant::_internal::blue_type >;
    using  blue_t    = ::color::constant::blue_type;

   }
 }

#endif

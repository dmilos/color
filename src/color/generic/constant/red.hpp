#ifndef color_generic_constant_red
#define color_generic_constant_red

// ::color::constant::red( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct red_type{};
     }

    using  red_type = ::color::constant::base< ::color::constant::_internal::red_type >;
    using  red_t    = ::color::constant::red_type;

   }
 }

#endif

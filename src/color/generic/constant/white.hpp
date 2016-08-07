#ifndef color_generic_constant_white
#define color_generic_constant_white

// ::color::constant::white( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct white_type{};
     }

    using  white_type = ::color::constant::base< ::color::constant::_internal::white_type >;
    using  white_t    = ::color::constant::white_type;

   }
 }

#endif

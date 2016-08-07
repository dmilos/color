#ifndef color_generic_constant_linen
#define color_generic_constant_linen

// ::color::constant::linen( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct linen_type{};
     }

    using  linen_type = ::color::constant::base< ::color::constant::_internal::linen_type >;
    using  linen_t    = ::color::constant::linen_type;

   }
 }

#endif

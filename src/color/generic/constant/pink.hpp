#ifndef color_generic_constant_pink
#define color_generic_constant_pink

// ::color::constant::pink( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct pink_type{};
     }

    using  pink_type = ::color::constant::base< ::color::constant::_internal::pink_type >;
    using  pink_t    = ::color::constant::pink_type;

   }
 }

#endif

#ifndef color_generic_constant_purple
#define color_generic_constant_purple

// ::color::constant::purple( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct purple_type{};
     }

    using  purple_type = ::color::constant::base< ::color::constant::_internal::purple_type >;
    using  purple_t    = ::color::constant::purple_type;

   }
 }

#endif

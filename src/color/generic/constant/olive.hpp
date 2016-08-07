#ifndef color_generic_constant_olive
#define color_generic_constant_olive

// ::color::constant::olive( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct olive_type{};
     }

    using  olive_type = ::color::constant::base< ::color::constant::_internal::olive_type >;
    using  olive_t    = ::color::constant::olive_type;

   }
 }

#endif

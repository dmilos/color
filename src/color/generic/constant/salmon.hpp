#ifndef color_generic_constant_salmon
#define color_generic_constant_salmon

// ::color::constant::salmon( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct salmon_type{};
     }

    using  salmon_type = ::color::constant::base< ::color::constant::_internal::salmon_type >;
    using  salmon_t    = ::color::constant::salmon_type;

   }
 }

#endif

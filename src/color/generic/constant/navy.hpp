#ifndef color_generic_constant_navy
#define color_generic_constant_navy

// ::color::constant::navy( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct navy_type{};
     }

    using  navy_type = ::color::constant::base< ::color::constant::_internal::navy_type >;
    using  navy_t    = ::color::constant::navy_type;

   }
 }

#endif

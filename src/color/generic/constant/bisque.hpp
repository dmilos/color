#ifndef color_generic_constant_bisque
#define color_generic_constant_bisque

// ::color::constant::bisque( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct bisque_type{};
     }

    using  bisque_type = ::color::constant::base< ::color::constant::_internal::bisque_type >;
    using  bisque_t    = ::color::constant::bisque_type;

   }
 }

#endif

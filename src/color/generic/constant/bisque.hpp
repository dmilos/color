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
      struct bisque_t{};
     }

    using  bisque_t = ::color::constant::base< ::color::constant::_internal::bisque_t >;
    using  bisque_type    = ::color::constant::bisque_t;

   }
 }

#endif

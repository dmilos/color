#ifndef color_generic_constant_tomato
#define color_generic_constant_tomato

// ::color::constant::tomato( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct tomato_type{};
     }

    using  tomato_type = ::color::constant::base< ::color::constant::_internal::tomato_type >;
    using  tomato_t    = ::color::constant::tomato_type;

   }
 }

#endif

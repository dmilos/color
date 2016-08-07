#ifndef color_generic_constant_black
#define color_generic_constant_black

// ::color::constant::black( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct black_type{};
     }

    using  black_type = ::color::constant::base< ::color::constant::_internal::black_type >;
    using  black_t    = ::color::constant::black_type;

   }
 }

#endif

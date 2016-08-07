#ifndef color_generic_constant_violet
#define color_generic_constant_violet

// ::color::constant::violet( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct violet_type{};
     }

    using  violet_type = ::color::constant::base< ::color::constant::_internal::violet_type >;
    using  violet_t    = ::color::constant::violet_type;

   }
 }

#endif

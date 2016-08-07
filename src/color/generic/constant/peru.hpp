#ifndef color_generic_constant_peru
#define color_generic_constant_peru

// ::color::constant::peru( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct peru_type{};
     }

    using  peru_type = ::color::constant::base< ::color::constant::_internal::peru_type >;
    using  peru_t    = ::color::constant::peru_type;

   }
 }

#endif

#ifndef color_generic_constant_orange
#define color_generic_constant_orange

// ::color::constant::orange( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct orange_type{};
     }

    using  orange_type = ::color::constant::base< ::color::constant::_internal::orange_type >;
    using  orange_t    = ::color::constant::orange_type;

   }
 }

#endif

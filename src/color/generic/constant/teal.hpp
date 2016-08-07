#ifndef color_generic_constant_teal
#define color_generic_constant_teal

// ::color::constant::teal( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct teal_type{};
     }

    using  teal_type = ::color::constant::base< ::color::constant::_internal::teal_type >;
    using  teal_t    = ::color::constant::teal_type;

   }
 }

#endif

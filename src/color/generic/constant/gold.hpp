#ifndef color_generic_constant_gold
#define color_generic_constant_gold

// ::color::constant::gold( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct gold_type{};
     }

    using  gold_type = ::color::constant::base< ::color::constant::_internal::gold_type >;
    using  gold_t    = ::color::constant::gold_type;

   }
 }

#endif

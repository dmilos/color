#ifndef color_generic_constant_coral
#define color_generic_constant_coral

// ::color::constant::coral( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct coral_type{};
     }

    using  coral_type = ::color::constant::base< ::color::constant::_internal::coral_type >;
    using  coral_t    = ::color::constant::coral_type;

   }
 }

#endif

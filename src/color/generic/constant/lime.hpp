#ifndef color_generic_constant_lime
#define color_generic_constant_lime

// ::color::constant::lime( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct lime_type{};
     }

    using  lime_type = ::color::constant::base< ::color::constant::_internal::lime_type >;
    using  lime_t    = ::color::constant::lime_type;

   }
 }

#endif

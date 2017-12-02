#ifndef color_generic_constant_beige
#define color_generic_constant_beige

// ::color::constant::beige( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct beige_type{};
     }

    using  beige_type = ::color::constant::base< ::color::constant::_internal::beige_type >;
    using  beige_t    = ::color::constant::beige_type;

   }
 }

#endif

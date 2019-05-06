#ifndef color_generic_constant_aqua
#define color_generic_constant_aqua

// ::color::constant::aqua( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct aqua_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::aqua_t > aqua_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::aqua_t aqua_t;

   }
 }

#endif 
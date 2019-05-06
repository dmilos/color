#ifndef color_generic_constant_aquamarine
#define color_generic_constant_aquamarine

// ::color::constant::aquamarine( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct aquamarine_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::aquamarine_t > aquamarine_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::aquamarine_t aquamarine_t;

   }
 }

#endif 
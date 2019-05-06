#ifndef color_generic_constant_sienna
#define color_generic_constant_sienna

// ::color::constant::sienna( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct sienna_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::sienna_t > sienna_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::sienna_t sienna_t;

   }
 }

#endif 
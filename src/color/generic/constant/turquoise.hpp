#ifndef color_generic_constant_turquoise
#define color_generic_constant_turquoise

// ::color::constant::turquoise( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct turquoise_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::turquoise_t > turquoise_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::turquoise_t turquoise_t;

   }
 }

#endif 
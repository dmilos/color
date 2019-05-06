#ifndef color_generic_constant_wheat
#define color_generic_constant_wheat

// ::color::constant::wheat( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct wheat_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::wheat_t > wheat_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::wheat_t wheat_t;

   }
 }

#endif 
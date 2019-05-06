#ifndef color_generic_constant_gainsboro
#define color_generic_constant_gainsboro

// ::color::constant::gainsboro( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct gainsboro_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::gainsboro_t > gainsboro_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::gainsboro_t gainsboro_t;

   }
 }

#endif
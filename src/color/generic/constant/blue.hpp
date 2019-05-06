#ifndef color_generic_constant_blue
#define color_generic_constant_blue

// ::color::constant::blue( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct blue_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::blue_t > blue_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::blue_t blue_t;

   }
 }

#endif 
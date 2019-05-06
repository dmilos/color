#ifndef color_generic_constant_snow
#define color_generic_constant_snow

// ::color::constant::snow( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct snow_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::snow_t > snow_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::snow_t snow_t;

   }
 }

#endif 
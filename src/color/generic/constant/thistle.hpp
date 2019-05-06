#ifndef color_generic_constant_thistle
#define color_generic_constant_thistle

// ::color::constant::thistle( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct thistle_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::thistle_t > thistle_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::thistle_t thistle_t;

   }
 }

#endif 
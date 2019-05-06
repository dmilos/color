#ifndef color_generic_constant_pink
#define color_generic_constant_pink

// ::color::constant::pink( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct pink_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::pink_t > pink_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::pink_t pink_t;

   }
 }

#endif 
#ifndef color_generic_constant_navy
#define color_generic_constant_navy

// ::color::constant::navy( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct navy_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::navy_t > navy_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::navy_t navy_t;

   }
 }

#endif 
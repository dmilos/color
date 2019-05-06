#ifndef color_generic_constant_tan
#define color_generic_constant_tan

// ::color::constant::tan( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct tan_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::tan_t > tan_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::tan_t tan_t;

   }
 }

#endif 
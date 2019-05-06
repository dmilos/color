#ifndef color_generic_constant_cyan
#define color_generic_constant_cyan

// ::color::constant::cyan( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct cyan_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::cyan_t > cyan_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::cyan_t cyan_t;

   }
 }

#endif 
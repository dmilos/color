#ifndef color_generic_constant_magenta
#define color_generic_constant_magenta

// ::color::constant::magenta( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct magenta_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::magenta_t > magenta_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::magenta_t magenta_t;

   }
 }

#endif 
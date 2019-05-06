#ifndef color_generic_constant_violet
#define color_generic_constant_violet

// ::color::constant::violet( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct violet_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::violet_t > violet_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::violet_t violet_t;

   }
 }

#endif 
#ifndef color_generic_constant_peru
#define color_generic_constant_peru

// ::color::constant::peru( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct peru_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::peru_t > peru_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::peru_t peru_t;

   }
 }

#endif 
#ifndef color_generic_constant_lavender
#define color_generic_constant_lavender

// ::color::constant::lavender( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct lavender_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::lavender_t > lavender_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::lavender_t lavender_t;

   }
 }

#endif 
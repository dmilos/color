#ifndef color_generic_constant_beige
#define color_generic_constant_beige

// ::color::constant::beige( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct beige_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::beige_t > beige_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::beige_t beige_t;

   }
 }

#endif 
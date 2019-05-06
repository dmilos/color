#ifndef color_generic_constant_tomato
#define color_generic_constant_tomato

// ::color::constant::tomato( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct tomato_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::tomato_t > tomato_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::tomato_t tomato_t;

   }
 }

#endif 
#ifndef color_generic_constant_red
#define color_generic_constant_red

// ::color::constant::red( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct red_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::red_t > red_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::red_t red_t;

   }
 }

#endif 
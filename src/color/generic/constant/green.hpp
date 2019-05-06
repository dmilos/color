#ifndef color_generic_constant_green
#define color_generic_constant_green

// ::color::constant::green( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct green_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::green_t > green_t;
     }

    namespace _internal
     {
      namespace x11
       {
        struct green_t{};
       }
     }

    namespace x11
     {// Distinctively different
      typedef  ::color::constant::base< ::color::constant::_internal::x11::green_t >  green_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::green_t green_t;

   }
 }

#endif
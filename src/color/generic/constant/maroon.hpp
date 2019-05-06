#ifndef color_generic_constant_maroon
#define color_generic_constant_maroon

// ::color::constant::maroon( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct maroon_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::maroon_t > maroon_t;
     }

    namespace _internal
     {
      namespace x11
       {
        struct maroon_t{};
       }
     }

    namespace x11
     {// Distinctively different
      typedef  ::color::constant::base< ::color::constant::_internal::x11::maroon_t >  maroon_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::maroon_t maroon_t;

   }
 }

#endif 
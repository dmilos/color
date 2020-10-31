#ifndef color_generic_constant_black
#define color_generic_constant_black

// ::color::constant::black( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct black_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::black_t > black_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::black_t black_t;

   }
 }

#endif

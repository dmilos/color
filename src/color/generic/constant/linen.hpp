#ifndef color_generic_constant_linen
#define color_generic_constant_linen

// ::color::constant::linen( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct linen_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::linen_t > linen_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::linen_t linen_t;

   }
 }

#endif 
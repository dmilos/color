#ifndef color_generic_constant_fuchsia
#define color_generic_constant_fuchsia

// ::color::constant::fuchsia( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct fuchsia_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::fuchsia_t > fuchsia_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::fuchsia_t fuchsia_t;

   }
 }

#endif 
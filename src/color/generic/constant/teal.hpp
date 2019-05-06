#ifndef color_generic_constant_teal
#define color_generic_constant_teal

// ::color::constant::teal( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct teal_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::teal_t > teal_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::teal_t teal_t;

   }
 }

#endif 
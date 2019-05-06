#ifndef color_generic_constant_orchid
#define color_generic_constant_orchid

// ::color::constant::orchid( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct orchid_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::orchid_t > orchid_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::orchid_t orchid_t;

   }
 }

#endif 
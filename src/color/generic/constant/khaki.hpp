#ifndef color_generic_constant_khaki
#define color_generic_constant_khaki

// ::color::constant::khaki( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct khaki_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::khaki_t > khaki_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::khaki_t khaki_t;

   }
 }

#endif 
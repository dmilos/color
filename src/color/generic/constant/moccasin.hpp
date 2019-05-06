#ifndef color_generic_constant_moccasin
#define color_generic_constant_moccasin

// ::color::constant::moccasin( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct moccasin_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::moccasin_t > moccasin_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::moccasin_t moccasin_t;

   }
 }

#endif 
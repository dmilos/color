#ifndef color_generic_constant_olive
#define color_generic_constant_olive

// ::color::constant::olive( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct olive_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::olive_t > olive_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::olive_t olive_t;

   }
 }

#endif 
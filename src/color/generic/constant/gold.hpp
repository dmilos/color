#ifndef color_generic_constant_gold
#define color_generic_constant_gold

// ::color::constant::gold( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct gold_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::gold_t > gold_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::gold_t gold_t;

   }
 }

#endif 
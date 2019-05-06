#ifndef color_generic_constant_white
#define color_generic_constant_white

// ::color::constant::white( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct white_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::white_t > white_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::white_t white_t;

   }
 }

#endif 
#ifndef color_generic_constant_yellow
#define color_generic_constant_yellow

// ::color::constant::yellow( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct yellow_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::yellow_t > yellow_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::yellow_t yellow_t;

   }
 }

#endif 
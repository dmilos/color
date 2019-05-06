#ifndef color_generic_constant_crimson
#define color_generic_constant_crimson

// ::color::constant::crimson( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct crimson_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::crimson_t > crimson_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::crimson_t crimson_t;

   }
 }

#endif 
#ifndef color_generic_constant_brown
#define color_generic_constant_brown

// ::color::constant::brown( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct brown_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::brown_t > brown_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::brown_t brown_t;

   }
 }

#endif 
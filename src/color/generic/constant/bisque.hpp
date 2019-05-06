#ifndef color_generic_constant_bisque
#define color_generic_constant_bisque

// ::color::constant::bisque( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct bisque_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::bisque_t > bisque_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::bisque_t bisque_t;

   }
 }

#endif
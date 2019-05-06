#ifndef color_generic_constant_orange
#define color_generic_constant_orange

// ::color::constant::orange( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct orange_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::orange_t > orange_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::orange_t orange_t;

   }
 }

#endif 
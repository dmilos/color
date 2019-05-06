#ifndef color_generic_constant_chocolate
#define color_generic_constant_chocolate

// ::color::constant::chocolate( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct chocolate_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::chocolate_t > chocolate_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::chocolate_t chocolate_t;

   }
 }

#endif 
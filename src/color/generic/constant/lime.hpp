#ifndef color_generic_constant_lime
#define color_generic_constant_lime

// ::color::constant::lime( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct lime_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::lime_t > lime_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::lime_t lime_t;

   }
 }

#endif 
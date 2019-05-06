#ifndef color_generic_constant_coral
#define color_generic_constant_coral

// ::color::constant::coral( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct coral_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::coral_t > coral_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::coral_t coral_t;

   }
 }

#endif 
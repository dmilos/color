#ifndef color_generic_constant_indigo
#define color_generic_constant_indigo

// ::color::constant::indigo( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct indigo_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::indigo_t > indigo_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::indigo_t indigo_t;

   }
 }

#endif 
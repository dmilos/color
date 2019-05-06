#ifndef color_generic_constant_ivory
#define color_generic_constant_ivory

// ::color::constant::ivory( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct ivory_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::ivory_t > ivory_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::ivory_t ivory_t;

   }
 }

#endif 
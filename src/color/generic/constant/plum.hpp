#ifndef color_generic_constant_plum
#define color_generic_constant_plum

// ::color::constant::plum( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct plum_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::plum_t > plum_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::plum_t plum_t;

   }
 }

#endif 
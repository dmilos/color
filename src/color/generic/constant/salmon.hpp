#ifndef color_generic_constant_salmon
#define color_generic_constant_salmon

// ::color::constant::salmon( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct salmon_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::salmon_t > salmon_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::salmon_t salmon_t;

   }
 }

#endif 
#ifndef color_generic_constant_azure
#define color_generic_constant_azure

// ::color::constant::azure( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct azure_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::azure_t > azure_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::azure_t azure_t;

   }
 }

#endif 
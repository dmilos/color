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
      struct azure_type{};
     }

    using  azure_type = ::color::constant::base< ::color::constant::_internal::azure_type >;
    using  azure_t    = ::color::constant::azure_type;

   }
 }

#endif

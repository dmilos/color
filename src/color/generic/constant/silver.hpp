#ifndef color_generic_constant_silver
#define color_generic_constant_silver

// ::color::constant::silver( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct silver_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::silver_t > silver_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::silver_t silver_t;

   }
 }

#endif 
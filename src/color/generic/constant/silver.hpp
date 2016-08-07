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
      struct silver_type{};
     }

    using  silver_type = ::color::constant::base< ::color::constant::_internal::silver_type >;
    using  silver_t    = ::color::constant::silver_type;

   }
 }

#endif

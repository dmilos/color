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
      struct plum_type{};
     }

    using  plum_type = ::color::constant::base< ::color::constant::_internal::plum_type >;
    using  plum_t    = ::color::constant::plum_type;

   }
 }

#endif

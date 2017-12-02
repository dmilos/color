#ifndef color_generic_constant_brown
#define color_generic_constant_brown

// ::color::constant::brown( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct brown_type{};
     }

    using  brown_type = ::color::constant::base< ::color::constant::_internal::brown_type >;
    using  brown_t    = ::color::constant::brown_type;

   }
 }

#endif

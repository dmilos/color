#ifndef color_generic_constant_fuchsia
#define color_generic_constant_fuchsia

// ::color::constant::fuchsia( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct fuchsia_type{};
     }

    using  fuchsia_type = ::color::constant::base< ::color::constant::_internal::fuchsia_type >;
    using  fuchsia_t    = ::color::constant::fuchsia_type;

   }
 }

#endif

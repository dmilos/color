#ifndef color_generic_constant_moccasin
#define color_generic_constant_moccasin

// ::color::constant::moccasin( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct moccasin_type{};
     }

    using  moccasin_type = ::color::constant::base< ::color::constant::_internal::moccasin_type >;
    using  moccasin_t    = ::color::constant::moccasin_type;

   }
 }

#endif

#ifndef color_generic_constant_orchid
#define color_generic_constant_orchid

// ::color::constant::orchid( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct orchid_type{};
     }

    using  orchid_type = ::color::constant::base< ::color::constant::_internal::orchid_type >;
    using  orchid_t    = ::color::constant::orchid_type;

   }
 }

#endif

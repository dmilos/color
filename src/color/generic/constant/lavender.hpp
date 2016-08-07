#ifndef color_generic_constant_lavender
#define color_generic_constant_lavender

// ::color::constant::lavender( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct lavender_type{};
     }

    using  lavender_type = ::color::constant::base< ::color::constant::_internal::lavender_type >;
    using  lavender_t    = ::color::constant::lavender_type;

   }
 }

#endif

#ifndef color_generic_constant_indigo
#define color_generic_constant_indigo

// ::color::constant::indigo( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {
    namespace _internal
     {
      struct indigo_type{};
     }

    using  indigo_type = ::color::constant::base< ::color::constant::_internal::indigo_type >;
    using  indigo_t    = ::color::constant::indigo_type;

   }
 }

#endif

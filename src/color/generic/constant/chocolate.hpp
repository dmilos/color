#ifndef color_generic_constant_chocolate
#define color_generic_constant_chocolate

// ::color::constant::chocolate( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct chocolate_type{};
     }

    using  chocolate_type = ::color::constant::base< ::color::constant::_internal::chocolate_type >;
    using  chocolate_t    = ::color::constant::chocolate_type;

   }
 }

#endif

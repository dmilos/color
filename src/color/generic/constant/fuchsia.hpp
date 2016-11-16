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

    typedef ::color::constant::base< ::color::constant::_internal::fuchsia_type > fuchsia_t, fuchsia_type;

    //namespace vga
    // {// Same as w3c
    //  typedef  ::color::constant::w3c::fuchsia_type  fuchsia_type;
    // }

   }
 }

#endif

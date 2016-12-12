#ifndef color_generic_constant_purple
#define color_generic_constant_purple

// ::color::constant::purple( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct purple_w3c_t{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::purple_w3c_t > purple_t;
     }

    namespace _internal
     {
      struct purple_x11_t{};
     }

    namespace x11
     {// Distinctively different
      typedef  ::color::constant::base< ::color::constant::_internal::purple_x11_t >  purple_t;
     }

    //namespace vga
    // {// Same as w3c
    //  typedef  ::color::constant::w3c::purple_t  purple_t;
    // }

    typedef ::color::constant::w3c::purple_t purple_t;

   }
 }

#endif

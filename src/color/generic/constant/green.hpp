#ifndef color_generic_constant_green
#define color_generic_constant_green

// ::color::constant::green( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct green_w3c_t{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::green_w3c_t > green_t;
     }

    namespace _internal
     {
      struct green_x11_t{};
     }

    namespace x11
     {// Distinctively different
      typedef  ::color::constant::base< ::color::constant::_internal::green_x11_t > green_t;
     }

    //namespace vga
    // {// Same as w3c
    //  typedef  ::color::constant::w3c::green_t  green_t;
    // }
 
    typedef ::color::constant::w3c::green_t green_t;
   }
 }

#endif

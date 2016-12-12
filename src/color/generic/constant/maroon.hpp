#ifndef color_generic_constant_maroon
#define color_generic_constant_maroon

// ::color::constant::maroon( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct maroon_w3c_t{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::maroon_w3c_t > maroon_t;
     }

    namespace _internal
     {
      struct maroon_x11_t{};
     }

    namespace x11
     {// Distinctively different
      typedef  ::color::constant::base< ::color::constant::_internal::maroon_x11_t >  maroon_t;
     }

    //namespace vga
    // {// Same as w3c
    //  typedef  ::color::constant::w3c::maroon_t  maroon_t;
    // }
 
    typedef ::color::constant::w3c::maroon_t maroon_t;

   }
 }

#endif

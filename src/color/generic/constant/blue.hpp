#ifndef color_generic_constant_blue
#define color_generic_constant_blue

// ::color::constant::blue( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct blue_type{};
     }

    typedef ::color::constant::base< ::color::constant::_internal::blue_type > blue_t, blue_type;
    

    //namespace vga
    // {// Same as w3c
    //  typedef  ::color::constant::w3c::blue_type  blue_type;
    // }

   }
 }

#endif

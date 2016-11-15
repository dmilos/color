#ifndef color_generic_constant_yellow
#define color_generic_constant_yellow

// ::color::constant::yellow( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct yellow_w3c_type{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::yellow_w3c_type > yellow_type;
     }

    namespace _internal
     {
      struct yellow_x11_type{};
     }

    //namespace vga
    // {// Same as w3c
    //  typedef  ::color::constant::w3c::yellow_type  yellow_type;
    // }

    typedef ::color::constant::w3c::yellow_type yellow_t, yellow_type;

   }
 }

#endif

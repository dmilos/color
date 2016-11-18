#ifndef color_generic_constant_white
#define color_generic_constant_white

// ::color::constant::white( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct white_type{};
     }

    typedef ::color::constant::base< ::color::constant::_internal::white_type > white_t, white_type;

    //namespace vga
    // {// Same as w3c
    //  typedef  ::color::constant::w3c::white_type  white_type;
    // }

   }
 }

#endif

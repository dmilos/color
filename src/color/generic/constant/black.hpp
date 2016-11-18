#ifndef color_generic_constant_black
#define color_generic_constant_black

// ::color::constant::black( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct black_type{};
     }

    typedef ::color::constant::base< ::color::constant::_internal::black_type > black_t, black_type;


    //namespace vga
    // {// Same as w3c
    //  typedef  ::color::constant::w3c::black_type  black_type;
    // }

   }
 }

#endif

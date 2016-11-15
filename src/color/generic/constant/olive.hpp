#ifndef color_generic_constant_olive
#define color_generic_constant_olive

// ::color::constant::olive( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct olive_w3c_type{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::olive_w3c_type > olive_type;
     }

    //namespace vga
    // {// Same as w3c
    //  typedef  ::color::constant::w3c::olive_type  olive_type;
    // }

    typedef ::color::constant::w3c::olive_type olive_t, olive_type;

   }
 }

#endif 
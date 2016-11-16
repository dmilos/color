#ifndef color_generic_constant_aqua
#define color_generic_constant_aqua

// ::color::constant::aqua( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct aqua_type{};
     }

    typedef ::color::constant::base< ::color::constant::_internal::aqua_type > aqua_t, aqua_type;


    //namespace vga
    // {// Same as w3c
    //  typedef  ::color::constant::aqua_type  aqua_type;
    // }

   }
 }

#endif

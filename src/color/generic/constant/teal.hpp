#ifndef color_generic_constant_teal
#define color_generic_constant_teal

// ::color::constant::teal( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct teal_type{};
     }

    typedef ::color::constant::base< ::color::constant::_internal::teal_type > teal_t, teal_type;

    //namespace vga
    // {// Same as w3c
    //  typedef  ::color::constant::w3c::teal_type  teal_type;
    // }


   }
 }

#endif

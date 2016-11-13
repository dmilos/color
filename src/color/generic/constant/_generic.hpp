#ifndef color_generic_constant_$[![name]!]
#define color_generic_constant_$[![name]!]

// ::color::constant::$[![name]!]( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct $[![name]!]_w3c_type{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::$[![name]!]_w3c_type > $[![name]!]_type;
      typedef  ::color::constant::w3c::$[![name]!]_type                                      $[![name]!]_t;
     }

    namespace _internal
     {
      struct $[![name]!]_x11_type{};
     }

    namespace x11
     {
       // Same as w3c
      //typedef  ::color::constant::w3c::$[![name]!]_type  $[![name]!]_type;
      //typedef  ::color::constant::w3c::$[![name]!]_type  $[![name]!]_t;

     // Distinctively different
      typedef  ::color::constant::base< ::color::constant::_internal::$[![name]!]_x11_type >  $[![name]!]_type;
      typedef  ::color::constant::x11::$[![name]!]_type                                       $[![name]!]_t;
     }

    namespace _internal
     {
      struct $[![name]!]_x11_type{};
     }

    namespace vga
     {
       // Same as w3c
      //typedef  ::color::constant::w3c::$[![name]!]_type  $[![name]!]_type;
      //typedef  ::color::constant::w3c::$[![name]!]_type  $[![name]!]_t;

     // Distinctively different
      typedef  ::color::constant::base< ::color::constant::_internal::$[![name]!]_x11_type >  $[![name]!]_type;
      typedef  ::color::constant::vga::$[![name]!]_type                                       $[![name]!]_t;
     }


    typedef ::color::constant::w3c::$[![name]!]_type $[![name]!]_t, $[![name]!]_type;

   }
 }

#endif

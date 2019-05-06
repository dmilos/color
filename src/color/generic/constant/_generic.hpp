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
      namespace w3c
       {
        struct $[![name]!]_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::$[![name]!]_t > $[![name]!]_t;
     }

    namespace _internal
     {
      namespace x11
       {
        struct $[![name]!]_t{};
       }
     }

    namespace x11
     {// Distinctively different
      typedef  ::color::constant::base< ::color::constant::_internal::x11::$[![name]!]_t >  $[![name]!]_t;
     }

    namespace _internal
     {
      namespace vga
       {
        struct $[![name]!]_t{};
       }
     }

    namespace vga
     {// Distinctively different
      typedef  ::color::constant::base< ::color::constant::_internal::vga::$[![name]!]_t >  $[![name]!]_t;
     }

    // Primary value is w3c
    typedef ::color::constant::w3c::$[![name]!]_t $[![name]!]_t;

   }
 }

#endif 
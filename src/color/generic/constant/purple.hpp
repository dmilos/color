#ifndef color_generic_constant_purple
#define color_generic_constant_purple

// ::color::constant::purple( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      namespace w3c
       {
        struct purple_t{};
       }
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::w3c::purple_t > purple_t;
     }

    namespace _internal
     {
      namespace x11
       {
        struct purple_t{};
       }
     }

    namespace x11
     {// Distinctively different
      typedef  ::color::constant::base< ::color::constant::_internal::x11::purple_t >  purple_t;
     }

    //namespace vga
    // {// Same as w3c
    //  typedef  ::color::constant::w3c::purple_t  purple_t;
    // }


    //namespace _internal
    // {
    //  namespace vga
    //   {
    //    struct purple_t{};
    //   }
    // }
    //
    //namespace vga
    // {// Same as w3c
    //  typedef  ::color::constant::base< ::color::constant::_internal::vga::purple_t >  purple_t;
    // }

    typedef ::color::constant::w3c::purple_t purple_t;

   }
 }

#endif

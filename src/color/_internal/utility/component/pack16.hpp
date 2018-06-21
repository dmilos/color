#ifndef color__internal_utility_component_pack16
#define color__internal_utility_component_pack16

// ::color::_internal::utility::component::pack16

#include "./unsigned.hpp"


namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace component
       {

        struct pack16
         : public ::color::_internal::utility::component::Unsigned< std::uint8_t >
         {
         };

        typedef  ::color::_internal::utility::component::pack16  split556_t ;
        typedef  ::color::_internal::utility::component::pack16  split565_t ;
        typedef  ::color::_internal::utility::component::pack16  split655_t ;

        typedef  ::color::_internal::utility::component::pack16  split772_t ;
        typedef  ::color::_internal::utility::component::pack16  split727_t ;
        typedef  ::color::_internal::utility::component::pack16  split277_t ;

        typedef  ::color::_internal::utility::component::pack16  split4444_t;

        typedef  ::color::_internal::utility::component::pack16  split5551_t;
        typedef  ::color::_internal::utility::component::pack16  split1555_t;

       }
     }
   }
 }

#endif
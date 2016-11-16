#ifndef color__internal_utility_component_pack16
#define color__internal_utility_component_pack16

// ::color::_internal::utility::component::pack16< index_type >

#include "./unsigned.hpp"


namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace component
       {

        template< typename index_name >
         struct pack16
          : public ::color::_internal::utility::component::Unsigned< std::uint8_t, index_name >
          {
          };

        template< typename index_name > using split556_type  = ::color::_internal::utility::component::pack16<index_name>;
        template< typename index_name > using split565_type  = ::color::_internal::utility::component::pack16<index_name>;
        template< typename index_name > using split655_type  = ::color::_internal::utility::component::pack16<index_name>;

        template< typename index_name > using split772_type = ::color::_internal::utility::component::pack16<index_name>;
        template< typename index_name > using split727_type = ::color::_internal::utility::component::pack16<index_name>;
        template< typename index_name > using split277_type = ::color::_internal::utility::component::pack16<index_name>;

        template< typename index_name > using split4444_type = ::color::_internal::utility::component::pack16<index_name>;

        template< typename index_name > using split5551_type = ::color::_internal::utility::component::pack16<index_name>;
        template< typename index_name > using split1555_type = ::color::_internal::utility::component::pack16<index_name>;

       }
     }
   }
 }

#endif
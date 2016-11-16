#ifndef color__internal_utility_component_pack_8
#define color__internal_utility_component_pack_8

// ::color::_internal::utility::component::pack8< index_type >

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
         struct pack8
          : public ::color::_internal::utility::component::Unsigned< std::uint8_t, index_name >
          {
          };

        template< typename index_name > using split2222_type = ::color::_internal::utility::component::pack8<index_name>;

        template< typename index_name > using split233_type  = ::color::_internal::utility::component::pack8<index_name>;
        template< typename index_name > using split323_type  = ::color::_internal::utility::component::pack8<index_name>;
        template< typename index_name > using split332_type  = ::color::_internal::utility::component::pack8<index_name>;

        template< typename index_name > using split224_type  = ::color::_internal::utility::component::pack8<index_name>;
        template< typename index_name > using split242_type  = ::color::_internal::utility::component::pack8<index_name>;
        template< typename index_name > using split422_type  = ::color::_internal::utility::component::pack8<index_name>;

       }
     }
   }
 }

#endif
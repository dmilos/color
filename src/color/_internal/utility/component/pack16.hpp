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

        template< typename index_name > using cnent556  = ::color::_internal::utility::component::pack16<index_name>;
        template< typename index_name > using cnent565  = ::color::_internal::utility::component::pack16<index_name>;
        template< typename index_name > using cnent655  = ::color::_internal::utility::component::pack16<index_name>;
        template< typename index_name > using cnent4444 = ::color::_internal::utility::component::pack16<index_name>;
        template< typename index_name > using cnent5551 = ::color::_internal::utility::component::pack16<index_name>;


       }
     }
   }
 }

#endif
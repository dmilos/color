#ifndef color__internal_utility_component_pack_16
#define color__internal_utility_component_pack_16

// ::color::_internal::utility::component::pack_16< index_type >

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
         struct pack_16
          : public ::color::_internal::utility::component::Unsigned< std::uint8_t, index_name >
          {
          };

        template< typename index_name > using cnent556  = ::color::_internal::utility::component::pack_16<index_name>;
        template< typename index_name > using cnent565  = ::color::_internal::utility::component::pack_16<index_name>;
        template< typename index_name > using cnent655  = ::color::_internal::utility::component::pack_16<index_name>;
        template< typename index_name > using cnent4444 = ::color::_internal::utility::component::pack_16<index_name>;
        template< typename index_name > using cnent5551 = ::color::_internal::utility::component::pack_16<index_name>;
        template< typename index_name > using cnent1555 = ::color::_internal::utility::component::pack_16<index_name>;


       }
     }
   }
 }

#endif
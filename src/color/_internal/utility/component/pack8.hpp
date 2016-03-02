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
         struct pack_8
          : public ::color::_internal::utility::component::Unsigned< std::uint8_t, index_name >
          {
          };

        template< typename index_name > using cnent2222 = ::color::_internal::utility::component::pack_8<index_name>;
        template< typename index_name > using cnent233  = ::color::_internal::utility::component::pack_8<index_name>;
        template< typename index_name > using cnent323  = ::color::_internal::utility::component::pack_8<index_name>;
        template< typename index_name > using cnent332  = ::color::_internal::utility::component::pack_8<index_name>;
        template< typename index_name > using cnent224  = ::color::_internal::utility::component::pack_8<index_name>;
        template< typename index_name > using cnent242  = ::color::_internal::utility::component::pack_8<index_name>;
        template< typename index_name > using cnent422  = ::color::_internal::utility::component::pack_8<index_name>;

       }
     }
   }
 }

#endif
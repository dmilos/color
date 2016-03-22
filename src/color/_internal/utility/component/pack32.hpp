#ifndef color__internal_utility_component_pack_32
#define color__internal_utility_component_pack_32

// ::color::_internal::utility::component::pack32< index_type >

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
         struct pack_32
          : public ::color::_internal::utility::component::Unsigned< std::uint16_t, index_name >
          {
          };

        template< typename index_name > using cnent8888 = ::color::_internal::utility::component::pack_32<index_name>;

        template< typename index_name > using cnentAAA2 = ::color::_internal::utility::component::pack_32<index_name>;
        template< typename index_name > using cnent2AAA = ::color::_internal::utility::component::pack_32<index_name>;

       }
     }
   }
 }

#endif
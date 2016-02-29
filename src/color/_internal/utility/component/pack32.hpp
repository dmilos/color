#ifndef color__internal_utility_component_pack32
#define color__internal_utility_component_pack32

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
         struct pack32
          : public ::color::_internal::utility::component::Unsigned< std::uint16_t, index_name >
          {
          };

        template< typename index_name > using cnentAAA2 = ::color::_internal::utility::component::pack32<index_name>;

       }
     }
   }
 }

#endif
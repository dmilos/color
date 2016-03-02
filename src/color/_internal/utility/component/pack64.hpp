#ifndef color__internal_utility_component_pack_64
#define color__internal_utility_component_pack_64

// ::color::_internal::utility::component::pack_64< index_type >

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
         struct pack_64
          : public ::color::_internal::utility::component::Unsigned< std::uint32_t, index_name >
          {
          };

       }
     }
   }
 }

#endif
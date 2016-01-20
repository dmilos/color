#ifndef color__internal_utility_component_cnetAAA2
#define color__internal_utility_component_cnetAAA2

// ::color::_internal::utility::component::cnetAAA2< index_type >

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
         struct cnetAAA2
          : public ::color::_internal::utility::component::Unsigned< std::uint16_t, index_name > 
          {
          };

       }
     }
   }
 }

#endif 
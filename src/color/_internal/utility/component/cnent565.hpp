#ifndef color__internal_utility_component_cnent565
#define color__internal_utility_component_cnent565

// ::color::_internal::utility::component::cnent565< index_type >

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
         struct cnent565
          : public ::color::_internal::utility::component::Unsigned< std::uint8_t, index_name > 
          {
          };

       }
     }
   }
 }

#endif 
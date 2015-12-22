#ifndef color__internal_utility_component_cnent422
#define color__internal_utility_component_cnent422

// ::color::_internal::utility::component::cnent422< index_type >

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
         struct cnent422
          : public ::color::_internal::utility::component::Unsigned< std::uint8_t, index_name > 
          {
          };

       }
     }
   }
 }

#endif 
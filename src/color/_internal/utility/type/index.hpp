#ifndef color__internal_utility_type_index
#define color__internal_utility_type_index

// ::color::_internal::utility::type::index< index_name >

#include "./traitc.hpp"



namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace type
       {

        template< typename index_name >
         struct index
         : public ::color::_internal::utility::type::traitC< index_name >
          {
          };

       }
     }
   }
 }

#endif

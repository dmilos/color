#ifndef color__internal_utility_type_size
#define color__internal_utility_type_size

// ::color::_internal::utility::type::size< size_name >

#include "./traitc.hpp"



namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace type
       {

        template< typename size_name >
         struct size
         : public ::color::_internal::utility::type::traitC< size_name >
          {
          };

       }
     }
   }
 }

#endif

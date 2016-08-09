#ifndef color__internal_utility_bound_boolean
#define color__internal_utility_bound_boolean

#include "./general.hpp"



namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace bound
       {

        template < typename index_name >
          using  boolean = ::color::_internal::utility::bound::general< bool, index_name >

       }
     }
   }
 }

#endif
#ifndef color_generic_place_alpha
#define color_generic_place_alpha

// ::color::place::alpha( c )

#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {

     template< typename category_name >
      inline
      //constexpr
      typename ::color::trait::index< category_name >::instance_type
      alpha()
       {
        return ::color::trait::container< category_name >::size();
       }

    }
  }

#endif

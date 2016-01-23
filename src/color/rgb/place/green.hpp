#ifndef color_rgb_place_green
#define color_rgb_place_green

// ::color::place::green<category_name>()

#include "../../generic/place/green.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name >
        struct green< ::color::category::rgb< tag_name > >
         {
          public:
           typedef ::color::category::rgb< tag_name > category_type;
           typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

           static /*constexpr*/ index_instance_type position()
            {
             return 1;
            }
         };

      }
    }
  }

#endif

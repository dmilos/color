#ifndef color_hwb_place_black
#define color_hwb_place_black

// ::color::place::black<category_name>()

#include "../../generic/place/black.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name >
        struct black< ::color::category::hwb< tag_name > >
         {
          public:
           typedef ::color::category::hwb< tag_name > category_type;
           typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

           enum { position_entity =    2 };
           enum { has_entity      = true };

           static /*constexpr*/ index_instance_type position()
            {
             return position_entity;
            }
         };

      }
    }
  }

#endif

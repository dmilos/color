#ifndef color_hwb_place_white
#define color_hwb_place_white

// ::color::place::white<category_name>()

#include "../../generic/place/white.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name >
        struct white< ::color::category::hwb< tag_name > >
         {
          public:
           typedef ::color::category::hwb< tag_name > category_type;
           typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

           enum { position_entity =    1 };
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

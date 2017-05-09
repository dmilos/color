#ifndef color_xyy_place_lightness
#define color_xyy_place_lightness

// ::color::place::lightness<category_name>()

#include "../../generic/place/lightness.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name >
        struct lightness< ::color::category::xyy< tag_name > >
         {
          public:
           typedef ::color::category::xyy< tag_name > category_type;
           typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

           enum { position_enum = 0 };
           enum { has_enum = true };

           static /*constexpr*/ index_instance_type position()
            {
             return position_enum;
            }
         };

      }
    }
  }

#endif

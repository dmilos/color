#ifndef color_hsv_place_value
#define color_hsv_place_value

// ::color::place::value<category_name>()

#include "../../generic/place/value.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name >
        struct value< ::color::category::hsv< tag_name > >
         {
          public:
           typedef ::color::category::hsv< tag_name > category_type;
           typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

           enum { position_enum = 2 };
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

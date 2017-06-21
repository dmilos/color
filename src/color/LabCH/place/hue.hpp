#ifndef color_LabCH_place_hue
#define color_LabCH_place_hue

// ::color::place::hue<category_name>()

#include "../../generic/place/hue.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name >
        struct hue< ::color::category::LabCH< tag_name > >
         {
          public:
           typedef ::color::category::LabCH< tag_name > category_type;
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

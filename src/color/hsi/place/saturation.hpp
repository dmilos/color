#ifndef color_hsi_place_saturation
#define color_hsi_place_saturation

// ::color::place::saturation<category_name>()

#include "../../generic/place/saturation.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name >
        struct saturation< ::color::category::hsi< tag_name > >
         {
          public:
           typedef ::color::category::hsi< tag_name > category_type;
           typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

           enum { position_enum = 1 };
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

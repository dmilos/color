#ifndef color_yiq_place_luminance
#define color_yiq_place_luminance

// ::color::place::luminance<category_name>()

#include "../../generic/place/luminance.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name >
        struct luminance< ::color::category::yiq< tag_name > >
         {
          public:
           typedef ::color::category::yiq< tag_name > category_type;
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

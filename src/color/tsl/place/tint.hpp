#ifndef color_tsl_place_tint
#define color_tsl_place_tint

// ::color::place::tint<category_name>()

#include "../../generic/place/tint.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name >
        struct tint< ::color::category::tsl< tag_name > >
         {
          public:
           typedef ::color::category::tsl< tag_name > category_type;
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

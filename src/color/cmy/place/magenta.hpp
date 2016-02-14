#ifndef color_cmy_place_magenta
#define color_cmy_place_magenta

// ::color::place::magenta<category_name>()

#include "../../generic/place/magenta.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name >
        struct magenta< ::color::category::cmy< tag_name > >
         {
          public:
           typedef ::color::category::cmy< tag_name > category_type;
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

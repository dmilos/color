#ifndef color_gray_place_gray
#define color_gray_place_gray

// ::color::place::gray<category_name>()

#include "../../generic/place/gray.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name >
        struct gray< ::color::category::gray< tag_name > >
         {
          public:
           typedef ::color::category::gray< tag_name > category_type;
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

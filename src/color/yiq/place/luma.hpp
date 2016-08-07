#ifndef color_yiq_place_luma
#define color_yiq_place_luma

// ::color::place::luma<category_name>()

#include "../../generic/place/luma.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name >
        struct luma< ::color::category::yiq< tag_name > >
         {
          public:
           typedef ::color::category::yiq< tag_name > category_type;
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

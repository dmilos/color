#ifndef color_cmy_place_cyan
#define color_cmy_place_cyan

// ::color::place::cyan<category_name>()

#include "../../generic/place/cyan.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name >
        struct cyan< ::color::category::cmy< tag_name > >
         {
          public:
           typedef ::color::category::cmy< tag_name > category_type;
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

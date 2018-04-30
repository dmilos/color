#ifndef color_LuvCH_place_chroma
#define color_LuvCH_place_chroma

// ::color::place::chroma<category_name>()

#include "../../generic/place/chroma.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name >
        struct chroma< ::color::category::LuvCH< tag_name > >
         {
          public:
           typedef ::color::category::LuvCH< tag_name > category_type;
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

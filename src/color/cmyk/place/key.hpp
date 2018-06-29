#ifndef color_cmyk_place_key
#define color_cmyk_place_key
// TODO OBSOLETE. Use balck instead.
// ::color::place::key<category_name>()

#include "../../generic/place/key.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name >
        struct key< ::color::category::cmyk< tag_name > >
         {
          public:
           typedef ::color::category::cmyk< tag_name > category_type;
           typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

           enum { position_enum = 3 };
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

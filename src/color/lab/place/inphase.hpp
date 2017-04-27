#ifndef color_lab_place_inphase
#define color_lab_place_inphase

// ::color::place::inphase<category_name>()

#include "../../generic/place/inphase.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name >
        struct inphase< ::color::category::lab< tag_name > >
         {
          public:
           typedef ::color::category::lab< tag_name > category_type;
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

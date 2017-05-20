#ifndef color_lms_place_lightness
#define color_lms_place_lightness

// ::color::place::lightness<category_name>()

#include "../../generic/place/lightness.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name, ::color::constant::lms::reference_enum reference_number >
        struct lightness< ::color::category::lms< tag_name, reference_number > >
         {
          public:
           typedef ::color::category::lms< tag_name, reference_number > category_type;
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

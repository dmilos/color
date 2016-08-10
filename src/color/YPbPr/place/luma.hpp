#ifndef color_YPbPr_place_luma
#define color_YPbPr_place_luma

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

       template< typename tag_name, ::color::constant::YPbPr::reference_enum reference_number >
        struct luma< ::color::category::YPbPr< tag_name, reference_number > >
         {
          public:
           typedef ::color::category::YPbPr< tag_name, reference_number > category_type;
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

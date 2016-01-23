#ifndef color_rgb_place_alpha
#define color_rgb_place_alpha

// ::color::place::alpha<category_name>()

#include "../../generic/place/alpha.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position, unsigned alpha_position >
        struct alpha< ::color::category::rgba_scramble< value_name, red_position, green_position, blue_position,alpha_position> >
         {
          public:
           typedef ::color::category::rgba_scramble<value_name, red_position, green_position, blue_position,alpha_position> category_type;
           typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

           static /*constexpr*/ index_instance_type position()
            {
             return alpha_position;
            }
         };

      }
    }
  }

#endif
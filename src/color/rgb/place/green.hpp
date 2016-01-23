#ifndef color_rgb_place_green
#define color_rgb_place_green

// ::color::place::green<category_name>()

#include "../../generic/place/green.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position >
        struct green< ::color::category::rgb_scramble< value_name, red_position, green_position, blue_position> >
         {
          public:
           typedef ::color::category::rgb_scramble<value_name, red_position, green_position, blue_position> category_type;
           typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

           static /*constexpr*/ index_instance_type position()
            {
             return green_position;
            }
         };

       template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position, unsigned alpha_position >
        struct green< ::color::category::rgba_scramble< value_name, red_position, green_position, blue_position,alpha_position> >
         {
          public:
           typedef ::color::category::rgba_scramble<value_name, red_position, green_position, blue_position,alpha_position> category_type;
           typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

           static /*constexpr*/ index_instance_type position()
            {
             return green_position;
            }
         };

      }
    }
  }

#endif

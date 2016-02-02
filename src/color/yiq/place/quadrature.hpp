#ifndef color_yiq_place_quadrature
#define color_yiq_place_quadrature

// ::color::place::quadrature<category_name>()

#include "../../generic/place/quadrature.hpp"
#include "../category.hpp"
#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename tag_name >
        struct quadrature< ::color::category::yiq< tag_name > >
         {
          public:
           typedef ::color::category::yiq< tag_name > category_type;
           typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

           enum { position_enum = 2 };
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

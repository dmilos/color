#ifndef color_generic_place_hue
#define color_generic_place_hue

// ::color::place::hue<category_name>()
// ::color::place::_internal::hue<category_name>::position_enum

#include "../trait/index.hpp"


 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename category_name >
        struct hue
         {
          public:
           typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

           enum { position_enum = -9 };
           enum { has_enum = false };

           static /*constexpr*/ index_instance_type position()
            {
             return position_enum;
            }
         };

      }

     template< typename category_name >
      inline
      /*constexpr*/
      typename ::color::trait::index< category_name >::instance_type
      hue()
       {
        return ::color::place::_internal::hue<category_name>::position();
       }

    }
  }

#endif

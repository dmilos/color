#ifndef color_generic_place_gray
#define color_generic_place_gray

// ::color::place::gray<category_name>()
// ::color::place::_internal::gray<category_name>::position_enum

#include "../trait/index.hpp"


 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename category_name >
        struct gray
         {
          public:
           typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

           enum { position_enum = -8 };
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
      gray()
       {
        return ::color::place::_internal::gray<category_name>::position();
       }

    }
  }

#endif

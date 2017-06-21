#ifndef color_generic_place_green
#define color_generic_place_green

// ::color::place::green<category_name>()
// ::color::place::_internal::green<category_name>::position_enum

#include "../trait/index.hpp"


 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename category_name >
        struct green
         {
          public:
           typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

           enum { position_enum = -2 };
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
      green()
       {
        return ::color::place::_internal::green<category_name>::position();
       }

    }
  }

#endif

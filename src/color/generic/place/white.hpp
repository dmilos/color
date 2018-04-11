#ifndef color_generic_place_white
#define color_generic_place_white

// ::color::place::white<category_name>()
// ::color::place::_internal::white<category_name>::position_entity

#include "../trait/index.hpp"


 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename category_name >
        struct white
         {
          public:
           typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

           enum { position_entity = -20 };
           enum { has_entity = false };

           static /*constexpr*/ index_instance_type position()
            {
             return position_entity;
            }
         };

      }

     template< typename category_name >
      inline
      /*constexpr*/
      typename ::color::trait::index< category_name >::instance_type
      white()
       {
        return ::color::place::_internal::white<category_name>::position();
       }

    }
  }

#endif

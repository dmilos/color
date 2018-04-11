#ifndef color_generic_place_black
#define color_generic_place_black

// ::color::place::black<category_name>()
// ::color::place::_internal::black<category_name>::position_entity

#include "../trait/index.hpp"


 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename category_name >
        struct black
         {
          public:
           typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

           enum { position_entity = -19 };
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
      black()
       {
        return ::color::place::_internal::black<category_name>::position();
       }

    }
  }

#endif

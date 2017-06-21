#ifndef color_generic_place_magenta
#define color_generic_place_magenta

// ::color::place::magenta<category_name>()
// ::color::place::_internal::magenta<category_name>::position_enum

#include "../trait/index.hpp"


 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename category_name >
        struct magenta
         {
          public:
           typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

           enum { position_enum = -5 };
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
      magenta()
       {
        return ::color::place::_internal::magenta<category_name>::position();
       }

    }
  }

#endif

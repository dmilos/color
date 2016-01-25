#ifndef color_generic_place_luminance
#define color_generic_place_luminance

// ::color::place::luminance<category_name>()

#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename category_name >
        struct luminance
         {
          public:
           typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

           enum { position_enum = -3 };
           enum { has_enum = false };

           static /*constexpr*/ index_instance_type position()
            {
             return ::color::trait::container< category_name >::size();
            }
         };

      }

     template< typename category_name >
      inline
      /*constexpr*/
      typename ::color::trait::index< category_name >::instance_type
      luminance()
       {
        return ::color::place::_internal::luminance<category_name>::position();
       }

    }
  }

#endif

#ifndef color_generic_place_intensity
#define color_generic_place_intensity

// ::color::place::intensity<category_name>()
// ::color::place::_internal::intensity<category_name>::position_enum

#include "../trait/index.hpp"


 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename category_name >
        struct intensity
         {
          public:
           typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

           enum { position_enum = -11 };
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
      intensity()
       {
        return ::color::place::_internal::intensity<category_name>::position();
       }

    }
  }

#endif

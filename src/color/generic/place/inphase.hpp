#ifndef color_generic_place_inphase
#define color_generic_place_inphase

// ::color::place::inphase<category_name>()
// ::color::place::_internal::inphase<category_name>::position_enum

#include "../trait/index.hpp"


 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename category_name >
        struct inphase
         {
          public:
           typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

           enum { position_enum = -10 };
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
      inphase()
       {
        return ::color::place::_internal::inphase<category_name>::position();
       }

    }
  }

#endif

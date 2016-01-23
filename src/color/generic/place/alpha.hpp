#ifndef color_generic_place_alpha
#define color_generic_place_alpha

// ::color::place::alpha<category_name>()

#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename category_name >
        struct alpha
         {
          public:
           typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

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
      alpha()
       {
        return ::color::place::_internal::blue<category_name>::position();
       }

    }
  }

#endif

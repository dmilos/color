#ifndef color_generic_place_luma
#define color_generic_place_luma

// ::color::place::luma<category_name>()

#include "../trait/index.hpp"

 namespace color
  {
   namespace place
    {
     namespace _internal
      {

       template< typename category_name >
        struct luma
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
      luma()
       {
        return ::color::place::_internal::luma<category_name>::position();
       }

    }
  }

#endif

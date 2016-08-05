#ifndef color_contant_YCgCo
#define color_contant_YCgCo

// ::color::constant::YCgCo< typename ::color::akin::YCgCo< category_name >::akin_type >::Wr()

#include "./category.hpp"
#include "../generic/trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    template< typename category_name >
     struct YCgCo
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef  ::color::constant::YCgCo<category_type> this_type;


      };

   }
 }

#endif

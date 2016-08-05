#ifndef color_contant_YPbPr
#define color_contant_YPbPr

// ::color::constant::YPbPr< typename ::color::akin::YPbPr< category_name >::akin_type >::Wr()

#include "./category.hpp"
#include "../generic/trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    template< typename category_name >
     struct YPbPr
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef  ::color::constant::YPbPr<category_type> this_type;

      };

   }
 }

#endif

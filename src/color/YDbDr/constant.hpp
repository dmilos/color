#ifndef color_contant_YDbDr
#define color_contant_YDbDr

// ::color::constant::YDbDr< typename ::color::akin::YDbDr< category_name >::akin_type >::Wr()

#include "./category.hpp"
#include "../generic/trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    template< typename category_name >
     struct YDbDr
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef  ::color::constant::YDbDr<category_type> this_type;


      };

   }
 }

#endif

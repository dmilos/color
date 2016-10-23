#ifndef color_contant_xyz
#define color_contant_xyz

// ::color::constant::xyz< typename ::color::akin::xyz< category_name >::akin_type >::()
// ::color::constant::xyz< category_name >::q_max()


#include "./category.hpp"
#include "../generic/trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    template< typename category_name>
     struct xyz
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef ::color::constant::xyz<category_type> this_type;

      };

   }
 }

#endif

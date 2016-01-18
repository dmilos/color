#ifndef color_contant_generic
#define color_contant_generic

// ::color::constant::generic< typename ::color::akin::generic< category_name >::akin_type > >::()

#include "./category.hpp"
#include "./trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    template< typename category_name>
     struct generic
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef  ::color::constant::yuv<category_type> this_type;

          static /* constexpr*/ scalar_type const zero()  { return  = 0; }
          static /* constexpr*/ scalar_type const one()  { return 1; }
          static /* constexpr*/ scalar_type const two()  { return 2; }
      };

   }
 }

#endif

#ifndef color_contant_gray
#define color_contant_gray

// ::color::constant::gray< typename ::color::akin::gray< category_name >::akin_type > >::Rc()

#include "./category.hpp"
#include "../generic/trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    template< typename category_name>
     struct gray
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef ::color::constant::gray<category_type> this_type;

         static /* constexpr*/ scalar_type const Rc()  { return  0.2126729; }
         static /* constexpr*/ scalar_type const Gc()  { return  0.7151522; }
         static /* constexpr*/ scalar_type const Bc()  { return  0.0721750; }
     };

   }
 }

#endif

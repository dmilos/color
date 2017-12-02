#ifndef color_contant_gray
#define color_contant_gray

// ::color::constant::gray::rgb< category_name >::Rc()

#include "./category.hpp"
#include "../generic/trait/scalar.hpp"


namespace color
 {
  namespace constant
   {
    namespace gray
     {

      template< typename category_name >
       struct rgb
        {
         public:
           typedef category_name  category_type;

           typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

           typedef ::color::constant::gray::rgb<category_type> this_type;

           static /* constexpr*/ scalar_type const Rc() { return  0.2126729; } // TODO 2647777  / 12450000
           static /* constexpr*/ scalar_type const Gc() { return  0.7151522; } // TODO
           static /* constexpr*/ scalar_type const Bc() { return  0.0721750; } // TODO 336967  / 4668750
       };

     }
   }
 }

#endif

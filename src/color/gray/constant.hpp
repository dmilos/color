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

           static /* constexpr*/ scalar_type const Rc() { return  scalar_type(  2647777 ) / scalar_type( 12450000 ); } //   ( 2^4 * 3    * 5^5 * 83 )
           static /* constexpr*/ scalar_type const Gc() { return  scalar_type( 53421866 ) / scalar_type( 74700000 ); } //   ( 2^5 * 3^2  * 5^5 * 83 )
           static /* constexpr*/ scalar_type const Bc() { return  scalar_type(   336967 ) / scalar_type(  4668750 ); } //   ( 2   * 3^2  * 5^5 * 83 )
       };

     }
   }
 }

#endif

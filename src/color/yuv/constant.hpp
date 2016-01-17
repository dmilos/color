#ifndef color_contant_yuv
#define color_contant_yuv

// ::color::constant::yuv< typename ::color::akin::yuv< category_name >::akin_type >::Wr()

#include "./category.hpp"
#include "./trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    template< typename category_name>
     struct yuv
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef  color::constant::yuv<category_type> this_type;

         static /* constexpr*/ scalar_type const half(){ return  0.5; }
         static /* constexpr*/ scalar_type const one() { return  1; }
         static /* constexpr*/ scalar_type const Wr()  { return  0.299; }
         static /* constexpr*/ scalar_type const Wb()  { return  0.114; }
         static /* constexpr*/ scalar_type const Wg()  { return  this_type::one() - this_type::Wr()-this_type::Wb(); }
         static /* constexpr*/ scalar_type const Umax(){ return  0.436; }
         static /* constexpr*/ scalar_type const Vmax(){ return  0.615; }
      };

   }
 }

#endif

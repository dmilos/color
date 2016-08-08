#ifndef color_contant_YCbCr
#define color_contant_YCbCr

// ::color::constant::YCbCr< typename ::color::akin::YCbCr< category_name >::akin_type >::Wr()

#include "./category.hpp"
#include "../generic/trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    template< typename category_name >
     struct YCbCr
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef  ::color::constant::YCbCr<category_type> this_type;

         static /* constexpr*/ scalar_type const half(){ return  0.5; }
         static /* constexpr*/ scalar_type const one() { return  1; }
         static /* constexpr*/ scalar_type const two() { return  2; }
         static /* constexpr*/ scalar_type const CRed()   { return  0.2627; }
         static /* constexpr*/ scalar_type const CGreen() { return  0.6780; }
         static /* constexpr*/ scalar_type const CBlue()  { return   0.0593; }

         static /* constexpr*/ scalar_type const Kb()     { return  2*(1-this_type::CBlue()); }
         static /* constexpr*/ scalar_type const Kb_inv() { return  1/this_type::Kb(); }
         static /* constexpr*/ scalar_type const Kr() { return  2*(1-this_type::CRed()); }
         static /* constexpr*/ scalar_type const Kr_inv() { return  1/this_type::Kr(); }

         static /* constexpr*/ scalar_type const alpha() { return  1.09929682680944; }
         static /* constexpr*/ scalar_type const beta() { return  0.018053968510807; }

         static /* constexpr*/ scalar_type const PB() { return  this_type::alpha() * ( 1 - pow( this_type::CBlue(),  0.45 ) ); }
         static /* constexpr*/ scalar_type const NB() { return  this_type::alpha() * ( 1 - pow( 1- this_type::CBlue(),  0.45 ) ) -1; }

         static /* constexpr*/ scalar_type const PR() { return  this_type::alpha() * ( 1 - pow( this_type::CRed(),  0.45 ) ); }
         static /* constexpr*/ scalar_type const NR() { return  this_type::alpha() * ( 1 - pow( 1- this_type::CRed(),  0.45 ) ) - 1; }

         static /* constexpr*/ scalar_type const Cb_min()  { return -0.5; }
         static /* constexpr*/ scalar_type const Cb_max()  { return  0.5; }
         static /* constexpr*/ scalar_type const Cb_range(){ return  1.0; }

         static /* constexpr*/ scalar_type const Cr_max()  { return -0.5; }
         static /* constexpr*/ scalar_type const Cr_min()  { return  0.5; }
         static /* constexpr*/ scalar_type const Cr_range(){ return  1.0; }

         // to RGB
         static /* constexpr*/ scalar_type const a11(){ return this_type::CRed();   }
         static /* constexpr*/ scalar_type const a12(){ return this_type::CGreen(); }
         static /* constexpr*/ scalar_type const a13(){ return this_type::CBlue();  }
         static /* constexpr*/ scalar_type const a21(){ return - this_type::CRed()/( 1- this_type::CBlue() ) / 2; }
         static /* constexpr*/ scalar_type const a22(){ return - this_type::CGreen()/( 1- this_type::CBlue() ) / 2; }
         static /* constexpr*/ scalar_type const a23(){ return 0.5; }
         static /* constexpr*/ scalar_type const a31(){ return 0.5; }
         static /* constexpr*/ scalar_type const a32(){ return - this_type::CGreen()/( 1- this_type::CRed() ) / 2; }
         static /* constexpr*/ scalar_type const a33(){ return - this_type::CBlue()/( 1- this_type::CRed() ) / 2; }

         // from RGB
         static /* constexpr*/ scalar_type const b11(){ return 1; }
         static /* constexpr*/ scalar_type const b12(){ return 0; }
         static /* constexpr*/ scalar_type const b13(){ return 2*( 1- this_type::CRed() ); }
         static /* constexpr*/ scalar_type const b21(){ return 1; }
         static /* constexpr*/ scalar_type const b22(){ return 2 * this_type::CBlue()*( this_type::CBlue() - 1 ) / this_type::CGreen(); }
         static /* constexpr*/ scalar_type const b23(){ return 2 * this_type::CRed() *( this_type::CRed()  - 1 ) / this_type::CGreen(); }
         static /* constexpr*/ scalar_type const b31(){ return 1; }
         static /* constexpr*/ scalar_type const b32(){ return 2*( 1- this_type::CBlue() ); }
         static /* constexpr*/ scalar_type const b33(){ return 0; }


         static scalar_type Cb_diverse  ( scalar_type const& normal ){ return this_type::Cb_range() * normal + this_type::Cb_min(); }
         static scalar_type Cb_normalize( scalar_type const& divert ){ return ( divert - this_type::Cb_min() ) /this_type::Cb_range(); }

         static scalar_type Cr_diverse  ( scalar_type const& normal ){ return this_type::Cr_range() * normal + this_type::Cb_min(); }
         static scalar_type Cr_normalize( scalar_type const& divert ){ return ( divert - this_type::Cb_min() ) /this_type::Cr_range(); }
      };

   }
 }

#endif

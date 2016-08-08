#ifndef color_contant_YPbPr
#define color_contant_YPbPr

// ::color::constant::YPbPr< typename ::color::akin::YPbPr< category_name >::akin_type >::Wr()

#include "./category.hpp"
#include "../generic/trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    /*
    enum YPbPr_reference_enum
     {
      YPbPr_reference_ITU_R_BT_2020_entity ( 0.2627, (1-r-b), 0.0593 )
      YPbPr_reference_ITU_R_BT_709_entity  ( 0.2126, (1-r-b), 0.0722 )( 0.2126729, (1-r-b) , 0.0721750 )
      YPbPr_reference_ITU_R_BT_601_entity  ( 0.299,  (1-r-b), 0.114  )
     }
    */

    template< typename category_name/*, YPbPr_reference_enum reference_entity */ >
     struct YPbPr
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef  ::color::constant::YPbPr<category_type> this_type;

         static /* constexpr*/ scalar_type const CRed()   { return  0.2126729; }
         static /* constexpr*/ scalar_type const CGreen() { return  0.7151522; }
         static /* constexpr*/ scalar_type const CBlue()  { return  0.0721750; }

         static /* constexpr*/ scalar_type const Pb_min()  { return  -0.5; }
         static /* constexpr*/ scalar_type const Pb_max()  { return   0.5; }
         static /* constexpr*/ scalar_type const Pb_range(){ return   1.0; }

         static /* constexpr*/ scalar_type const Pr_min()  { return -0.5; }
         static /* constexpr*/ scalar_type const Pr_max()  { return  0.5; }
         static /* constexpr*/ scalar_type const Pr_range(){ return  1.0; }

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

         static scalar_type Pb_diverse  ( scalar_type const& normal ){ return this_type::Pb_range() * normal + this_type::Pb_min(); }
         static scalar_type Pb_normalize( scalar_type const& divert ){ return ( divert - this_type::Pb_min() ) / this_type::Pb_range(); }

         static scalar_type Pr_diverse  ( scalar_type const& normal ){ return this_type::Pr_range() * normal + this_type::Pr_min(); }
         static scalar_type Pr_normalize( scalar_type const& divert ){ return ( divert - this_type::Pr_min() ) / this_type::Pr_range(); }

      };

   }
 }

#endif

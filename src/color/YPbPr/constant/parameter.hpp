#ifndef color_contant_YPbPr_parameter
#define color_contant_YPbPr_parameter

// ::color::constant::YPbPr::parameter< category_name, reference_number >::Wr()

#include "./reference.hpp"
#include "../../generic/trait/scalar.hpp"
#include "../category.hpp"



namespace color
 {
  namespace constant
   {
    namespace YPbPr
     {

      namespace _internal
       {
        template< typename scalar_name, ::color::constant::YPbPr::reference_enum reference_number >
         struct base
          {
           typedef scalar_name scalar_type;
           static /* constexpr*/ scalar_type const CRed()   { return  0.0; }
           static /* constexpr*/ scalar_type const CGreen() { return  0.0; }
           static /* constexpr*/ scalar_type const CBlue()  { return  0.0; }

          };

        template< typename scalar_name >
         struct base< scalar_name, ::color::constant::YPbPr::BT_601_entity >
          {
           typedef scalar_name scalar_type;
           typedef ::color::constant::YPbPr::_internal::base< scalar_name, ::color::constant::YPbPr::BT_601_entity > this_type, base_type;

           static /* constexpr*/ scalar_type const CRed()   { return  0.298839 ; } // TODO 337775559/1130000000
           static /* constexpr*/ scalar_type const CGreen() { return  1 - base_type::CRed() - base_type::CBlue(); }
           static /* constexpr*/ scalar_type const CBlue()  { return  0.114350 ; } // TODO  28299149/247187500
          };

        template< typename scalar_name >
         struct base< scalar_name, ::color::constant::YPbPr::BT_709_entity >
          {
           typedef scalar_name scalar_type;
           typedef ::color::constant::YPbPr::_internal::base< scalar_name, ::color::constant::YPbPr::BT_709_entity > this_type, base_type;

           static /* constexpr*/ scalar_type const CRed()   { return  0.2126729; } // TODO 2647777  / 12450000
           static /* constexpr*/ scalar_type const CGreen() { return  1 - base_type::CRed() - base_type::CBlue(); }
           static /* constexpr*/ scalar_type const CBlue()  { return  0.0721750; } // TODO 336967  / 4668750
          };

        template< typename scalar_name >
         struct base< scalar_name, ::color::constant::YPbPr::BT_2020_entity >
          {
           typedef scalar_name scalar_type;
           typedef ::color::constant::YPbPr::_internal::base< scalar_name, ::color::constant::YPbPr::BT_2020_entity > this_type, base_type;

           static /* constexpr*/ scalar_type const CRed()   { return  0.2627; } // TODO 278309653657/1059332500000
           static /* constexpr*/ scalar_type const CGreen() { return  1 - base_type::CRed() - base_type::CBlue(); }
           static /* constexpr*/ scalar_type const CBlue()  { return  0.0593; } // TODO 7850846519/132416562500
          };
       }

    template< typename tag_name, ::color::constant::YPbPr::reference_enum reference_number  >
     struct parameter
     : public ::color::constant::YPbPr::_internal::base< typename ::color::trait::scalar< ::color::category::YPbPr<tag_name,reference_number> >::instance_type, reference_number >
      {
       public:
         typedef ::color::category::YPbPr<tag_name,reference_number >  category_type;

         typedef typename ::color::trait::scalar< category_type >::instance_type scalar_type;

         typedef  ::color::constant::YPbPr::parameter<category_type,reference_number> this_type;

         static /* constexpr*/ scalar_type const Pb_min()  { return  -0.5; }
         static /* constexpr*/ scalar_type const Pb_max()  { return   0.5; }
         static /* constexpr*/ scalar_type const Pb_range(){ return   1.0; }

         static /* constexpr*/ scalar_type const Pr_min()  { return -0.5; }
         static /* constexpr*/ scalar_type const Pr_max()  { return  0.5; }
         static /* constexpr*/ scalar_type const Pr_range(){ return  1.0; }

         // to RGB
         static /* constexpr*/ scalar_type const a11(){ return 1; }
         static /* constexpr*/ scalar_type const a12(){ return 0; }
         static /* constexpr*/ scalar_type const a13(){ return 2*( 1- this_type::CRed() ); }
         static /* constexpr*/ scalar_type const a21(){ return 1; }
         static /* constexpr*/ scalar_type const a22(){ return 2 * this_type::CBlue()*( this_type::CBlue() - 1 ) / this_type::CGreen(); }
         static /* constexpr*/ scalar_type const a23(){ return 2 * this_type::CRed() *( this_type::CRed()  - 1 ) / this_type::CGreen(); }
         static /* constexpr*/ scalar_type const a31(){ return 1; }
         static /* constexpr*/ scalar_type const a32(){ return 2*( 1- this_type::CBlue() ); }
         static /* constexpr*/ scalar_type const a33(){ return 0; }

         // from RGB
         static /* constexpr*/ scalar_type const b11(){ return this_type::CRed();   }
         static /* constexpr*/ scalar_type const b12(){ return this_type::CGreen(); }
         static /* constexpr*/ scalar_type const b13(){ return this_type::CBlue();  }
         static /* constexpr*/ scalar_type const b21(){ return - this_type::CRed()/( 1- this_type::CBlue() ) / 2; }
         static /* constexpr*/ scalar_type const b22(){ return - this_type::CGreen()/( 1- this_type::CBlue() ) / 2; }
         static /* constexpr*/ scalar_type const b23(){ return 0.5; }
         static /* constexpr*/ scalar_type const b31(){ return 0.5; }
         static /* constexpr*/ scalar_type const b32(){ return - this_type::CGreen()/( 1- this_type::CRed() ) / 2; }
         static /* constexpr*/ scalar_type const b33(){ return - this_type::CBlue()/( 1- this_type::CRed() ) / 2; }

         static scalar_type Pb_normalize( scalar_type const& divert ){ return ( divert - this_type::Pb_min() ) /this_type::Pb_range(); }
         static scalar_type Pb_diverse  ( scalar_type const& normal ){ return this_type::Pb_range() * normal + this_type::Pb_min(); }

         static scalar_type Pr_diverse  ( scalar_type const& normal ){ return this_type::Pr_range() * normal + this_type::Pr_min(); }
         static scalar_type Pr_normalize( scalar_type const& divert ){ return ( divert - this_type::Pr_min() ) /this_type::Pr_range(); }

      };

    }
   }
 }

#endif

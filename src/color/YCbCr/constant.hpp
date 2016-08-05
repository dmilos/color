#ifndef color_contant_YCbCr
#define color_contant_YCbCr

// ::color::constant::YCbCr< typename ::color::akin::YCbCr< category_name >::akin_type >::Wr()

#include "./category.hpp"
#include "../generic/trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    template< typename category_name/*, enum reference_emum */ >
     struct YCbCr
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef  ::color::constant::YCbCr<category_type> this_type;

         static /* constexpr*/ scalar_type const half(){ return  0.5; }
         static /* constexpr*/ scalar_type const one() { return  1; }
         static /* constexpr*/ scalar_type const two() { return  2; }
         static /* constexpr*/ scalar_type const Kry() { return  0.299; }
         static /* constexpr*/ scalar_type const Kby() { return  0.114; }
         static /* constexpr*/ scalar_type const Kgy() { return  this_type::one() - this_type::Kry()-this_type::Kby(); }

         static /* constexpr*/ scalar_type const Cb_max(){ return 1-this_type::Kby() ; }
         static /* constexpr*/ scalar_type const Cr_max(){ return 1-this_type::Kby() ; }

         static /* constexpr*/ scalar_type const Cb_min(){ return -(1-this_type::Kby()); }
         static /* constexpr*/ scalar_type const Cr_min(){ return -(1-this_type::Kby()); }

         static /* constexpr*/ scalar_type const Cb_range(){ return this_type::Cb_max() - this_type::Cb_min(); }
         static /* constexpr*/ scalar_type const Cr_range(){ return this_type::Cr_max() - this_type::Cr_min(); }

         static scalar_type Cb_diverse  ( scalar_type const& normal ){ return this_type::Cb_range() * normal + this_type::Cb_min(); }
         static scalar_type Cb_normalize( scalar_type const& divert ){ return ( divert - this_type::Cb_min() ) /this_type::Cb_range(); }

         static scalar_type Cr_diverse  ( scalar_type const& normal ){ return this_type::Cr_range() * normal + this_type::Cb_min(); }
         static scalar_type Cr_normalize( scalar_type const& divert ){ return ( divert - this_type::Cb_min() ) /this_type::Cr_range(); }
      };

   }
 }

#endif

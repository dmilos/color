#ifndef color_contant_YPbPr
#define color_contant_YPbPr

// ::color::constant::YPbPr< typename ::color::akin::YPbPr< category_name >::akin_type >::Wr()

#include "./category.hpp"
#include "../generic/trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    template< typename category_name >
     struct YPbPr
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef  ::color::constant::YPbPr<category_type> this_type;

         static /* constexpr*/ scalar_type const half(){ return  0.5; }
         static /* constexpr*/ scalar_type const one() { return  1; }
         static /* constexpr*/ scalar_type const Wr()  { return  0.298839; }
         static /* constexpr*/ scalar_type const Wb()  { return  0.114350; }
         static /* constexpr*/ scalar_type const Wg()  { return  this_type::one() - this_type::Wr()-this_type::Wb(); }
         static /* constexpr*/ scalar_type const Umax(){ return  0.436; }
         static /* constexpr*/ scalar_type const Vmax(){ return  0.615; }

         static /* constexpr*/ scalar_type const u_min()  { return  -this_type::Umax(); }
         static /* constexpr*/ scalar_type const u_max()  { return   this_type::Umax(); }
         static /* constexpr*/ scalar_type const u_range(){ return 2*this_type::Umax(); }

         static /* constexpr*/ scalar_type const v_min()  { return  -this_type::Vmax(); }
         static /* constexpr*/ scalar_type const v_max()  { return   this_type::Vmax(); }
         static /* constexpr*/ scalar_type const v_range(){ return 2*this_type::Vmax(); }

         static scalar_type u_deverse  ( scalar_type const& normal ){ return this_type::u_range() * normal + this_type::u_min(); }
         static scalar_type u_normalize( scalar_type const& divert ){ return ( divert + this_type::u_min() ) /this_type::u_range(); }

         static scalar_type v_deverse  ( scalar_type const& normal ){ return this_type::v_range() * normal + this_type::v_min(); }
         static scalar_type v_normalize( scalar_type const& divert ){ return ( divert + this_type::v_min() ) /this_type::v_range(); }
      };

   }
 }

#endif

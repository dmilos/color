#ifndef color_contant_YDbDr
#define color_contant_YDbDr

// ::color::constant::YDbDr< typename ::color::akin::YDbDr< category_name >::akin_type >::Wr()

#include "./category.hpp"
#include "../generic/trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    template< typename category_name >
     struct YDbDr
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef  ::color::constant::YDbDr<category_type> this_type;

         static /* constexpr*/ scalar_type const one()  { return  1; }

         static /* constexpr*/ scalar_type const Wr()  { return  0.298839; }  // TODO 337775559/1130000000
         static /* constexpr*/ scalar_type const Wb()  { return  0.114350; }  // TODO  28299149/247187500
         static /* constexpr*/ scalar_type const Wg()  { return  this_type::one() - this_type::Wr()-this_type::Wb(); }
         static /* constexpr*/ scalar_type const Umax(){ return  0.436; }
         static /* constexpr*/ scalar_type const Vmax(){ return  0.615; }

         static /* constexpr*/ scalar_type const DB_scale()  { return  +3.059; }
         static /* constexpr*/ scalar_type const DR_scale()  { return  -2.169; }

         static /* constexpr*/ scalar_type const DB_min()  { return - this_type::Umax() * this_type::DR_scale(); }
         static /* constexpr*/ scalar_type const DB_max()  { return   this_type::Umax() * this_type::DR_scale(); }
         static /* constexpr*/ scalar_type const DB_range(){ return this_type::DB_max() - this_type::DB_min(); }

         static /* constexpr*/ scalar_type const DR_min()  { return   this_type::Umax() * this_type::DR_scale(); }
         static /* constexpr*/ scalar_type const DR_max()  { return - this_type::Umax() * this_type::DR_scale(); }
         static /* constexpr*/ scalar_type const DR_range(){ return this_type::DR_max() - this_type::DR_min(); }

         static scalar_type DB_diverse  ( scalar_type const& normal ){ return this_type::DB_range() * normal + this_type::DB_min(); }
         static scalar_type DB_normalize( scalar_type const& divert ){ return ( divert - this_type::DB_min() ) /this_type::DB_range(); }

         static scalar_type DR_diverse  ( scalar_type const& normal ){ return this_type::DR_range() * normal + this_type::DR_min(); }
         static scalar_type DR_normalize( scalar_type const& divert ){ return ( divert - this_type::DR_min() ) /this_type::DR_range(); }
      };

   }
 }

#endif

#ifndef color_contant_YCgCo
#define color_contant_YCgCo

// ::color::constant::YCgCo< typename ::color::akin::YCgCo< category_name >::akin_type >::Wr()

#include "./category.hpp"
#include "../generic/trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    template< typename category_name >
     struct YCgCo
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef  ::color::constant::YCgCo<category_type> this_type;

         static /* constexpr*/ scalar_type const half(){ return  0.5; }
         static /* constexpr*/ scalar_type const one() { return  1; }

         static /* constexpr*/ scalar_type const Cg_min()  { return  -0.5; }
         static /* constexpr*/ scalar_type const Cg_max()  { return   0.5; }
         static /* constexpr*/ scalar_type const Cg_range(){ return   1; }

         static /* constexpr*/ scalar_type const Co_min()  { return  -0.5; }
         static /* constexpr*/ scalar_type const Co_max()  { return   0.5; }
         static /* constexpr*/ scalar_type const Co_range(){ return   1; }

         static scalar_type Cg_diverse  ( scalar_type const& normal ){ return this_type::Cg_range() * normal + this_type::Cg_min(); }
         static scalar_type Cg_normalize( scalar_type const& divert ){ return ( divert - this_type::Cg_min() ) /this_type::Cg_range(); }

         static scalar_type Co_diverse  ( scalar_type const& normal ){ return this_type::Co_range() * normal + this_type::Co_min(); }
         static scalar_type Co_normalize( scalar_type const& divert ){ return ( divert - this_type::Co_min() ) /this_type::Co_range(); }

      };

   }
 }

#endif

#ifndef color_contant_hsi
#define color_contant_hsi

// ::color::constant::hsi< category_name >


#include "./category.hpp"
#include "../generic/trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    template< typename category_name>
     struct hsi
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef ::color::constant::hsi<category_type> this_type;

         static /* constexpr*/ scalar_type const two(){ return  2; }
         static /* constexpr*/ scalar_type const third(){ return  scalar_type(1) / scalar_type(3); }
         static /* constexpr*/ scalar_type const pi(){ return  scalar_type( 3.141592653589793238462643383279502884197169399375105820974944592307816406286 ); }
         static /* constexpr*/ scalar_type const two_pi(){ return  2 * this_type::pi(); }
         static /* constexpr*/ scalar_type const deg60(){ return  this_type::pi() / scalar_type(3); }
         static /* constexpr*/ scalar_type const deg120(){ return  scalar_type(2) * this_type::pi() / scalar_type(3); }
         static /* constexpr*/ scalar_type const deg240(){ return  scalar_type(4) * this_type::pi() / scalar_type(3); }

         //static scalar_type h_diverse  ( scalar_type const& normal ){ return this_type::i_range() * normal + this_type::i_min(); }
         //static scalar_type h_normalize( scalar_type const& divert ){ return ( divert - this_type::i_min() ) /this_type::i_range(); }

      };

   }
 }

#endif

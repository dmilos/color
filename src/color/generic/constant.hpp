#ifndef color_contant_generic
#define color_contant_generic

// ::color::constant::generic<  category_name >

// ::color::constant::hue::formula_enum, // ::color::constant::hue::hexagon_entity,
// ::color::constant::hue::_internal::algorithm< ::color::constant::hue::formula_enum >

// ::color::constant::gray::formula_enum, // ::color::constant::gray::native_entity,
// ::color::constant::gray::_internal::algorithm< ::color::constant::gray::formula_enum >


#include "./category.hpp"
#include "./trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    template< typename category_name >
     struct generic
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef ::color::constant::generic<category_type> this_type;


         static /* constexpr*/ scalar_type const zero()  { return scalar_type( 0   ); }
         static /* constexpr*/ scalar_type const sixth(){ return  scalar_type(1) / scalar_type(6); }
         static /* constexpr*/ scalar_type const third(){ return  scalar_type(1) / scalar_type(3); }
         static /* constexpr*/ scalar_type const half()  { return scalar_type( 0.5 ); }
         static /* constexpr*/ scalar_type const inv_sqrt_3(){ return  scalar_type(1) / sqrt( scalar_type(3) ); }
         static /* constexpr*/ scalar_type const two_third(){ return  scalar_type(2) / scalar_type(3); }
         static /* constexpr*/ scalar_type const one()   { return scalar_type( 1 ); }
         static /* constexpr*/ scalar_type const two()   { return scalar_type( 2 ); }
         static /* constexpr*/ scalar_type const sqrt_3()   { return sqrt( scalar_type(3) ); }
         static /* constexpr*/ scalar_type const pi( )      { return scalar_type( 3.141592653589793238462643383279502884197169399375105820974944592307816406286 ); }
         static /* constexpr*/ scalar_type const pi_half( ) { return this_type::pi() / scalar_type(2) ; }
         static /* constexpr*/ scalar_type const two_pi()   { return scalar_type(2) * this_type::pi(); }
         static /* constexpr*/ scalar_type const deg60(){ return  this_type::pi() / scalar_type(3); }
         static /* constexpr*/ scalar_type const deg90(){ return  this_type::pi() / scalar_type(2); }
         static /* constexpr*/ scalar_type const deg120(){ return  scalar_type(2) * this_type::pi() / scalar_type(3); }
         static /* constexpr*/ scalar_type const deg180(){ return  this_type::pi() * scalar_type(2); }
         static /* constexpr*/ scalar_type const deg240(){ return  scalar_type(4) * this_type::pi() / scalar_type(3); }

         static /* constexpr*/ scalar_type const deg2rad(){ return  this_type::pi()/scalar_type(180); }
         static /* constexpr*/ scalar_type const rad2deg(){ return  scalar_type(180)/this_type::pi(); }

      };

   }
 }

#endif

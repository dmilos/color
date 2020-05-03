#ifndef color_contant_luv
#define color_contant_luv

// ::color::_internal::constant::luv< scalar_type >


#include "../xyz/constant/illuminant.hpp"




namespace color
 {
  namespace  _internal
   {
    namespace   constant
     {

      template< typename scalar_name >
       struct luv
        {
         public:
           typedef scalar_name scalar_type;

           typedef ::color::constant::xyz::illuminant::point< scalar_type, ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity  > white_point_type;

           static scalar_type u0(){ return scalar_type(4)* white_point_type::X()/( white_point_type::X() +  scalar_type(15)*white_point_type::Y() + scalar_type(3)*white_point_type::Z() ); }
           static scalar_type v0(){ return scalar_type(9)* white_point_type::Y()/( white_point_type::X() +  scalar_type(15)*white_point_type::Y() + scalar_type(3)*white_point_type::Z() ); }

           typedef  ::color::_internal::constant::luv<scalar_type> this_type;

           static /* constexpr*/ scalar_type const l_min()  { return     0; }
           static /* constexpr*/ scalar_type const l_max()  { return   100; }
           static /* constexpr*/ scalar_type const l_range(){ return   100; }
      
           static /* constexpr*/ scalar_type const u_min()
            {
             static scalar_type l, u, v;
             static bool dummy = xyz2luv( scalar_type(0), scalar_type(100), scalar_type(0), l, u, v );
             return  u;
            }
      
           static /* constexpr*/ scalar_type const u_max()
            {
             static scalar_type l, u, v;
             static bool dummy = xyz2luv( scalar_type(100), scalar_type(5.8771597073058741145), scalar_type(0), l, u, v );
             return   u;
            }
           static /* constexpr*/ scalar_type const u_range()
            {
             return   this_type::u_max() - this_type::u_min();
            }
      
           static /* constexpr*/ scalar_type const v_min()
            {
             static scalar_type l, u, v;
             static bool dummy = xyz2luv( scalar_type(100), scalar_type(12.20694118257431526330947), scalar_type(100), l, u, v );
             return   v;
            }
      
           static /* constexpr*/ scalar_type const v_max()
            {
             static scalar_type l, u, v;
             static bool dummy = xyz2luv( scalar_type(0), scalar_type(100), scalar_type(0), l, u, v );
             return v;
            }
           static /* constexpr*/ scalar_type const v_range()
            {
             return this_type::v_max() - this_type::v_min();
            }
      
           static scalar_type u_diverse  ( scalar_type const& normal ){ return this_type::u_range() * normal + this_type::u_min(); }
           static scalar_type u_normalize( scalar_type const& divert ){ return ( divert - this_type::u_min() ) /this_type::u_range(); }
      
           static scalar_type v_diverse  ( scalar_type const& normal ){ return this_type::v_range() * normal + this_type::v_min(); }
           static scalar_type v_normalize( scalar_type const& divert ){ return ( divert - this_type::v_min() ) /this_type::v_range(); }
      
          static bool xyz2luv
           (
             scalar_type const& x, scalar_type const& y, scalar_type const& z
            ,scalar_type      & l, scalar_type      & u, scalar_type      & v
           )
           {
            scalar_type epsilon = 1e-6;
            scalar_type yr = y / ( white_point_type::Y() * scalar_type( 100 ) );

            if( scalar_type(216)/scalar_type(24389) < yr )
             {
              l = scalar_type(116)*scalar_type(cbrt(yr))-scalar_type(16);
             }
            else
             {
              l = scalar_type(24389)/scalar_type(27)* yr;
             }

            scalar_type up = scalar_type(4) * x/( x + scalar_type(15)*y + scalar_type(3)*z ); if( x < epsilon ) up=0;
            scalar_type vp = scalar_type(9) * y/( x + scalar_type(15)*y + scalar_type(3)*z ); if( y < epsilon ) vp=0;

            u = 13*l*( up - u0() );
            v = 13*l*( vp - v0() );
            return true;
           }
      
        };

     }
   }
 }

#endif

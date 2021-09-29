#ifndef  color_generic_operation_distance_usher_CIEDE2000
#define  color_generic_operation_distance_usher_CIEDE2000

// ::color::operation::_internal::usher<category_name>::process( left, right )



#include "./constant.hpp"
#include "./usher.hpp"


 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_left_name, typename category_right_name >
        struct usher< category_left_name, category_right_name, ::color::constant::distance::CIEDE2000_entity >
         {
          public:
            typedef category_left_name   category_left_type;
            typedef category_right_name  category_right_type;
            typedef ::color::model< category_left_type  >  model_left_type;
            typedef ::color::model< category_right_type >  model_right_type;

            typedef typename ::color::trait::scalar< category_left_type >::instance_type  scalar_type;
            typedef  ::color::constant::generic< category_left_type > constant_type;

            typedef ::color::lab<scalar_type>  lab_type;

            typedef ::color::operation::_internal::usher< category_left_name, category_right_name, ::color::constant::distance::CIEDE2000_entity > this_type;

          private:
            static   scalar_type square( scalar_type const& s ){ return s * s; }

          public:
            static scalar_type process( model_left_type const& left, model_right_type const& right )
             {
              lab_type lab_left(   left );
              lab_type lab_right( right );

              scalar_type const& L_1 = lab_left.template get<0>();
              scalar_type const& a_1 = lab_left.template get<1>();
              scalar_type const& b_1 = lab_left.template get<2>();

              scalar_type const& L_2 = lab_right.template get<0>();
              scalar_type const& a_2 = lab_right.template get<1>();
              scalar_type const& b_2 = lab_right.template get<2>();

              scalar_type L_p_a = ( L_1 + L_2 ) /2;

              scalar_type C_1 = sqrt( this_type::square( a_1 ) + this_type::square( b_1 ) );
              scalar_type C_2 = sqrt( this_type::square( a_2 ) + this_type::square( b_2 ) );

              scalar_type C_a = ( C_1 + C_2 ) /2;

              scalar_type G = ( 1- sqrt( pow(C_a,7)/( pow(C_a,7) + pow(25,7) ) ) ) /2;

              scalar_type a_1_p =  a_1 * (1+G);
              scalar_type a_2_p =  a_2 * (1+G);

              scalar_type C_1_p =  sqrt( this_type::square( a_1_p ) + this_type::square( b_1 ) );
              scalar_type C_2_p =  sqrt( this_type::square( a_2_p ) + this_type::square( b_2 ) );

              scalar_type C_p_a =  ( C_1_p + C_2_p )/2;

              scalar_type h_1_p =  atan2( b_1, a_1_p ); if( h_1_p < 0 ) h_1_p += 2*constant_type::pi();  h_1_p *= constant_type::rad2deg();
              scalar_type h_2_p =  atan2( b_2, a_2_p ); if( h_2_p < 0 ) h_2_p += 2*constant_type::pi();  h_2_p *= constant_type::rad2deg();

              //scalar_type h_1_p =  atan( b_1/ a_1_p ); if( h_1_p < 0 ) h_1_p += constant_type::pi(); h_1_p *= constant_type::rad2deg();
              //scalar_type h_2_p =  atan( b_2/ a_2_p ); if( h_2_p < 0 ) h_2_p += constant_type::pi(); h_2_p *= constant_type::rad2deg();

              scalar_type H_a_p = ( h_1_p +  h_2_p )/2; if( 180 < fabs( h_1_p - h_2_p ) ) H_a_p += 180;

              scalar_type T = + 1
                              - 0.17 * cos(   (   H_a_p - 30 )*constant_type::deg2rad() )
                              + 0.24 * cos(   ( 2*H_a_p -  0 )*constant_type::deg2rad() )
                              + 0.32 * cos(   ( 3*H_a_p +  6 )*constant_type::deg2rad() )
                              - 0.20 * cos(   ( 4*H_a_p - 63 )*constant_type::deg2rad() );

              scalar_type delta_h_p;

              if( 180 < fabs( h_1_p - h_2_p ) )
               {
                if( h_2_p < h_1_p )
                 {
                  delta_h_p = h_2_p - h_1_p + 360;
                 }
                else
                 {
                  delta_h_p = h_2_p - h_1_p - 360;
                 }
               }
              else
               {
                delta_h_p = h_2_p - h_1_p;
               }

              scalar_type delta_L_p = L_2 - L_1;
              scalar_type delta_C_p = C_2_p - C_1_p;

              scalar_type delta_H_p = 2*sqrt( C_1_p* C_2_p ) * sin( (delta_h_p / 2) * constant_type::deg2rad() );

              scalar_type S_L = 1 + ( 0.015* this_type::square( L_p_a - 50 )  )/sqrt( 20 + this_type::square( L_p_a - 50 ) );
              scalar_type S_C = 1 + 0.045 * C_p_a;
              scalar_type S_H = 1 + 0.015 * C_p_a * T;

              scalar_type delta_theta = 30 * exp( - this_type::square( ( H_a_p - 275)/25 ) );

              scalar_type R_C =  2*sqrt( pow(C_p_a,7)/( pow(C_p_a,7) + pow(25,7) ) );

              scalar_type R_T =  - R_C * sin( ( 2 * delta_theta) * constant_type::deg2rad() );

              scalar_type K_L = 1;
              scalar_type K_C = 1;
              scalar_type K_H = 1;

              scalar_type delta_E_1  = delta_L_p/( K_L * S_L );
              scalar_type delta_E_2  = delta_C_p/( K_C * S_C );
              scalar_type delta_E_3  = delta_H_p/( K_H * S_H );
              scalar_type delta_E_4  = R_T * delta_E_2 * delta_E_3;

              scalar_type delta_E_main = sqrt( this_type::square( delta_E_1 ) + this_type::square( delta_E_2 ) + this_type::square( delta_E_3 ) + delta_E_4 );

              return delta_E_main;

              }
         };



      }
    }
  }

#endif

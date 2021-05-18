#ifndef  color_generic_operation_distance_usher_CMC1984
#define  color_generic_operation_distance_usher_CMC1984

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
        struct usher< category_left_name, category_right_name, ::color::constant::distance::CMC1984_entity >
         { // TODO not properly inplemented
          public:
            typedef category_left_name   category_left_type;
            typedef category_right_name  category_right_type;
            typedef ::color::model< category_left_type  >  model_left_type;
            typedef ::color::model< category_right_type >  model_right_type;

            typedef typename ::color::trait::scalar< category_left_type >::instance_type  scalar_type;

            // typedef ::color::gray<scalar_type> gray_type;
            typedef ::color::LabCH<scalar_type>  lch_type;
            typedef ::color::lab<scalar_type>  lab_type;
            typedef  ::color::constant::generic< category_left_type > constant_type;

            static scalar_type process
             (
               model_left_type const& left
              ,model_right_type const& right
              ,scalar_type const& l = scalar_type( 2 )
              ,scalar_type const& c = scalar_type( 1 )
             )
             {
              lab_type lab_left ( left  );
              lab_type lab_right( right );
              lch_type lch_left(  lab_left  );
              lch_type lch_right( lab_right );

              scalar_type const& L_1 = lch_left.template get<0>();
              scalar_type const& c_1 = lch_left.template get<1>();
              scalar_type const& h_1 = lch_left.template get<2>();

              scalar_type const& L_2 = lch_right.template get<0>();
              scalar_type const& c_2 = lch_right.template get<1>();
              scalar_type const& h_2 = lch_right.template get<2>();

              scalar_type delta_H;
              {
               scalar_type const& a_1 = lab_left.template get<1>();
               scalar_type const& b_1 = lab_left.template get<2>();

               scalar_type const& a_2 = lab_right.template get<1>();
               scalar_type const& b_2 = lab_right.template get<2>();

               scalar_type C_1 =  sqrt( a_1 * a_1 + b_1 * b_1 );
               scalar_type C_2 =  sqrt( a_2 * a_2 + b_2 * b_2 );
               scalar_type delta_C =  C_1 - C_2;

               scalar_type delta_a =  a_1 - a_2;
               scalar_type delta_b =  b_1 - b_2;
               delta_H = delta_a*delta_a + delta_b*delta_b - delta_C*delta_C;
               delta_H = sqrt( fabs( delta_H ) );
              }

              scalar_type S_L;
              if( L_1 < 16 )
               {
                S_L = 0.511;
               }
              else
               {
                S_L = (0.040975*L_1)/(1+0.01765*L_1);
               }

              scalar_type S_C = (0.0638*c_1)/(1+0.0131*c_1) + 0.638;

              scalar_type S_H;
              {
               scalar_type F = sqrt( pow( c_1, 4 ) / ( pow( c_1, 4 ) + 1900 ) );

               scalar_type T;
               if( ( 164 <= h_1 ) && ( h_1 < 345 ) )
                {
                 T = 0.56 + fabs( 0.2* cos( ( h_1 + 168 ) * constant_type::deg2rad() ) );
                }
               else
                {
                 T = 0.36 + fabs( 0.4* cos( ( h_1 + 35 ) * constant_type::deg2rad() ) );
                }

               S_H = S_C*( F*T+1-F );
              }

              scalar_type delta_E_1  = ( L_2 - L_1 )/( l * S_L);
              scalar_type delta_E_2  = ( c_2 - c_1 )/( c * S_C);
              scalar_type delta_E_3  = ( delta_H )/( S_H );

              scalar_type delta_E_main = sqrt( delta_E_1*delta_E_1 +  delta_E_2*delta_E_2 + delta_E_3*delta_E_3  );

              return delta_E_main;
             }
         };

      }
    }
  }

#endif

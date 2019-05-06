#ifndef  color_generic_operation_distance
#define color_generic_operation_distance

// ::color::operation::distance( left, right )
// ::color::constant::distance:: delta_gray_entity, hsl_special_entity, euclid_entity

#include "../../gray/gray.hpp"
#include "./delta.hpp"

#include "../constant.hpp"

 namespace color
  {
   namespace constant
    {
     namespace distance
      {

       enum reference_enum
        {
          error_entity
         ,euclid_entity

       //,DeltaC_entity
       //,DeltaH_entity
         ,CIE76_entity
         ,CIE94__base_entity
         ,CIE94_graphics_entity
         ,CIE94_textile_entity
         ,CIEDE2000_entity
         ,CMC1984_entity
         ,delta_gray_entity
         ,hsl_special_entity
       //,hue_entity // Rejected. Distance by only one coordinate
         ,rgb_special_entity
        };

      }
    }

   namespace operation
    {
     namespace _internal
      {

       template
         <
           typename category_left_name
          ,typename category_right_name
          ,enum ::color::constant::distance::reference_enum reference_number = ::color::constant::distance::error_entity
         >
        struct distance
         {
          public:
            typedef category_left_name   category_left_type;
            typedef category_right_name  category_right_type;

            typedef ::color::model< category_left_type  >  model_left_type;
            typedef ::color::model< category_right_type >  model_right_type;

            typedef typename ::color::trait::scalar< category_left_type >::instance_type   scalar_type;

            typedef ::color::operation::_internal::distance< category_left_type, category_right_type, ::color::constant::distance::error_entity > this_type;

          public:
            scalar_type operator()( model_left_type const& left, model_right_type const& right )const
             {
              return this_type::process( left, right );
             }

          public:
            static scalar_type process( model_left_type const& left, model_right_type const& right )
             {
              return -1;
             }
         };


       template< typename category_name >
        struct distance< category_name, category_name, ::color::constant::distance::euclid_entity >
         {
          public:
            typedef category_name  category_type;
            typedef ::color::model<category_type>  model_type;
            typedef typename ::color::trait::container< category_type >              container_trait_type;
            typedef typename ::color::trait::scalar< category_type >::instance_type   scalar_type;
            typedef typename ::color::trait::index< category_type >::instance_type     index_type;

            typedef ::color::operation::_internal::distance< category_name, category_name, ::color::constant::distance::euclid_entity> this_type;

            static   scalar_type square( scalar_type const& s )
             {
              return s * s;
             }

            static scalar_type process( model_type const& left, model_type const& right )
             {
              scalar_type lenght = 0;
              for( index_type index = 0; index < container_trait_type::size(); index ++ )
               {
                if( left.get( index ) < right.get( index ) )
                 {
                  lenght += this_type::square( scalar_type( right.get( index ) - left.get( index ) ) );
                 }
                else
                 {
                  lenght +=  this_type::square( scalar_type( left.get( index ) - right.get( index ) ) );
                 }
               }

              return sqrt( lenght );
             }
         };

       template< typename category_name >
        struct distance< category_name, category_name, ::color::constant::distance::delta_gray_entity >
         {
          public:
            typedef category_name  category_type;
            typedef ::color::model<category_type>  model_type;
            typedef typename ::color::trait::scalar< category_type >::instance_type  scalar_type;
            typedef ::color::gray<scalar_type> gray_type;

            static scalar_type process( model_type const& left, model_type const& right )
             {
              model_type difference;
              return gray_type( ::color::operation::delta( difference, left, right ) ).template get<0>();
             }
         };

       /*
       template< typename category_left_name, typename category_right_name >
        struct distance< category_left_name, category_right_name, ::color::constant::distance::DeltaC_entity >
         {
          public:
            typedef category_left_name   category_left_type;
            typedef category_right_name  category_right_type;
            typedef ::color::model< category_left_type  >  model_left_type;
            typedef ::color::model< category_right_type >  model_right_type;

            typedef typename ::color::trait::scalar< category_left_type >::instance_type  scalar_type;

            typedef ::color::lab<scalar_type>  lab_type;
            typedef typename lab_type::category_type  lab_category_type;

            static   scalar_type square( scalar_type const& s ){ return s * s; }

            static scalar_type process( model_left_type const& left, model_right_type const& right )
             {
              lab_type lab_left(  left  );
              lab_type lab_right( right );

              scalar_type const& a1 = left.template get< 1 >();
              scalar_type const& b2 = left.template get< 2 >();
              scalar_type const& a2 = right.template get< 1 >();
              scalar_type const& b2 = right.template get< 2 >();

              return   sqrt( square( a2 ) + square( b2 ) )
                     - sqrt( square( a1 ) + square( b1 ) );
             }

       template< typename category_left_name, typename category_right_name >
        struct distance< category_left_name, category_right_name, ::color::constant::distance::DeltaH_entity >
         {
          public:
            typedef category_left_name   category_left_type;
            typedef category_right_name  category_right_type;
            typedef ::color::model< category_left_type  >  model_left_type;
            typedef ::color::model< category_right_type >  model_right_type;

            typedef typename ::color::trait::scalar< category_left_type >::instance_type  scalar_type;

            typedef ::color::lab<scalar_type>  lab_type;
            typedef typename lab_type::category_type  lab_category_type;

            static   scalar_type square( scalar_type const& s ){ return s * s; }

            static scalar_type process( model_left_type const& left, model_right_type const& right )
             {
              lab_type lab_left(  left  );
              lab_type lab_right( right );

              scalar_type const& a1 = left.template get< 1 >();
              scalar_type const& b2 = left.template get< 2 >();
              scalar_type const& a2 = right.template get< 1 >();
              scalar_type const& b2 = right.template get< 2 >();

              xDE =   sqrt( square( a2 ) + square( b2 ) )
                    - sqrt( square( a1 ) + square( b1 ) );

              return sqrt(  square( a2 - a1 )
                          + square( b2 - b1 )
                          - square( xDE ) );
             }
         };
         */

       template< typename category_left_name, typename category_right_name >
        struct distance< category_left_name, category_right_name, ::color::constant::distance::CIE76_entity >
         {
          public:
            typedef category_left_name   category_left_type;
            typedef category_right_name  category_right_type;
            typedef ::color::model< category_left_type  >  model_left_type;
            typedef ::color::model< category_right_type >  model_right_type;

            typedef typename ::color::trait::scalar< category_left_type >::instance_type  scalar_type;

            typedef ::color::lab<scalar_type>  lab_type;
            typedef typename lab_type::category_type  lab_category_type;

            static scalar_type process( model_left_type const& left, model_right_type const& right )
             {
              lab_type lab_left(  left  );
              lab_type lab_right( right );

              return::color::operation::_internal::distance<lab_category_type, lab_category_type,::color::constant::distance::euclid_entity>::process( lab_left, lab_right );
             }
         };

       template< typename category_left_name, typename category_right_name >
        struct distance< category_left_name, category_right_name, ::color::constant::distance::CIE94__base_entity >
         {
          public:
            typedef category_left_name   category_left_type;
            typedef category_right_name  category_right_type;
            typedef ::color::model< category_left_type  >  model_left_type;
            typedef ::color::model< category_right_type >  model_right_type;

            typedef typename ::color::trait::scalar< category_left_name >::instance_type  scalar_type;
            typedef ::color::lab<scalar_type>  lab_type;

            typedef ::color::operation::_internal::distance< category_left_name, category_right_name, ::color::constant::distance::CIE94__base_entity > this_type;


            static   scalar_type square( scalar_type const& s ){ return s * s; }

            static scalar_type process( model_left_type const& left, model_right_type const& right, scalar_type const& K_L, scalar_type const& K_1, scalar_type const& K_2 )
             {
              static const scalar_type K_C = 1;
              static const scalar_type K_H = 1;

              lab_type lab_left(   left );
              lab_type lab_right( right );

              scalar_type const& L_1 = lab_left.template get<0>();
              scalar_type const& a_1 = lab_left.template get<1>();
              scalar_type const& b_1 = lab_left.template get<2>();

              scalar_type const& L_2 = lab_right.template get<0>();
              scalar_type const& a_2 = lab_right.template get<1>();
              scalar_type const& b_2 = lab_right.template get<2>();

              scalar_type delta_L =  L_1 - L_2;

              scalar_type C_1 =  sqrt( this_type::square( a_1 ) +  this_type::square( b_1 ) );
              scalar_type C_2 =  sqrt( this_type::square( a_2 ) +  this_type::square( b_2 ) );
              scalar_type delta_C_ab =  C_1 - C_2;

              scalar_type delta_a = a_1 - a_2;
              scalar_type delta_b = b_1 - b_2;

              scalar_type delta_H_ab = sqrt( fabs( this_type::square( delta_a ) + this_type::square( delta_b ) - this_type::square( delta_C_ab ) ) );

              scalar_type S_L  =  1;
              scalar_type S_C  =  1 + K_1 * C_1;
              scalar_type S_H  =  1 + K_2 * C_1;

              scalar_type delta_E_1 = delta_L   /( K_L * S_L );
              scalar_type delta_E_2 = delta_C_ab/( K_C * S_C );
              scalar_type delta_E_3 = delta_H_ab/( K_H * S_H );

              scalar_type delta_E_main = sqrt( this_type::square( delta_E_1 ) +  this_type::square( delta_E_2 ) + this_type::square( delta_E_3 ) );

              return delta_E_main;
             }
         };

       template< typename category_left_name, typename category_right_name >
        struct distance< category_left_name, category_right_name, ::color::constant::distance::CIE94_graphics_entity >
         {
          public:
            typedef category_left_name   category_left_type;
            typedef category_right_name  category_right_type;
            typedef ::color::model< category_left_type  >  model_left_type;
            typedef ::color::model< category_right_type >  model_right_type;

            typedef distance< category_left_type, category_right_type, ::color::constant::distance::CIE94__base_entity > base_type;
            typedef typename base_type::scalar_type  scalar_type;

            static scalar_type process( model_left_type const& left, model_right_type const& right )
             {
              return base_type::process( left, right, 1, 0.045, 0.015 );
             }
         };

       template< typename category_left_name, typename category_right_name >
        struct distance< category_left_name, category_right_name, ::color::constant::distance::CIE94_textile_entity >
         {
          public:
            typedef category_left_name   category_left_type;
            typedef category_right_name  category_right_type;
            typedef ::color::model< category_left_type  >  model_left_type;
            typedef ::color::model< category_right_type >  model_right_type;

            typedef distance< category_left_type, category_right_type, ::color::constant::distance::CIE94__base_entity > base_type;
            typedef typename base_type::scalar_type  scalar_type;

            static scalar_type process( model_left_type const& left, model_right_type const& right )
             {
              return base_type::process( left, right, 2, 0.048, 0.014  );
             }
         };

       template< typename category_left_name, typename category_right_name >
        struct distance< category_left_name, category_right_name, ::color::constant::distance::CIEDE2000_entity >
         {
          public:
            typedef category_left_name   category_left_type;
            typedef category_right_name  category_right_type;
            typedef ::color::model< category_left_type  >  model_left_type;
            typedef ::color::model< category_right_type >  model_right_type;

            typedef typename ::color::trait::scalar< category_left_type >::instance_type  scalar_type;
            typedef  ::color::constant::generic< category_left_type > constant_type;

            typedef ::color::lab<scalar_type>  lab_type;

            typedef ::color::operation::_internal::distance< category_left_name, category_right_name, ::color::constant::distance::CIEDE2000_entity > this_type;

            static   scalar_type square( scalar_type const& s ){ return s * s; }

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
              scalar_type R_T =  - R_C * sin( ( 2 * delta_theta) * constant_type::rad2deg() );

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

       template< typename category_left_name, typename category_right_name >
        struct distance< category_left_name, category_right_name, ::color::constant::distance::CMC1984_entity >
         {
          public:
            typedef category_left_name   category_left_type;
            typedef category_right_name  category_right_type;
            typedef ::color::model< category_left_type  >  model_left_type;
            typedef ::color::model< category_right_type >  model_right_type;

            typedef typename ::color::trait::scalar< category_left_type >::instance_type  scalar_type;

            // typedef ::color::gray<scalar_type> gray_type;
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
              lab_type lab_left(   left );
              lab_type lab_right( right );

              scalar_type const& L_1 = lab_left.template get<0>();
              scalar_type const& a_1 = lab_left.template get<1>();
              scalar_type const& b_1 = lab_left.template get<2>();

              scalar_type const& L_2 = lab_right.template get<0>();
              scalar_type const& a_2 = lab_right.template get<1>();
              scalar_type const& b_2 = lab_right.template get<2>();

              scalar_type delta_H;
              {
               scalar_type C_1 =  sqrt( a_1* a_1 +  b_1* b_1 );
               scalar_type C_2 =  sqrt( a_2 * a_2 + b_2 * b_2 );
               scalar_type delta_C =  C_1 - C_2;

               scalar_type delta_a =  a_1 - a_2;
               scalar_type delta_b =  b_1 - b_2;
               delta_H = delta_a*delta_a + delta_b*delta_b - delta_C*delta_C;
               delta_H = sqrt( fabs( delta_H ) );
              }

              scalar_type S_H;
              {
               scalar_type F = sqrt( pow( a_1, 4 ) / ( pow( a_1, 4 ) + 1900 ) );

               scalar_type T;
               if( ( 164 <= b_1 ) && ( b_1 < 345 ) )
                {
                 T = 0.56 + fabs( 0.2* cos( ( b_1 + 168 ) * constant_type::deg2rad() ) );
                }
               else
                {
                 T = 0.36 + fabs( 0.4* cos( ( b_1 + 35 ) * constant_type::deg2rad() ) );
                }

               S_H = F*T+1-F;
              }

              scalar_type S_C = (0.0638*a_1)/(1+0.0131*a_1) + 0.638;
              scalar_type S_L;
              if( L_1 < 16 )
               {
                S_L = 0.511;
               }
              else
               {
                S_L = (0.040975*L_1)/(1+0.01765*L_1);
               }

              scalar_type delta_E_1  = ( L_1 - L_2 )/( l * S_L);
              scalar_type delta_E_2  = ( a_1 - a_2 )/( c * S_C);
              scalar_type delta_E_3  = ( delta_H )/( S_H );

              scalar_type delta_E_main = sqrt( delta_E_1*delta_E_1 +  delta_E_2*delta_E_2 + delta_E_3*delta_E_3  );

              return delta_E_main;
             }
         };

       template< typename category_name >
        struct distance< category_name, category_name, ::color::constant::distance::hsl_special_entity >
         {
          public:
            typedef category_name  category_type;
            typedef ::color::model<category_type>  model_type;
            typedef typename ::color::trait::scalar< category_type >::instance_type  scalar_type;
            typedef ::color::hsl<scalar_type>  hsl_type;

            static scalar_type process( model_type const& left, model_type const& right )
             {
              hsl_type left_hsl(left);
              hsl_type right_hsl(right);
              scalar_type  angle = left_hsl[0] -  right_hsl[0]; if( angle < 0 ) angle = - angle; if( 180 < angle ) angle = 360 - angle;
              angle /= 360;
              scalar_type  lenght = angle * scalar_type(4)/scalar_type(3);
              lenght *= fabs( left_hsl[1] -  right_hsl[1] )/100;
              lenght *= fabs( left_hsl[2] -  right_hsl[2] )/100;
              return lenght;
             }
         };

       template< typename category_name >
        struct distance< category_name, category_name, ::color::constant::distance::rgb_special_entity >
         {
          public:
            typedef category_name  category_type;
            typedef ::color::model<category_type>  model_type;
            typedef typename ::color::trait::scalar< category_type >::instance_type  scalar_type;
            typedef ::color::rgb<scalar_type>  rgb_type;

            static scalar_type process( model_type const& left, model_type const& right )
             {
              rgb_type left_rgb(left);
              rgb_type right_rgb(right);
              rgb_type difference; ::color::operation::delta( difference, left_rgb, right_rgb );

              scalar_type  d = 1;
               d *= fabs( std::max( left_rgb[0] - std::max( right_rgb[1], right_rgb[2] ), left_rgb[0] - std::min( right_rgb[1], right_rgb[2] ) ) );
               d *= fabs( std::max( left_rgb[1] - std::max( right_rgb[0], right_rgb[2] ), left_rgb[1] - std::min( right_rgb[0], right_rgb[2] ) ) );
               d *= fabs( std::max( left_rgb[2] - std::max( right_rgb[0], right_rgb[1] ), left_rgb[2] - std::min( right_rgb[0], right_rgb[1] ) ) );
              //scalar_type  d = difference[0]*difference[1]*difference[2]; // d * = d;
              return d;
             }
         };

      }

     template
      <
        enum ::color::constant::distance::reference_enum reference_number = ::color::constant::distance::euclid_entity
       ,typename category_name
      >
      typename ::color::trait::scalar< category_name >::instance_type
      distance
       (
         ::color::model< category_name > const&  left
        ,::color::model< category_name > const& right
       )
       {
        return ::color::operation::_internal::distance<category_name, category_name, reference_number>::process( left, right );
       }

     template
      <
       enum ::color::constant::distance::reference_enum reference_number
       ,typename category_left_name
       ,typename category_right_name
      >
      typename ::color::operation::_internal::distance< category_left_name, category_right_name, reference_number >::scalar_type
      distance
       (
         ::color::model<  category_left_name > const&  left
        ,::color::model< category_right_name > const& right
       )
       {
        return ::color::operation::_internal::distance< category_left_name, category_right_name, reference_number >::process( left, right );
       }

     template
      <
       enum ::color::constant::distance::reference_enum reference_number
       ,typename category_left_name
       ,typename category_right_name
      >
      typename ::color::operation::_internal::distance< category_left_name, category_right_name, reference_number >::scalar_type
      distance
       (
         ::color::model<category_left_name> const& left
        ,::color::model<category_right_name> const& right
        , typename ::color::trait::scalar< category_left_name >::instance_type const& l
        , typename ::color::trait::scalar< category_left_name >::instance_type const& c
       )
       {
        return ::color::operation::_internal::distance< category_left_name, category_right_name, reference_number >::process( left, right, l, c );
       }

     template
      <
       enum ::color::constant::distance::reference_enum reference_number
       ,typename category_left_name
       ,typename category_right_name
      >
      typename ::color::operation::_internal::distance< category_left_name, category_right_name, reference_number >::scalar_type
      distance
       (
         ::color::model<category_left_name> const& left
        ,::color::model<category_right_name> const& right
        , typename ::color::trait::scalar< category_left_name >::instance_type const& K_L
        , typename ::color::trait::scalar< category_left_name >::instance_type const& K_1
        , typename ::color::trait::scalar< category_left_name >::instance_type const& K_2
       )
       {
        return ::color::operation::_internal::distance< category_left_name, category_right_name, reference_number >::process( left, right, K_L, K_1, K_2 );
       }

    }
  }

#endif

#ifndef  color_generic_operation_distance_usher_cie94
#define  color_generic_operation_distance_usher_cie94

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
        struct usher< category_left_name, category_right_name, ::color::constant::distance::CIE94__base_entity >
         {
          public:
            typedef category_left_name   category_left_type;
            typedef category_right_name  category_right_type;
            typedef ::color::model< category_left_type  >  model_left_type;
            typedef ::color::model< category_right_type >  model_right_type;

            typedef typename ::color::trait::scalar< category_left_name >::instance_type  scalar_type;
            typedef ::color::lab<scalar_type>  lab_type;

            typedef ::color::operation::_internal::usher< category_left_name, category_right_name, ::color::constant::distance::CIE94__base_entity > this_type;

          private:
            static   scalar_type square( scalar_type const& s ){ return s * s; }

          public:
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
        struct usher< category_left_name, category_right_name, ::color::constant::distance::CIE94_graphics_entity >
         {
          public:
            typedef category_left_name   category_left_type;
            typedef category_right_name  category_right_type;
            typedef ::color::model< category_left_type  >  model_left_type;
            typedef ::color::model< category_right_type >  model_right_type;

            typedef ::color::operation::_internal::usher< category_left_type, category_right_type, ::color::constant::distance::CIE94__base_entity > base_type;
            typedef ::color::operation::_internal::usher< category_left_type, category_right_type, ::color::constant::distance::CIE94_graphics_entity > this_type;

            typedef typename base_type::scalar_type  scalar_type;

            static scalar_type process( model_left_type const& left, model_right_type const& right )
             {
              return base_type::process( left, right, 1, 0.045, 0.015 );
             }
         };

       template< typename category_left_name, typename category_right_name >
        struct usher< category_left_name, category_right_name, ::color::constant::distance::CIE94_textile_entity >
         {
          public:
            typedef category_left_name   category_left_type;
            typedef category_right_name  category_right_type;
            typedef ::color::model< category_left_type  >  model_left_type;
            typedef ::color::model< category_right_type >  model_right_type;

            typedef ::color::operation::_internal::usher< category_left_type, category_right_type, ::color::constant::distance::CIE94__base_entity > base_type;
            typedef typename base_type::scalar_type  scalar_type;
            typedef ::color::operation::_internal::usher< category_left_type, category_right_type, ::color::constant::distance::CIE94_textile_entity > this_type;

            static scalar_type process( model_left_type const& left, model_right_type const& right )
             {
              return base_type::process( left, right, 2, 0.048, 0.014  );
             }
         };

      }
    }
  }

#endif

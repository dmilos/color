#ifndef  color_generic_operation_distance_usher__primary
#define  color_generic_operation_distance_usher__primary

// ::color::operation::distance( left, right )
// ::color::constant::distance:: delta_gray_entity, hsl_euclid_entity, euclid_entity

#include "./constant.hpp"


 namespace color
  {
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
        struct usher
         {
          public:
            typedef category_left_name   category_left_type;
            typedef category_right_name  category_right_type;

            typedef ::color::model< category_left_type  >  model_left_type;
            typedef ::color::model< category_right_type >  model_right_type;

            typedef typename ::color::trait::scalar< category_left_type >::instance_type   scalar_type;

            typedef ::color::operation::_internal::usher< category_left_type, category_right_type, ::color::constant::distance::error_entity > this_type;

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

       /*
       template< typename category_left_name, typename category_right_name >
        struct usher< category_left_name, category_right_name, ::color::constant::distance::DeltaC_entity >
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
        struct usher< category_left_name, category_right_name, ::color::constant::distance::DeltaH_entity >
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

      }
    }
  }

#endif

#include "./delta_gray.hpp"
#include "./ciede2000.hpp"
#include "./cie94.hpp"
#include "./cmc1984.hpp"
#include "./cie76.hpp"
#include "./euclid.hpp"
#include "./hue_euclid.hpp"
#include "./hue_helix.hpp"
#include "./hue_helix_rgb.hpp"
#include "./rgb_special.hpp"

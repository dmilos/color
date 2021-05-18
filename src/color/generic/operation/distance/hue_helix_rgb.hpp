#ifndef  color_generic_operation_distance_usher_hue_helix_rgb
#define  color_generic_operation_distance_usher_hue_helix_rgb

// ::color::operation::_internal::usher<category_left_name, category_right_name>::process( left, right )



#include "./constant.hpp"
#include "./usher.hpp"


 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct usher< category_name, category_name, ::color::constant::distance::hue_helix_rgb_entity >
         {
          public:

            typedef category_name   category_type;
            typedef ::color::model< category_name  >  model_type;
            typedef typename model_type::component_type  component_type;

            typedef std::is_floating_point< component_type >  is_float_point_type;
            static_assert( is_float_point_type::value, "Expect floating point type. float, double or long double");

            typedef typename ::color::trait::scalar< category_type >::instance_type  scalar_type;

            typedef ::color::hsi<scalar_type>  hsi_type;

            typedef  ::color::constant::generic< typename hsi_type::category_type > constant_type;

            typedef ::color::rgb<scalar_type>  rgb_type;

            typedef ::color::operation::_internal::usher< typename rgb_type::category_type, typename rgb_type::category_type, ::color::constant::distance::euclid_entity > distance_rgb_type;

          private:
            static scalar_type fix_angle( scalar_type const & angle )
             {
              scalar_type result = angle;
              if( result < scalar_type(0)   ) result += scalar_type(360);
              if( scalar_type(360) < result ) result -= scalar_type(360);
              return result;
             }

          public:
            static scalar_type process( model_type const& left, model_type const& right, scalar_type const& precision = 0.1  )
             {
              rgb_type tail{ left }, head;

              scalar_type left_angle  = left[0];
              scalar_type left_1  = left[1];
              scalar_type left_2  = left[2];

              scalar_type delta_angle  =  right[0] - left_angle;
              if( scalar_type( 180 ) < delta_angle         ) delta_angle  = delta_angle - scalar_type( 360 );
              if( delta_angle        < scalar_type( -180 ) ) delta_angle  = scalar_type( 360 ) + delta_angle;
              scalar_type delta_1  = right[1] - left_1;
              scalar_type delta_2  = right[2] - left_2;

              scalar_type result = 0;
              for( scalar_type t = precision; t < scalar_type(1); t += precision )
               {
                head = model_type{ {
                    (component_type)( fix_angle ( left_angle + t * delta_angle ) )
                  , (component_type)(             left_1     + t * delta_1       )
                  , (component_type)(             left_2     + t * delta_2       )
                 } };

                result += distance_rgb_type::process( tail, head );
                tail = head;
               }
              return result;
             }
         };

      }
    }
  }

#endif

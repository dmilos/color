#ifndef  color_generic_operation_distance_usher_hue_helix
#define  color_generic_operation_distance_usher_hue_helix

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
        struct usher< category_name, category_name, ::color::constant::distance::hue_helix_entity >
         {
          public:

            typedef category_name   category_type;
            typedef ::color::model< category_name  >  model_type;

            typedef std::is_floating_point< typename model_type::component_type >  is_float_point_type;
            static_assert( is_float_point_type::value, "Expect floating point type. float, double or long double");

            typedef typename ::color::trait::scalar< category_type >::instance_type  scalar_type;

            typedef ::color::hsi<scalar_type>  hsi_type;

            typedef  ::color::constant::generic< typename hsi_type::category_type > constant_type;

            typedef ::color::rgb<scalar_type>  rgb_type;

            typedef ::color::operation::_internal::usher< typename rgb_type::category_type, typename rgb_type::category_type, ::color::constant::distance::euclid_entity > distance_rgb_type;

          private:
            typedef rgb_type coord3d_type;

            static void to_descartes( coord3d_type & descartes, coord3d_type const& cylinder )
             {
              descartes[0] = cylinder[1] * cos( cylinder[0] * constant_type::deg2rad() );
              descartes[1] = cylinder[1] * sin( cylinder[0] * constant_type::deg2rad() );
              descartes[2] = cylinder[2];
             }
            static scalar_type fix_angle( scalar_type const & angle )
             {
              scalar_type result = angle;
              if( result < scalar_type(-180)  ) result = scalar_type(360) + result;
              if( scalar_type(180) < result   ) result = result - scalar_type(360);
              return result;
             }

          public:
            static scalar_type process( model_type const& left, model_type const& right, scalar_type const& precision = 0.1  )
             {
              scalar_type  angle = fix_angle( right[0] -  left[0] );

              coord3d_type tail, head;
               to_descartes( tail,
                 coord3d_type{ {
                   0
                  ,left[1]
                  ,left[2]
                 } } );

              scalar_type result = 0;
              for( scalar_type t=precision; t < scalar_type(1); t += precision )
               {
                to_descartes( head,
                 coord3d_type{ {
                   t * angle
                  ,left[1] + t * ( right[1] - left[1] )
                  ,left[2] + t * ( right[2] - left[2] )
                 } } );

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

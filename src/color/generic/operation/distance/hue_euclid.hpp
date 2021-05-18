#ifndef  color_generic_operation_distance_usher_hue_euclead
#define  color_generic_operation_distance_usher_hue_euclead

// ::color::operation::_internal::usher<category_name>::process( left, right )



#include "./constant.hpp"
#include "./usher.hpp"


 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct usher< category_name, category_name, ::color::constant::distance::hue_euclid_entity >
         {
          public:
            typedef category_name   category_type;
            typedef ::color::model< category_name  >  model_type;
            typedef std::is_floating_point< typename model_type::component_type >  is_float_point_type;

            typedef typename ::color::trait::scalar< category_type >::instance_type  scalar_type;

            typedef ::color::hsi<scalar_type>  hsi_type;

            typedef  ::color::constant::generic< typename hsi_type::category_type > constant_type;
          private:
            static scalar_type square( scalar_type const& v )
             {
              return v*v; 
             }
            static scalar_type fix_angle( scalar_type const & angle )
             {
              scalar_type result = angle;
              if( result < scalar_type(0) ) result = - result;
              if( scalar_type(180) < result ) result = scalar_type(360) - result;
              return result;
             }

          public:
            static scalar_type process( model_type const& left, model_type const& right, scalar_type const& scale = constant_type::pi() )
             {
              scalar_type angle = fix_angle( left[0] -  right[0] );

              angle *= scale / scalar_type( 180 );

              scalar_type  lenght =
                sqrt
                (   square( angle )
                  + square( ( left[1] - right[1] )/scalar_type(100) )
                  + square( ( left[2] - right[2] )/scalar_type(100) )
                 );
              return lenght;
             }
         };

      }
    }
  }

#endif

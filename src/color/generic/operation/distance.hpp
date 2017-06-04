#ifndef  color_generic_operation_distance
#define color_generic_operation_distance

// ::color::operation::distance( left, right )
// ::color::constant::delta_gray_entity, hsl_special_entity, euclid_entity

#include "../model.hpp"
#include "./delta.hpp"
#include "../../gray/gray.hpp"
#include "./delta.hpp"
#include "../trait/diagonal.hpp"

 namespace color
  {
   namespace constant
    {
     namespace distance
      {

       enum reference_enum
        {
          delta_gray_entity
         ,hsl_special_entity
         ,euclid_entity
       //,fast_entity
        };

      }
    }

   namespace operation
    {
     namespace _internal
      {

       template< typename category_name, enum ::color::constant::distance::reference_enum reference_number= ::color::constant::distance::euclid_entity >
        struct distance
         {
          public:
            typedef category_name  category_type;
            typedef ::color::model<category_type>  model_type;
            typedef typename ::color::trait::scalar< category_type >::instance_type  scalar_type;
            typedef ::color::trait::diagonal< category_name >         diagonal_type;

            static scalar_type process( model_type const& left, model_type const& right )
             {
              model_type difference;
              ::color::operation::delta<category_type>( difference, left, right );
              scalar_type lenght = sqrt(  scalar_type( difference[0] )*scalar_type( difference[0] )
                                        + scalar_type( difference[1] )*scalar_type( difference[1] )
                                        + scalar_type( difference[2] )*scalar_type( difference[2] ) ) / diagonal_type::value();
              return lenght;
             }
         };

       template< typename category_name>
        struct distance< category_name, ::color::constant::distance::delta_gray_entity >
         {
          public:
            typedef category_name  category_type;
            typedef ::color::model<category_type>  model_type;
            typedef typename ::color::trait::scalar< category_type >::instance_type  scalar_type;

            static scalar_type process( model_type const& left, model_type const& right )
             {
              model_type difference;
              return ::color::gray<scalar_type>( ::color::operation::delta( difference, left, right ) ).template get<0>();
             }
         };

       template< typename category_name >
        struct distance< category_name, ::color::constant::distance::hsl_special_entity >
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
              scalar_type  angle = left_hsl[0] -  right_hsl[0]; if( angle < 0 ) angle = -angle; if( 180 < angle ) angle = 360 - angle;
              scalar_type  lenght = ( angle )*scalar_type(4)/scalar_type(3) + fabs( left_hsl[2] -  right_hsl[2] );
              // lenght /=  fabs( left_hsl[1] -  right_hsl[1] ) );
              return lenght / 100;
             }
         };

      }

     template< enum ::color::constant::distance::reference_enum reference_number = ::color::constant::distance::euclid_entity, typename category_name >
      typename ::color::trait::scalar< category_name >::instance_type
      distance
       (
         ::color::model<category_name> const& left
        ,::color::model<category_name> const& right
       )
       {
        return ::color::operation::_internal::distance<category_name,reference_number>::process( left, right );
       }
    }
  }

#endif

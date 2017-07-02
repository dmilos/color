#ifndef  color_generic_operation_distance
#define color_generic_operation_distance

// ::color::operation::distance( left, right )
// ::color::constant::delta_gray_entity, hsl_special_entity, euclid_entity

#include "../../gray/gray.hpp"
#include "./delta.hpp"

 namespace color
  {
   namespace constant
    {
     namespace distance
      {

       enum reference_enum
        {
          euclid_entity
         ,CIE76_entity
         ,CIE94_entity //!< NYI
         ,CIEDE2000_entity //!< NYI
         ,CMC1984_entity //!< NYI
         ,delta_gray_entity
         ,hsl_special_entity
         ,rgb_special_entity
        };

      }
    }

   namespace operation
    {
     namespace _internal
      {

       template< typename category_name, enum ::color::constant::distance::reference_enum reference_number = ::color::constant::distance::euclid_entity >
        struct distance
         {
          public:
            typedef category_name  category_type;
            typedef ::color::model<category_type>  model_type;
            typedef typename ::color::trait::container< category_type >              container_trait_type;
            typedef typename ::color::trait::scalar< category_type >::instance_type   scalar_type;
            typedef typename ::color::trait::index< category_type >::instance_type     index_type;

            typedef color::operation::_internal::distance< category_name, ::color::constant::distance::euclid_entity> this_type;

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

       template< typename category_name>
        struct distance< category_name, ::color::constant::distance::delta_gray_entity >
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

       template< typename category_name>
        struct distance< category_name, ::color::constant::distance::CIE76_entity >
         {
          public:
            typedef category_name  category_type;
            typedef ::color::model<category_type>  model_type;
            typedef typename ::color::trait::scalar< category_type >::instance_type  scalar_type;
            typedef ::color::lab<scalar_type>  lab_type;

            static scalar_type process( model_type const& left, model_type const& right )
             {
              lab_type lab_left(left);
              lab_type lab_right(right);

              return ::color::operation::distance< ::color::constant::distance::euclid_entity >( lab_left, lab_right );
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
              scalar_type  angle = left_hsl[0] -  right_hsl[0]; if( angle < 0 ) angle = - angle; if( 180 < angle ) angle = 360 - angle;
              angle /= 360;
              scalar_type  lenght = angle * scalar_type(4)/scalar_type(3);
              lenght *= fabs( left_hsl[1] -  right_hsl[1] )/100;
              lenght *= fabs( left_hsl[2] -  right_hsl[2] )/100;
              return lenght;
             }
         };

       template< typename category_name >
        struct distance< category_name, ::color::constant::distance::rgb_special_entity >
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
               d *= fabs( left_rgb[0] - std::max( right_rgb[1], right_rgb[2] ) );
               d *= fabs( left_rgb[1] - std::max( right_rgb[0], right_rgb[2] ) );
               d *= fabs( left_rgb[2] - std::max( right_rgb[0], right_rgb[1] ) );
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
         ::color::model<category_name> const& left
        ,::color::model<category_name> const& right
       )
       {
        return ::color::operation::_internal::distance<category_name,reference_number>::process( left, right );
       }
    }
  }

#endif

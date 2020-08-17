#ifndef color_cmy_get_yellow
#define color_cmy_get_yellow

// ::color::get::yellow( c )

#include "../category.hpp"
#include "../place/place.hpp"
#include "../../generic/get/yellow.hpp"





 namespace color
  {
   namespace get
    {

     namespace constant
      {
       namespace cmy { namespace yellow
        {

         enum formula_enum
          {
            channel_entity
           ,hsl_star_entity
           // TODO ,hsl_angle_entity
          };

        }}
      }

     namespace _internal { namespace cmy
      {
       namespace yellow
        {

         template
          <
            typename category_name
           ,enum ::color::get::constant::cmy::yellow::formula_enum formula_number = ::color::get::constant::cmy::yellow::channel_entity
          >
          struct usher
           {
            typedef category_name category_type;

            typedef ::color::model<category_type>          model_type;
            typedef typename ::color::trait::component< category_name >::return_type return_type;

            enum
             {
               yellow_p  = ::color::place::_internal::yellow<category_type>::position_enum
             };

            static return_type process( model_type const& color_parameter)
             {
               return color_parameter.template get<yellow_p>();
             }
           };

         template< typename tag_name >
          struct usher< ::color::category::cmy< tag_name >, ::color::get::constant::cmy::yellow::hsl_star_entity >
           {
            typedef ::color::category::cmy< tag_name>  category_type;
            typedef ::color::model< category_type > model_type;

            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

            typedef typename ::color::trait::component< category_type >::return_type return_type;

            typedef ::color::_internal::diverse< category_type >     diverse_type;
            typedef ::color::_internal::normalize< category_type > normalize_type;

            enum
             {
               cyan_p   = ::color::place::_internal::cyan<category_type>::position_enum
              ,magenta_p = ::color::place::_internal::magenta<category_type>::position_enum
              ,yellow_p  = ::color::place::_internal::yellow<category_type>::position_enum
             };

            static return_type process( model_type const& color_parameter )
             {
              scalar_type c = normalize_type::template process<cyan_p  >( color_parameter.template get<cyan_p  >(  ) );
              scalar_type m = normalize_type::template process<magenta_p>( color_parameter.template get<magenta_p>(  ) );
              scalar_type y = normalize_type::template process<yellow_p >( color_parameter.template get<yellow_p >(  ) );

              scalar_type result;
              while( true )
               {
                if( y < m ) { result = 0; break; }
                if( y < c ) { result = 0; break; }
                if( c < m )
                 {
                  result = ( y - m ) * ( scalar_type(1) - ( m - c ) );
                  break;
                 }

                {
                 result = ( y - c ) * ( scalar_type(1) - ( c - m ) );
                 break;
                }
               }

              return diverse_type::template process<cyan_p >( result );
             }
           };

        }
      }}

     template
      <
        enum ::color::get::constant::cmy::yellow::formula_enum formula_number = ::color::get::constant::cmy::yellow::channel_entity
       ,typename tag_name
      >
      inline
      typename ::color::model< ::color::category::cmy< tag_name> >::component_const_type
       yellow
       (
         ::color::model< ::color::category::cmy< tag_name> > const& color_parameter
       )
       {
        return ::color::get::_internal::cmy::yellow::usher< ::color::category::cmy< tag_name >, formula_number  >::process( color_parameter );
       }

    }
  }

#endif

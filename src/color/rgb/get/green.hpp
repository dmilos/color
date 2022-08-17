#ifndef color_rgb_get_green
#define color_rgb_get_green

// ::color::get::green( c )

#include "../category.hpp"
#include "../place/place.hpp"
#include "../../generic/get/green.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

#include "./hue.hpp"




 namespace color
  {
   namespace get
    {

     namespace constant
      {
       namespace rgb { namespace green
        {

         enum formula_enum
          {
             channel_entity
           ,hsl_star_entity
           ,hue_angle_entity
          };

        }
      }}

     namespace _internal { namespace rgb
      {
       namespace green
        {

         template
          <
            typename category_name
           ,enum ::color::get::constant::rgb::green::formula_enum formula_number = ::color::get::constant::rgb::green::channel_entity
          >
          struct usher
           {
            typedef category_name category_type;

            typedef ::color::model<category_type>          model_type;
            typedef typename ::color::trait::component< category_name >::return_type return_type;

            enum
             {
                green_p  = ::color::place::_internal::green<category_type>::position_enum
             };

            static return_type process( model_type const& color_parameter )
             {
               return color_parameter.template get<green_p>();
             }
           };

         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::rgb::green::hsl_star_entity >
           {
            typedef ::color::category::rgb< tag_name>  category_type;
            typedef ::color::model< category_type > model_type;

            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

            typedef typename ::color::trait::component< category_type >::return_type return_type;

            typedef ::color::_internal::diverse< category_type >     diverse_type;
            typedef ::color::_internal::normalize< category_type > normalize_type;

            enum
             {
               red_p   = ::color::place::_internal::red<category_type>::position_enum
              ,green_p = ::color::place::_internal::green<category_type>::position_enum
              ,blue_p  = ::color::place::_internal::blue<category_type>::position_enum
             };

            static return_type process( model_type const& color_parameter )
             {
              scalar_type r = normalize_type::template process<red_p  >( color_parameter.template get<red_p  >(  ) );
              scalar_type g = normalize_type::template process<green_p>( color_parameter.template get<green_p>(  ) );
              scalar_type b = normalize_type::template process<blue_p >( color_parameter.template get<blue_p >(  ) );

              scalar_type result;
              while( true )
               {
                if( r < b )
                 {
                  result = ( g - b )* ( scalar_type(1) - ( b - r ) );
                  break;
                 }

                {
                 result = ( g - r )* ( scalar_type(1) - ( r - b ) );
                 break;
                }
               }

              return diverse_type::template process<green_p >( result );
             }
           };

         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::rgb::green::hue_angle_entity >
           {
            typedef ::color::category::rgb< tag_name>  category_type;
            typedef ::color::model< category_type > model_type;

            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

            typedef typename ::color::trait::component< category_type >::return_type return_type;

            typedef ::color::_internal::diverse< category_type >     diverse_type;
            typedef ::color::_internal::normalize< category_type > normalize_type;

            enum
             {
               red_p    = ::color::place::_internal::red<category_type>::position_enum 
              ,green_p  = ::color::place::_internal::green<category_type>::position_enum
             };

            static return_type process( model_type const& color_parameter )
             {
              static const scalar_type pivot = scalar_type(120)/scalar_type(360);

              auto h = ::color::get::hue< ::color::get::constant::rgb::hue::polar_atan2_entity >( color_parameter );
              scalar_type result = normalize_type::template process<red_p>( h );

              result -= pivot;

              if( result < scalar_type(0) )
               {
                result += scalar_type(1); 
               }

              if( result < scalar_type(0.5) )
               {
                result = scalar_type(0.5) - result;
               }
              else
               {
                result = result - scalar_type(0.5);
               }

              return diverse_type::template process<green_p >( scalar_type(2) * result );
             }
           };

        }
      }}


     template
      <
        enum ::color::get::constant::rgb::green::formula_enum formula_number = ::color::get::constant::rgb::green::channel_entity
       ,typename tag_name
      >
      inline
      typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
       green
       (
         ::color::model< ::color::category::rgb< tag_name> > const& color_parameter
       )
       {
        return ::color::get::_internal::rgb::green::usher< ::color::category::rgb< tag_name >, formula_number >::process( color_parameter );
       }

    }
  }

#endif

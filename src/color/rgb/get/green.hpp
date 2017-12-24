#ifndef color_rgb_get_green
#define color_rgb_get_green

// ::color::get::green( c )

#include "../category.hpp"
#include "../place/place.hpp"










 namespace color
  {
   namespace constant
    {
     namespace green
      {

       enum algorithm_enum
        {
         channel_number
         ,hsl_star_number
        };

       namespace _internal
        {

         template< enum ::color::constant::green::algorithm_enum algorithm_name > struct algorithm{ };

        }
      }
    }

   namespace get
    {
     namespace _internal
      {

       template< typename tag_name >
        inline
        typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
        green
         (
           ::color::model< ::color::category::rgb<tag_name> >                                         const& color_parameter
          ,::color::constant::green::_internal::algorithm< ::color::constant::green::channel_number > const& algorithm
         )
         {
          typedef ::color::category::rgb< tag_name>  category_type;
          enum{ green_p  = ::color::place::_internal::green<category_type>::position_enum };

          return color_parameter.template get<green_p>();
         }

       template< typename tag_name >
        inline
        typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
        green
         (
           ::color::model< ::color::category::rgb<tag_name> >                           const& color_parameter
          ,::color::constant::green::_internal::algorithm< ::color::constant::green::hsl_star_number> const& algorithm
         )
         {
          typedef ::color::category::rgb< tag_name>  category_type;
          typedef ::color::trait::container<category_type>     container_type;
          typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

          enum
           {
             red_p   = ::color::place::_internal::red<category_type>::position_enum
            ,green_p = ::color::place::_internal::green<category_type>::position_enum
            ,blue_p  = ::color::place::_internal::blue<category_type>::position_enum
           };

          typedef ::color::_internal::diverse< category_type >     diverse_type;
          typedef ::color::_internal::normalize< category_type > normalize_type;

          scalar_type r = normalize_type::template process<red_p  >( color_parameter.template get<red_p  >(  ) );
          scalar_type g = normalize_type::template process<green_p>( color_parameter.template get<green_p>(  ) );
          scalar_type b = normalize_type::template process<blue_p >( color_parameter.template get<blue_p >(  ) );

          scalar_type result;
          while( true )
           {
            if( g < r ) { result = 0; break; }
            if( g < b ) { result = 0; break; }
            if( r < b )
             {
              result = ( g - b )* ( 1- ( b - r ) );
              break;
             }

            result = ( g - r )* ( 1- ( r - b ) );
            break;
           }

          return diverse_type::template process<green_p >( result );
         }

      }
    }

   namespace get
    {

     template
      <
        enum ::color::constant::green::algorithm_enum algorithm_name = ::color::constant::green::channel_number
       ,typename tag_name
      >
      inline
      typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
       green
       (
         ::color::model< ::color::category::rgb< tag_name> > const& color_parameter
       )
       {
        return ::color::get::_internal::green< tag_name >( color_parameter, ::color::constant::green::_internal::algorithm< algorithm_name >{} );
       }

    }
  }

#endif

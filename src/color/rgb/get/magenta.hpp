#ifndef color_rgb_get_magenta
#define color_rgb_get_magenta

// ::color::get::magenta( c )

#include "../category.hpp"
#include "../place/place.hpp"






 namespace color
  {
   namespace get
    {

     namespace constant
      {
       namespace /*rgb::*/magenta
        {

         enum formula_enum
          {
             cmy_entity
            ,cmyk_entity
            ,hsl_star_entity
          };

        }
      }

     namespace _internal/*::rgb*/
      {
       namespace magenta
        {

         template
          <
            typename category_name
           ,enum ::color::get::constant::magenta::formula_enum formula_number
          >
          struct usher
           {
            typedef category_name category_type;

            typedef ::color::model<category_type>          model_type;
            typedef typename ::color::trait::component< category_name >::return_type return_type;

            static return_type process( model_type const& m )
             {
              return m.template get<0>();
             }
           };

         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, color::get::constant::magenta::hsl_star_entity >
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
                if( r < g ) { result = 0; break; }
                if( b < g ) { result = 0; break; }
                if( r < b )
                 {
                  result = ( r - g )* ( 1- ( b - r ) );
                  break;
                 }

                result = ( b - g )* ( 1- ( r - b) );
                break;
               }

              return diverse_type::template process<red_p >( result );
             }
           };

       }
     }


     template
      <
        enum ::color::get::constant::magenta::formula_enum formula_number = ::color::get::constant::magenta::hsl_star_entity
       ,typename tag_name
      >
      inline
      typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
       magenta
       (
         ::color::model< ::color::category::rgb< tag_name> > const& color_parameter
       )
       {
        return ::color::get::_internal::magenta::usher< ::color::category::rgb< tag_name >, formula_number  >::process( color_parameter );
       }

    }
  }

#endif
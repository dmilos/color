#ifndef color_rgb_get_saturation
#define color_rgb_get_saturation

// ::color::get::constant::rgb::saturation::hsv_entity, hsl_entity, hsi_entity
// ::color::get::constant::rgb::saturation::formula_enum
// ::color::get::saturation( c )




#include "../category.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"

#include "../../generic/get/saturation.hpp"


 namespace color
  {
   namespace get
    {

     namespace constant
      {
       namespace rgb { namespace saturation
        {

         enum formula_enum
          {
                         hsv_entity
            ,            hsl_entity
            ,            hsi_entity
            //,  distance2gray_entity / maxdistance_from_gray_entity
          };

        }
      }}

     namespace _internal { namespace rgb
      {
       namespace saturation
        {

         template
          <
            typename category_name
           ,enum ::color::get::constant::rgb::saturation::formula_enum formula_number
          >
          struct usher
           {
            typedef category_name category_type;

            typedef ::color::model<category_type>          model_type;
            typedef typename ::color::trait::component< category_name >::return_type return_type;

            static return_type process( model_type const& color_parameter )
             {
              return color_parameter.template get<0>();
             }
           };

         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::rgb::saturation::hsv_entity >
           {
            typedef ::color::category::rgb< tag_name > category_type;
            typedef ::color::model< category_type > model_type;

            typedef typename ::color::akin::hsv< category_type >::akin_type  akin_type;
            typedef ::color::_internal::diverse< akin_type >     diverse_type;

            typedef ::color::_internal::normalize< category_type > normalize_type;

            typedef typename ::color::trait::scalar<category_type>                    scalar_trait_type;
            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;
            typedef typename ::color::trait::component< category_type >::return_type return_type;

            enum
             {
                red_p   = ::color::place::_internal::red<category_type>::position_enum
              , green_p = ::color::place::_internal::green<category_type>::position_enum
              , blue_p  = ::color::place::_internal::blue<category_type>::position_enum
             };

            static return_type process( model_type const& c)
             {
              scalar_type r = normalize_type::template process<red_p  >( c.template get<red_p  >() );
              scalar_type g = normalize_type::template process<green_p>( c.template get<green_p>() );
              scalar_type b = normalize_type::template process<blue_p >( c.template get<blue_p >() );

              scalar_type lo = std::min<scalar_type>( {r,g,b} );
              scalar_type hi = std::max<scalar_type>( {r,g,b} );
              scalar_type delta = hi - lo;

              scalar_type s = 0;

              if( false == scalar_trait_type::is_small( hi ) )
               {
                s = delta / hi;
               }

              return diverse_type::template process<0>( /*typename ::color::trait::scalar<akin_type>::instance_type ( */s /* ) */);
             }
           };

         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::rgb::saturation::hsl_entity >
           {
            typedef ::color::category::rgb< tag_name > category_type;
            typedef ::color::model< category_type > model_type;

            typedef typename ::color::akin::hsv< category_type >::akin_type  akin_type;
            typedef ::color::_internal::diverse< akin_type >     diverse_type;

            typedef ::color::_internal::normalize< category_type > normalize_type;

            typedef typename ::color::trait::scalar<category_type>                    scalar_trait_type;
            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

            typedef typename ::color::trait::component< akin_type >::return_type return_type;

            enum
             {
                red_p   = ::color::place::_internal::red<category_type>::position_enum
              , green_p = ::color::place::_internal::green<category_type>::position_enum
              , blue_p  = ::color::place::_internal::blue<category_type>::position_enum
             };

            static return_type process( model_type const& c )
             {
              scalar_type r = normalize_type::template process<red_p  >( c.template get<red_p  >() );
              scalar_type g = normalize_type::template process<green_p>( c.template get<green_p>() );
              scalar_type b = normalize_type::template process<blue_p >( c.template get<blue_p >() );

              const scalar_type hi = std::max<scalar_type>( { r, g, b } );
              const scalar_type lo = std::min<scalar_type>( { r, g, b } );
              scalar_type delta = hi - lo;

              scalar_type s = 0;
              scalar_type l = (hi + lo) / scalar_type(2);

              if( false == scalar_trait_type::is_small( delta ) )
               {
                s = delta / ( scalar_type(1) - fabs( scalar_type(2)*l - scalar_type(1) ) );
               }
              return diverse_type::template process<0>( /*typename ::color::trait::scalar<akin_type>::instance_type ( */s /* ) */);
             }
           };


         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::rgb::saturation::hsi_entity >
           {
            typedef ::color::category::rgb< tag_name > category_type;
            typedef ::color::model< category_type > model_type;

            typedef typename ::color::akin::hsv< category_type >::akin_type  akin_type;
            typedef ::color::_internal::diverse< akin_type >     diverse_type;

            typedef ::color::_internal::normalize< category_type > normalize_type;

            typedef typename ::color::trait::scalar<category_type>                    scalar_trait_type;
            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

            typedef typename ::color::trait::component< akin_type >::return_type return_type;

            enum
             {
                red_p   = ::color::place::_internal::red<category_type>::position_enum
              , green_p = ::color::place::_internal::green<category_type>::position_enum
              , blue_p  = ::color::place::_internal::blue<category_type>::position_enum
             };

            static return_type process( model_type const& c )
             {
              scalar_type r = normalize_type::template process<red_p  >( c.template get<red_p  >() );
              scalar_type g = normalize_type::template process<green_p>( c.template get<green_p>() );
              scalar_type b = normalize_type::template process<blue_p >( c.template get<blue_p >() );

              scalar_type lo = std::min<scalar_type>( {r,g,b} );

              scalar_type i = ( r + g + b ) / scalar_type(3);
              scalar_type s = scalar_type(1);
              if( false == scalar_trait_type::is_small( i ) )
               {
                s = scalar_type(1) - lo / i;
               }

              return diverse_type::template process<0>( /*typename ::color::trait::scalar<akin_type>::instance_type ( */s /* ) */);
             }
           };

        }
      }}

     template
      <
        enum ::color::get::constant::rgb::saturation::formula_enum formula_number = ::color::get::constant::rgb::saturation::hsv_entity
       ,typename tag_name
      >
      inline
      typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
       saturation
       (
         ::color::model< ::color::category::rgb< tag_name> > const& color_parameter
       )
       {
        return ::color::get::_internal::rgb::saturation::usher< ::color::category::rgb< tag_name >, formula_number  >::process( color_parameter );
       }

    }
  }

#endif
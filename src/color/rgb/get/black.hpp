#ifndef color_rgb_get_black
#define color_rgb_get_black

// ::color::get::black( c )

#include "../category.hpp"
#include "../place/place.hpp"
#include "../../generic/get/black.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"




 namespace color
  {
   namespace get
    {

     namespace constant
      {
       namespace rgb { namespace black
        {

         enum formula_enum
          {
                alvy_entity
           ,hsl_star_entity
          };

        }
      }}

     namespace _internal { namespace rgb
      {
       namespace black
        {

         template
          <
            typename category_name
           ,enum ::color::get::constant::rgb::black::formula_enum formula_number
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
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::rgb::black::alvy_entity >
           {
            typedef ::color::category::rgb< tag_name > category_type;
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
            
              scalar_type hi = std::max<scalar_type>( {r,g,b} );
              scalar_type black = scalar_type(1) - hi;
            
              return diverse_type::template process<red_p >( black );
             }
           };

         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::rgb::black::hsl_star_entity >
           {
            typedef ::color::category::rgb< tag_name > category_type;
            typedef ::color::model< category_type > model_type;
            
            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;
            
            typedef typename ::color::akin::gray< category_type >::akin_type  akin_type;
            
            typedef typename ::color::trait::component< akin_type >::return_type return_type;
            
            typedef ::color::_internal::diverse< akin_type >       diverse_type;
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
            
              scalar_type lightnes   = std::max<scalar_type>( {r,g,b} );
              scalar_type saturation = std::max<scalar_type>( {r,g,b} ) - std::min<scalar_type>( {r,g,b} );
            
              return diverse_type::template process<red_p >( ( scalar_type(1) - lightnes ) * ( scalar_type(1) - saturation ) );
             }
           };

        }
      }}


     template
      <
        enum ::color::get::constant::rgb::black::formula_enum formula_number = ::color::get::constant::rgb::black::alvy_entity
       ,typename tag_name
      >
      inline
      typename ::color::model< ::color::category::rgb< tag_name > >::component_const_type
      black
       (
         ::color::model< ::color::category::rgb< tag_name > > const& color_parameter
       )
       {
        return ::color::get::_internal::rgb::black::usher< ::color::category::rgb< tag_name >, formula_number  >::process( color_parameter );
       }

    }
  }

#endif
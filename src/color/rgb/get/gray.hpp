#ifndef color_rgb_get_gray
#define color_rgb_get_gray

// ::color::get::constant::gray::average_entity
// ::color::get::constant::gray::formula_enum
// ::color::get::gray( c )



//#include "../../gray/place/place.hpp"
#include "../../gray/akin/rgb.hpp"
#include "../../gray/trait/component.hpp"
#include "../../gray/constant.hpp"

#include "../category.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/trait/scalar.hpp"

#include "../../generic/get/gray.hpp"



 namespace color
  {
   namespace get
    {

     namespace constant
      {
       namespace /*rgb::*/gray
        {

         enum formula_enum
          {
               average_entity
            ,   middle_entity
            ,   yuv709_entity
            , hsl_star_entity //!< still under construction
            ,lightness_entity //!< TODO NYI
          };

        }
      }

     namespace _internal/*::rgb*/
      {
       namespace gray
        {

         template
          <
            typename category_name
           ,enum ::color::get::constant::gray::formula_enum formula_number
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
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::gray::average_entity >
           {
            typedef ::color::category::rgb< tag_name > category_type;
            typedef ::color::model< category_type > model_type;

            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

            typedef typename ::color::akin::gray< category_type >::akin_type  akin_type;

            typedef typename ::color::trait::component< akin_type >::return_type return_type;

            typedef ::color::_internal::diverse< akin_type >       diverse_type;
            typedef ::color::_internal::normalize< category_type > normalize_type;

            typedef ::color::constant::gray::rgb< akin_type > gray_const_type;

            enum
             {
                red_p   = ::color::place::_internal::red<category_type>::position_enum
              , green_p = ::color::place::_internal::green<category_type>::position_enum
              , blue_p  = ::color::place::_internal::blue<category_type>::position_enum
             };

            static return_type process( model_type const& color_parameter )
             {
              scalar_type value =
                   normalize_type::template process<red_p   >( color_parameter.template get<red_p   >() )
                 + normalize_type::template process<green_p >( color_parameter.template get<green_p >() )
                 + normalize_type::template process<blue_p  >( color_parameter.template get<blue_p  >() )
               ;

              value /= scalar_type( 3 );

              return diverse_type::template process<0>( /*typename ::color::trait::scalar<akin_type>::instance_type ( */value /* ) */);
             }
           };

         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::gray::middle_entity >
           {
            typedef ::color::category::rgb< tag_name > category_type;
            typedef ::color::model< category_type > model_type;

            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

            typedef typename ::color::akin::gray< category_type >::akin_type  akin_type;

            typedef typename ::color::trait::component< akin_type >::return_type return_type;

            typedef ::color::_internal::diverse< akin_type >       diverse_type;
            typedef ::color::_internal::normalize< category_type > normalize_type;

            typedef ::color::constant::gray::rgb< akin_type > gray_const_type;

            enum
             {
                red_p   = ::color::place::_internal::red<category_type>::position_enum
              , green_p = ::color::place::_internal::green<category_type>::position_enum
              , blue_p  = ::color::place::_internal::blue<category_type>::position_enum
             };

            static return_type process( model_type const& color_parameter )
             {
              scalar_type r = normalize_type::template process<red_p   >( color_parameter.template get<red_p   >() );
              scalar_type g = normalize_type::template process<green_p >( color_parameter.template get<green_p >() );
              scalar_type b = normalize_type::template process<blue_p  >( color_parameter.template get<blue_p  >() );

              scalar_type value = ( std::max( {r,g,b} ) + std::min( {r,g,b} ) ) / scalar_type( 2 );

              return diverse_type::template process<0>( /*typename ::color::trait::scalar<akin_type>::instance_type ( */value /* ) */);
             }
           };

           
         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::gray::yuv709_entity >
           {
            typedef ::color::category::rgb< tag_name > category_type;
            typedef ::color::model< category_type > model_type;

            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

            typedef typename ::color::akin::gray< category_type >::akin_type  akin_type;

            typedef typename ::color::trait::component< akin_type >::return_type return_type;

            typedef ::color::_internal::diverse< akin_type >       diverse_type;
            typedef ::color::_internal::normalize< category_type > normalize_type;

            typedef ::color::constant::gray::rgb< akin_type > gray_const_type;

            enum
             {
                red_p   = ::color::place::_internal::red<category_type>::position_enum
              , green_p = ::color::place::_internal::green<category_type>::position_enum
              , blue_p  = ::color::place::_internal::blue<category_type>::position_enum
             };


            static return_type process( model_type const& color_parameter )
             {
              scalar_type value =
                   gray_const_type::Rc() * normalize_type::template process<red_p   >( color_parameter.template get<red_p   >() )
                 + gray_const_type::Gc() * normalize_type::template process<green_p >( color_parameter.template get<green_p >() )
                 + gray_const_type::Bc() * normalize_type::template process<blue_p  >( color_parameter.template get<blue_p  >() )
               ;

              return diverse_type::template process<0>( /*typename ::color::trait::scalar<akin_type>::instance_type ( */value /* ) */);
             }
           };

         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::gray::hsl_star_entity >
           {
            typedef ::color::category::rgb< tag_name > category_type;
            typedef ::color::model< category_type > model_type;

            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

            typedef typename ::color::akin::gray< category_type >::akin_type  akin_type;

            typedef typename ::color::trait::component< akin_type >::return_type return_type;

            typedef ::color::_internal::diverse< akin_type >       diverse_type;
            typedef ::color::_internal::normalize< category_type > normalize_type;

            typedef ::color::constant::gray::rgb< akin_type > gray_const_type;

            enum
             {
                red_p   = ::color::place::_internal::red<category_type>::position_enum
              , green_p = ::color::place::_internal::green<category_type>::position_enum
              , blue_p  = ::color::place::_internal::blue<category_type>::position_enum
             };


            static return_type process( model_type const& color_parameter )
             {
              scalar_type r =  normalize_type::template process<red_p   >( color_parameter.template get<red_p   >() );
              scalar_type g =  normalize_type::template process<green_p >( color_parameter.template get<green_p >() );
              scalar_type b =  normalize_type::template process<blue_p  >( color_parameter.template get<blue_p  >() );

              scalar_type delta = std::max( { r,g,b } ) - std::min( {r,g,b} );
              scalar_type value = ( scalar_type(1) - delta ) * ( scalar_type(1) - delta );

              return diverse_type::template process<0>( /*typename ::color::trait::scalar<akin_type>::instance_type ( */value /* ) */);
             }
           };

        }
      }


     template
      <
        enum ::color::get::constant::gray::formula_enum formula_number = ::color::get::constant::gray::yuv709_entity
       ,typename tag_name
      >
      inline
      typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
       gray
       (
         ::color::model< ::color::category::rgb< tag_name> > const& color_parameter
       )
       {
        return ::color::get::_internal::gray::usher< ::color::category::rgb< tag_name >, formula_number  >::process( color_parameter );
       }

    }
  }

#endif

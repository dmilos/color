#ifndef color_rgb_get_chroma
#define color_rgb_get_chroma

// ::color::get::chroma( c )

#include "../category.hpp"
#include "../place/place.hpp"
#include "../../generic/get/chroma.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"


#include "../../_internal/diverse.hpp"
#include "../../_internal/normalize.hpp"
#include "../../generic/operation/invert.hpp"


 namespace color
  {
   namespace get
    {

     namespace constant
      {
       namespace rgb { namespace chroma
        {

         enum formula_enum
          {
                     error_entity
            ,max_minus_min_entity
            ,distance2gray_entity
          };

        }}
      }

     namespace _internal { namespace rgb
      {
       namespace chroma
        {

         template
          <
            typename category_name
           ,enum ::color::get::constant::rgb::chroma::formula_enum formula_number
          >
          struct usher
           {
            typedef category_name category_type;

            typedef ::color::model<category_type>          model_type;
            typedef typename ::color::trait::component< category_name >::return_type component_return_type;

            static component_return_type process( model_type const& m )
             {
              return m.template get<0>();
             }
           };

         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::rgb::chroma::max_minus_min_entity >
           {
            typedef ::color::category::rgb< tag_name >  category_type;
            typedef ::color::model< category_type > model_type;


            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;
            typedef typename ::color::trait::component< category_type >::return_type component_return_type;

            enum
             {
               red_p   = ::color::place::_internal::red<category_type>::position_enum
              ,green_p = ::color::place::_internal::green<category_type>::position_enum
              ,blue_p  = ::color::place::_internal::blue<category_type>::position_enum
             };

            static component_return_type process( model_type const& color_parameter )
             {
              auto r = color_parameter.template get<red_p  >();
              auto g = color_parameter.template get<green_p>();
              auto b = color_parameter.template get<blue_p >();

              auto max = std::max<component_return_type>( { r, g, b } );
              auto min = std::min<component_return_type>( { r, g, b } );

              return max - min;
             }
          };

         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::rgb::chroma::distance2gray_entity >
           {
            typedef ::color::category::rgb< tag_name >  category_type;

            typedef ::color::model< category_type > model_type;

            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;
            typedef typename ::color::trait::component< category_type >::return_type component_return_type;

            typedef ::color::_internal::normalize< category_type > normalize_type;
            typedef ::color::_internal::diverse< category_type > diverse_type;


            enum
             {
                red_p   = ::color::place::_internal::red<category_type>::position_enum
              , green_p = ::color::place::_internal::green<category_type>::position_enum
              , blue_p  = ::color::place::_internal::blue<category_type>::position_enum
             };

            static scalar_type square( scalar_type const& v ){ return v*v; }

            static component_return_type process( model_type const& color_parameter )
             {
              scalar_type r =  normalize_type::template process<red_p   >( color_parameter.template get<red_p   >() );
              scalar_type g =  normalize_type::template process<green_p >( color_parameter.template get<green_p >() );
              scalar_type b =  normalize_type::template process<blue_p  >( color_parameter.template get<blue_p  >() );

              scalar_type value = ( square( b - g ) + square( b - r ) + square( g - r ) )/ sqrt( scalar_type(3) );

              value *= sqrt( square(0.5) + square(0.5)+  square(0.5) );

              return diverse_type::template process<0>( /*typename ::color::trait::scalar<akin_type>::instance_type ( */ value /* ) */);
             }
          };

        }
      }}


     template
      <
        enum ::color::get::constant::rgb::chroma::formula_enum formula_number = ::color::get::constant::rgb::chroma::max_minus_min_entity
       ,typename tag_name
      >
      inline
      typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
       chroma
       (
         ::color::model< ::color::category::rgb< tag_name> > const& color_parameter
       )
       {
        return ::color::get::_internal::rgb::chroma::usher< ::color::category::rgb< tag_name >, formula_number  >::process( color_parameter );
       }

    }
  }

#endif
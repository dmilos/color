#ifndef color_rgb_get_saturation
#define color_rgb_get_saturation

// ::color::get::constant::saturation::TODO
// ::color::get::constant::saturation::formula_enum
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
              scalar_type value = 0;

              return diverse_type::template process<0>( /*typename ::color::trait::scalar<akin_type>::instance_type ( */value /* ) */);
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
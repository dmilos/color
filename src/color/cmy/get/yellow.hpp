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

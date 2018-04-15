#ifndef color_cmyk_get_cyan
#define color_cmyk_get_cyan

// ::color::get::cyan( c )

#include "../category.hpp"
#include "../place/place.hpp"






 namespace color
  {
   namespace get
    {

     namespace constant
      {
       namespace cmyk { namespace cyan
        {

         enum formula_enum
          {
            channel_entity
          };

        }}
      }

     namespace _internal { namespace cmyk
      {
       namespace cyan
        {

         template
          <
            typename category_name
           ,enum ::color::get::constant::cmyk::cyan::formula_enum formula_number = ::color::get::constant::cmyk::cyan::channel_entity
          >
          struct usher
           {
            typedef category_name category_type;

            typedef ::color::model<category_type>          model_type;
            typedef typename ::color::trait::component< category_name >::return_type return_type;

            enum
             {
               cyan_p  = ::color::place::_internal::cyan<category_type>::position_enum
             };

            static return_type process( model_type const& color_parameter)
             {
               return color_parameter.template get<cyan_p>();
             }
           };

        }
      }}

     template
      <
        enum ::color::get::constant::cmyk::cyan::formula_enum formula_number = ::color::get::constant::cmyk::cyan::channel_entity
       ,typename tag_name
      >
      inline
      typename ::color::model< ::color::category::cmyk< tag_name> >::component_const_type
       cyan
       (
         ::color::model< ::color::category::cmyk< tag_name> > const& color_parameter
       )
       {
        return ::color::get::_internal::cmyk::cyan::usher< ::color::category::cmyk< tag_name >, formula_number  >::process( color_parameter );
       }

    }
  }

#endif

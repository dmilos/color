#ifndef color_cmyk_get_magenta
#define color_cmyk_get_magenta

// ::color::get::magenta( c )

#include "../category.hpp"
#include "../place/place.hpp"






 namespace color
  {
   namespace get
    {

     namespace constant
      {
       namespace cmyk { namespace magenta
        {

         enum formula_enum
          {
            channel_entity
          };

        }}
      }

     namespace _internal { namespace cmyk
      {
       namespace magenta
        {

         template
          <
            typename category_name
           ,enum ::color::get::constant::cmyk::magenta::formula_enum formula_number = ::color::get::constant::cmyk::magenta::channel_entity
          >
          struct usher
           {
            typedef category_name category_type;

            typedef ::color::model<category_type>          model_type;
            typedef typename ::color::trait::component< category_name >::return_type return_type;

            enum
             {
               magenta_p  = ::color::place::_internal::magenta<category_type>::position_enum
             };

            static return_type process( model_type const& color_parameter)
             {
               return color_parameter.template get<magenta_p>();
             }
           };

        }
      }}

     template
      <
        enum ::color::get::constant::cmyk::magenta::formula_enum formula_number = ::color::get::constant::cmyk::magenta::channel_entity
       ,typename tag_name
      >
      inline
      typename ::color::model< ::color::category::cmyk< tag_name> >::component_const_type
       magenta
       (
         ::color::model< ::color::category::cmyk< tag_name> > const& color_parameter
       )
       {
        return ::color::get::_internal::cmyk::magenta::usher< ::color::category::cmyk< tag_name >, formula_number  >::process( color_parameter );
       }

    }
  }

#endif

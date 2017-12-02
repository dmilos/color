#ifndef color_generic_get_gray
#define color_generic_get_gray

#include "../constant.hpp"

// ::color::get::gray( c )
// ::color::get::_internal::gray<category,formula_enum >::process( c )

 namespace color
  {
   namespace get
    {
     namespace _internal
      {

       template
        <
          typename category_name
         ,enum ::color::constant::gray::formula_enum gray_number = ::color::constant::gray::native_entity
        >
        struct gray
         {
          typedef category_name category_type;

          typedef ::color::model<category_type>          model_type;
          typedef typename ::color::trait::component< category_name >::return_image_type return_image_type;

          static return_image_type process( model_type const& m )
           {
            return m.template get<0>();
           }

         };

      }

     template< typename category_name >
      inline
      typename ::color::trait::component< category_name >::return_image_type
      gray( ::color::model< category_name > const& c )
       {
        return ::color::get::_internal::gray< category_name, ::color::constant::gray::native_entity >::process( c );
       }

    }
  }

#endif


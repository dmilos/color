#ifndef color_generic_get_lightness
#define color_generic_get_lightness

// ::color::get:: lightness( c )

 namespace color
  {
   namespace get
    {

     template< typename category_name >
      inline
      typename ::color::trait::component< category_name >::return_image_type
       lightness( ::color::model< category_name > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }
 
    }
  }

#endif 
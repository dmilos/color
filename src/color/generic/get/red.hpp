#ifndef color_generic_get_red
#define color_generic_get_red

// ::color::get::red( c )

 namespace color
  {
   namespace get
    {

     template< typename category_name >
      inline
      typename ::color::trait::component< category_name >::return_image_type
      red( ::color::model< category_name > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }
 
    }
  }

#endif

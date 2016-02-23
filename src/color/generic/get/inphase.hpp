#ifndef color_generic_get_inphase
#define color_generic_get_inphase

// ::color::get::inphase( c )

 namespace color
  {
   namespace get
    {

     template< typename category_name >
      inline
      typename ::color::trait::component< category_name >::return_image_type
      inphase( ::color::model< category_name > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }

    }
  }

#endif

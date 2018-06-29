#ifndef color_generic_get_key
#define color_generic_get_key
// TODO OBSOLETE. Use black instead.
// ::color::get::key( c )

 namespace color
  {
   namespace get
    {

     template< typename category_name >
      inline
      typename ::color::trait::component< category_name >::return_image_type
      key( ::color::model< category_name > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }

    }
  }

#endif

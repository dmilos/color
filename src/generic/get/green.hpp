#ifndef color_generic_get_green
#define color_generic_get_green

// ::color::get::green( c )

 namespace color
  {
   namespace get
    {

     template< typename category_name >
      inline
      typename ::color::_internal::model< category_name >::component_const_type
      green( ::color::_internal::model< category_name > const& color_parameter )
       {
        return color_parameter.template get<1>();
       };

    }
  }

#endif

#ifndef color_generic_get_cyan
#define color_generic_get_cyan

// ::color::get::cyan( c )

 namespace color
  {
   namespace get
    {
     // Dubious, ans has to be removed
     template< typename category_name >
      inline
      typename ::color::_internal::model< category_name >::component_const_type
      cyan( ::color::_internal::model< category_name > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }

    }
  }

#endif

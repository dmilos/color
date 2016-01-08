#ifndef color_generic_get_magenta
#define color_generic_get_magenta

// ::color::get::magenta( c )

 namespace color
  {
   namespace get
    {
      // Dubious, ans has to be removed 
     template< typename category_name >
      inline
      typename ::color::_internal::model< category_name >::component_const_type
      magenta( ::color::_internal::model< category_name > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }

    }
  }

#endif

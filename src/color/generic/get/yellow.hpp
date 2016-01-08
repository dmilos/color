#ifndef color_generic_get_yellow
#define color_generic_get_yellow

// ::color::get::yellow( c )

 namespace color
  {
   namespace get
    {
      // Dubious, ans has to be removed 
     template< typename category_name >
      inline
      typename ::color::_internal::model< category_name >::component_const_type
      yellow( ::color::_internal::model< category_name > const& color_parameter  )
       {
        return color_parameter.template get<0>();
       }

    }
  }

#endif

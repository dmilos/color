#ifndef color_generic_get_key
#define color_generic_get_key

// ::color::get::key( c )

 namespace color
  {
   namespace get
    {

     template< typename category_name >
      inline
      typename ::color::_internal::model< category_name >::component_const_type
      key( ::color::_internal::model< category_name > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }

    }
  }

#endif

#ifndef color_generic_get_red
#define color_generic_get_red

// ::color::get::red( c )

 namespace color
  {
   namespace get
    {

     template< typename category_name >
      inline
      typename ::color::_internal::model< category_name >::component_const_type
      red( ::color::_internal::model< category_name > const& color_parameter )
       {
        return color_parameter.template get<0>();
       };

    }
  }

#endif

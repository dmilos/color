#ifndef color_generic_get_cyan
#define color_generic_get_cyan

// ::color::get::cyan( c )

 namespace color
  {
   namespace get
    {

     template< typename category_name >
      typename ::color::_internal::model< category_name >::component_const_return_type
      void cyan( ::color::_internal::model< category_name > const& color_parameter )
       {
        return color_parameter.get<0>( index );
       };

    }
  }

#endif

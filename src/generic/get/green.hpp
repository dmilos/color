#ifndef color_generic_get_green
#define color_generic_get_green

// ::color::get::green( c )

 namespace color
  {
   namespace get
    {

     template< typename category_name >
      typename ::color::_internal::model< category_name >::component_const_return_type
      void green( ::color::_internal::model< category_name > const& color_parameter )
       {
        return color_parameter.get<1>( index );
       };

    }
  }

#endif

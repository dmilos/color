#ifndef color_generic_get_alpha
#define color_generic_get_alpha

// ::color::get::alpha( c )

 namespace color
  {
   namespace get
    {

     template< typename category_name >
      typename ::color::_internal::model< category_name >::component_const_return_type
      void alpha( ::color::_internal::model< category_name > const& color_parameter )
       {
        return color_parameter.get<4>( index );
       };

    }
  }

#endif

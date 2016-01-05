#ifndef color_generic_get_alpha
#define color_generic_get_alpha

// ::color::get::alpha( c )

 namespace color
  {
   namespace get
    {

     template< typename category_name >
      inline
      typename ::color::_internal::model< category_name >::component_return_const_type
      alpha( ::color::_internal::model< category_name > const& color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::trait::bound< category_name > bound_type;

        return bound_type::template maximum<0>();
       }

    }
  }

#endif

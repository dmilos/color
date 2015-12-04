#ifndef color_generic_get_cyan
#define color_generic_get_cyan

// ::color::get::cyan( c )

 namespace color
  {
   namespace get
    {

     template< typename category_name >
      inline
      typename ::color::_internal::model< category_name >::component_const_type
      cyan( ::color::_internal::model< category_name > const& color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::_internal::trait< category_name > trait_type;

        return ( trait_type::template range<0>() - ( color_parameter.template get<0>() - trait_type::template minimum<0>() ) ) + trait_type::template minimum<0>();
       };

    }
  }

#endif

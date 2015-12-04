#ifndef color_generic_get_gray
#define color_generic_get_gray

// ::color::get::gray( c )

 namespace color
  {
   namespace get
    {

     template< typename category_name, typename float_name = double >
      inline
      typename ::color::_internal::model< category_name >::component_const_type
      gray( ::color::_internal::model< category_name > const& color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::_internal::trait< category_name > trait_type;

        float_name value = 
             0.2126 * ( color_parameter.template get<0>() - trait_type::template minimum<0>() ) / trait_type::template range<0>()
           + 0.7152 * ( color_parameter.template get<1>() - trait_type::template minimum<1>() ) / trait_type::template range<1>()
           + 0.0722 * ( color_parameter.template get<2>() - trait_type::template minimum<2>() ) / trait_type::template range<2>();

        return typename trait_type::component_type( value * trait_type::template range<0>() + trait_type::template minimum<0>() );
       };

    }
  }

#endif

#ifndef color_generic_set_gray
#define color_generic_set_gray

// ::color::set::gray( c, val )

 namespace color
  {
   namespace set
    {

     // Actyaly set graynes of color. Do not miz with color::make::gray
     template< typename category_name, typename float_name = double >
      inline
      void
      gray
       ( 
                 ::color::_internal::model< category_name >                                   & color_parameter, 
        typename ::color::_internal::model< category_name >::component_const_input_type         component_parameter
       )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::_internal::trait< category_name > trait_type;

        float_name scale = 
             0.2126 * ( color_parameter.template get<0>() - trait_type::template minimum<0>() ) / trait_type::template range<0>()
           + 0.7152 * ( color_parameter.template get<1>() - trait_type::template minimum<1>() ) / trait_type::template range<1>()
           + 0.0722 * ( color_parameter.template get<2>() - trait_type::template minimum<2>() ) / trait_type::template range<2>();

        scale = float_name(component_parameter - trait_type::template minimum<0>())/(scale * float_name(trait_type::template range<0>())) ;

        color::operation::scale::accumulate( color_parameter, scale );
       };

    }
  }

#endif

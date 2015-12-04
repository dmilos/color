#ifndef color_generic_set_magenta
#define color_generic_set_magenta

// ::color::set::magenta(( c, val )

 namespace color
  {
   namespace set
    {

     template< typename category_name >
      inline
      void
      magenta
       ( 
                 ::color::_internal::model< category_name >                                   & color_parameter, 
        typename ::color::_internal::model< category_name >::component_const_input_type         component_parameter
       )
       {
        color_parameter.template set<0>( component_parameter );
       };

    }
  }

#endif

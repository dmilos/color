#ifndef color_generic_set_gray
#define color_generic_set_gray

// ::color::set::gray( c, val )

 namespace color
  {
   namespace set
    {

     template< typename category_name >
      inline
      void
      gray
       ( 
                 ::color::_internal::model< category_name >                                   & color_parameter, 
        typename ::color::_internal::model< category_name >::component_const_input_type         component_parameter
       )
       {
        color_parameter.template set<1>( component_parameter );
       };

    }
  }

#endif

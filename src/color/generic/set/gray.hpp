#ifndef color_generic_set_gray
#define color_generic_set_gray

// ::color::set::gray( c, val )

 namespace color
  {
   namespace set
    {

     // Actyaly set graynes of color. Do not mix with ::color::make::gray
     template< typename category_name >
      inline
      void
      gray
       ( 
                 ::color::model< category_name >                                   & color_parameter, 
        typename ::color::model< category_name >::component_input_const_type         component_parameter
       )
       {
        // Do nothing!!!
       };

    }
  }

#endif

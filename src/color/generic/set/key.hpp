#ifndef color_generic_set_key
#define color_generic_set_key
// TODO OBSOLETE. Use black instead.
// ::color::set::key( c, val )

 namespace color
  {
   namespace set
    {

     template< typename category_name >
      inline
      void
      key
       ( 
                 ::color::model< category_name >                                   & color_parameter, 
        typename ::color::model< category_name >::component_input_const_type         component_parameter
       )
       {
        // Do nothing!!!
       }

    }
  }

#endif 
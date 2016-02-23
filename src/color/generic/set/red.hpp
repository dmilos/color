#ifndef color_generic_set_red
#define color_generic_set_red

// ::color::set::red( c, val )

 namespace color
  {
   namespace set
    {

     template< typename category_name >
      inline
      void
      red
       ( 
                 ::color::model< category_name >                                   & color_parameter, 
        typename ::color::model< category_name >::component_input_const_type         component_parameter
       )
       {
        // Do nothing to force specialization!!!
       }

     //template< typename category_source_name, typename category_target_name = category_source_name >
     // inline
     // void
     // red
     //  ( 
     //            ::color::model< category_target_name >                                   & color_parameter, 
     //   typename ::color::model< category_source_name >::component_input_const_type         component_parameter
     //  )
     //  {
     //   // Do nothing!!!
     //  }

    }
  }

#endif

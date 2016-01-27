#ifndef color_yiq_set_blue
#define color_yiq_set_blue

// ::color::set::blue( c, val )

 namespace color
  {
   namespace set
    {


     template< typename tag_name >
      inline
      void
      blue
       (
         ::color::_internal::model< ::color::category::yiq<tag_name> >                                   & color_parameter,
         typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::yiq<tag_name> >::akin_type >::input_const_type         component_parameter 
       )
       {
        // TODO
       };

    }
  }

#endif

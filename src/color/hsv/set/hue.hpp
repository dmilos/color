#ifndef color_hsv_set_red
#define color_hsv_set_red

// ::color::set::red( c, val )

 namespace color
  {
   namespace set
    {

     template< typename tag_name >
      inline
      void
      red
       ( 
                 ::color::_internal::model< ::color::category::hsv<tag_name> >                                   & color_parameter,
        typename ::color::_internal::model< ::color::category::hsv<tag_name> >::component_input_const_type         component_parameter
       )
       {
        enum{ hue_p  = ::color::place::_internal::hue<category_type>::position_enum };

        color_parameter.template set<hue_p>( component_parameter );
       }

    }
  }

#endif

#ifndef color_generic_set_yellow
#define color_generic_set_yellow

// ::color::set::yellow( c, val )

 namespace color
  {
   namespace set
    {

     template< typename category_name >
      inline
      void
      yellow
       ( 
                 ::color::_internal::model< category_name >                                   & color_parameter, 
        typename ::color::_internal::model< category_name >::component_const_input_type         component_parameter
       )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::_internal::trait< category_name > trait_type;

        color_parameter.template set<1>( trait_type::template range<1>() - ( component_parameter - trait_type::template minimum<1>()) + trait_type::template minimum<1>() );
       };

    }
  }

#endif

#ifndef color_generic_set_cyan
#define color_generic_set_cyan

// ::color::set::cyan( c, val )

 namespace color
  {
   namespace set
    {

     template< typename category_name >
      inline
      void
      cyan
       ( 
                 ::color::_internal::model< category_name >                                   & color_parameter, 
        typename ::color::_internal::model< category_name >::component_const_input_type         component_parameter
       )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::_internal::trait< category_name > trait_type;

        color_parameter.template set<0>( trait_type::template range<0>() - ( component_parameter - trait_type::template minimum<0>()) + trait_type::template minimum<0>() );
       };

    }
  }

#endif

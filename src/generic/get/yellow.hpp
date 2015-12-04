#ifndef color_generic_get_yellow
#define color_generic_get_yellow

// ::color::get::yellow( c )



 namespace color
  {
   namespace get
    {

     template< typename category_name >
      inline
      typename ::color::_internal::model< category_name >::component_const_type
      yellow( ::color::_internal::model< category_name > const& color_parameter  )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::_internal::trait< category_name > trait_type;

        return ( trait_type::template range<1>() - ( color_parameter.template get<1>() - trait_type::template minimum<1>() ) ) + trait_type::template  minimum<1>();
       }

    }
  }

#endif

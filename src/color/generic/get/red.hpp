#ifndef color_generic_get_red
#define color_generic_get_red

// ::color::get::red( c )

 namespace color
  {
   namespace get
    {

     // Most generic get::red
     template< typename category_name >
      inline
      typename ::color::_internal::model< category_name >::component_return_const_type
      red( ::color::_internal::model< category_name > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }

     //template< typename format_name = ::color::type::diverse_t, typename category_name >
     // inline
     // typename ::color::_internal::model< category_name >::component_return_const_type
     // blue( ::color::_internal::model< category_name > const& model )
     //  {
     //   return color_parameter.template get<typename ::color::akin::rgb<category_name>::akin_type;
     //  }
 
    }
  }

#endif

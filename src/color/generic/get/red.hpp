#ifndef color_generic_get_red
#define color_generic_get_red

// ::color::get::red( c )

 namespace color
  {
   namespace get
    {

     // Best match, whatever it is?????
     template< typename category_name >
      inline
      typename ::color::_internal::model< category_name >::component_return_const_type
      red( ::color::_internal::model< category_name > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }

     //template< typename category_target_name, typename category_source_name = category_target_name, unsigned index_size = 0 >
     // inline
     // typename ::color::_internal::model< category_target_name >::component_return_const_type
     // blue( ::color::_internal::model< category_source_name > const& model )
     //  {
     //   reformat<category_target_name>::process<1,index_size>( )
     //   return color_parameter.template get<0>();
     //  }

     //template< typename category_target_name, typename category_source_name = category_target_name >
     // inline
     // typename ::color::_internal::compatible::red< category_target_name, category_source_name >::component_return_const_type
     // blue( ::color::_internal::model< category_source_name > const& model )
     //  {
     //   ::color::_internal::correspondent::red< category_target_name, category_source_name >::index();
     //   return 
     //  }
     
     //template< typename format_name = ::color::type::diverse_t, typename category_source_name  >
     // inline
     // typename ::color::_internal::model< category_source_name >::component_return_const_type
     // blue( ::color::_internal::model< category_source_name > const& model )
     //  {
     //   return color_parameter.template get<0>();
     //  }
 
    }
  }

#endif

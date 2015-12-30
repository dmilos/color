#ifndef  color_generic_make_black
#define color_generic_make_black

// ::color::make::black( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      inline
      void 
      black( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::_internal::bound< category_name > bound_type;
        typedef typename model_type::index_type index_type;

        for( index_type index=0; index < model_type::size() ; ++index )
         {
          color_parameter.set( index, bound_type::minimum( index ) );
         }
       }

     template< typename category_name >
      inline
      ::color::_internal::model< category_name >
      black()
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::_internal::bound< category_name > bound_type;
        typedef typename model_type::index_type index_type;

        model_type color;
        for( index_type index=0; index < model_type::size() ; ++index )
         {
          color.set( index, bound_type::minimum( index ) );
         }
        return color;
       }


    }
  }

#endif

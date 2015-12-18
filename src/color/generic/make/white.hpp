#ifndef color_generic_make_white
#define color_generic_make_white

// ::color::make::white( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void white( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::_internal::trait< category_name > trait_type;
        typedef typename model_type::index_type index_type;

        for( index_type index=0; index < model_type::size() ; ++index )
         {
          color_parameter.set(index, trait_type::maximum( index ) );
         }
       }

    }
  }

#endif

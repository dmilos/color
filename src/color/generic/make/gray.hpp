#ifndef color_generic_make_gray50
#define color_generic_make_gray50

// ::color::make::gray50( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void gray50( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::_internal::trait< category_name > trait_type;

        typedef typename model_type::index_type index_type;

        for( index_type index=0; index < model_type::size() ; ++index )
         {
          color_parameter.set( index, trait_type::minimum( index ) + trait_type::range( index )/2 );
         }
       }

     template< typename category_name >
      inline
      ::color::_internal::model< category_name >
      gray50( )
       {
        typedef ::color::_internal::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::gray50( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

#ifndef  color_generic_make_chocolate
#define color_generic_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void chocolate( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::_internal::trait< category_name > trait_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::_internal::model< category_name >
      chocolate( )
       {
        typedef ::color::_internal::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::chocolate( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

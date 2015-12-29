#ifndef  color_generic_make_salmon
#define color_generic_make_salmon

// ::color::make::salmon( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void salmon( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::_internal::trait< category_name > trait_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::_internal::model< category_name >
      salmon( )
       {
        typedef ::color::_internal::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::salmon( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

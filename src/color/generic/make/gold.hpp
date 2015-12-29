#ifndef  color_generic_make_gold
#define color_generic_make_gold

// ::color::make::gold( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void gold( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::_internal::trait< category_name > trait_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::_internal::model< category_name >
      gold( )
       {
        typedef ::color::_internal::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::gold( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

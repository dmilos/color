#ifndef  color_generic_make_orchid
#define color_generic_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void orchid( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::_internal::model< category_name >
      orchid( )
       {
        typedef ::color::_internal::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::orchid( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

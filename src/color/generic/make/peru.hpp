#ifndef  color_generic_make_peru
#define color_generic_make_peru

// ::color::make::peru( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void peru( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::_internal::model< category_name >
      peru( )
       {
        typedef ::color::_internal::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::peru( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif
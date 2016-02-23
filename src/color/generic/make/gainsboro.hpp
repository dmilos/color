#ifndef  color_generic_make_gainsboro
#define color_generic_make_gainsboro

// ::color::make::gainsboro( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void gainsboro( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      gainsboro( )
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::gainsboro( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

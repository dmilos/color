#ifndef  color_generic_make_lavender
#define color_generic_make_lavender

// ::color::make::lavender( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void lavender( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      lavender( )
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::lavender( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

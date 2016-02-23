#ifndef  color_generic_make_green
#define color_generic_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void green( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      green( )
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::green( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

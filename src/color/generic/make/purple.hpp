#ifndef  color_generic_make_purple
#define color_generic_make_purple

// ::color::make::purple( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void purple( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      purple( )
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::purple( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

#ifndef  color_generic_make_navy
#define color_generic_make_navy

// ::color::make::navy( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void navy( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      navy( )
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::navy( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

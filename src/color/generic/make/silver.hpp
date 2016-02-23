#ifndef  color_generic_make_silver
#define color_generic_make_silver

// ::color::make::silver( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void silver( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      silver( )
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::silver( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

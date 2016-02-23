#ifndef  color_generic_make_wheat
#define color_generic_make_wheat

// ::color::make::wheat( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void wheat( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      wheat( )
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::wheat( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

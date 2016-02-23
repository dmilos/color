#ifndef  color_generic_make_black
#define color_generic_make_black

// ::color::make::black( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      inline
      void 
      black( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      black()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::black( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

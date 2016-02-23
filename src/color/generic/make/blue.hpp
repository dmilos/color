#ifndef  color_generic_make_blue
#define color_generic_make_blue

// ::color::make::blue( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      inline
      void 
      blue( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      blue()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::blue( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

#ifndef  color_generic_make_olive
#define color_generic_make_olive

// ::color::make::olive( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void olive( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      olive( )
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::olive( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

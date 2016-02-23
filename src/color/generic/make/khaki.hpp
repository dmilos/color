#ifndef  color_generic_make_khaki
#define color_generic_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void khaki( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      khaki( )
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::khaki( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

#ifndef  color_generic_make_brown
#define color_generic_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void brown( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::_internal::model< category_name >
      brown( )
       {
        typedef ::color::_internal::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::brown( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

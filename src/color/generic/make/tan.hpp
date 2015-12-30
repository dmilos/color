#ifndef  color_generic_make_tan
#define color_generic_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void tan( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::_internal::model< category_name >
      tan( )
       {
        typedef ::color::_internal::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::tan( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

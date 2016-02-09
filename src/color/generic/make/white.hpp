#ifndef color_generic_make_white
#define color_generic_make_white

// ::color::make::white( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      inline
      void 
      white( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::_internal::model< category_name >
      white()
       {
        typedef ::color::_internal::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::white( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

#ifndef  color_generic_make_indigo
#define color_generic_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void indigo( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::_internal::model< category_name >
      indigo( )
       {
        typedef ::color::_internal::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::indigo( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

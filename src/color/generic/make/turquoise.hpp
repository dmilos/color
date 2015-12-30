#ifndef  color_generic_make_turquoise
#define color_generic_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void turquoise( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::_internal::model< category_name >
      turquoise( )
       {
        typedef ::color::_internal::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::turquoise( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

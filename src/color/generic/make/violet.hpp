
//RGB (127, 0, 255) 
//CMYK(50, 100, 0, 0) 
//HSV (270/360, 100%, 100%)
#ifndef  color_generic_make_violet
#define color_generic_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void violet( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::_internal::model< category_name >
      violet( )
       {
        typedef ::color::_internal::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::violet( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

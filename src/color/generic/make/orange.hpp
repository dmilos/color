// CMYK 0, 50, 100, 0
// HSV 30/360, 100%, 100%
// RGB 255, 127, 0

#ifndef  color_generic_make_orange
#define color_generic_make_orange

// ::color::make::orange( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void orange( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::_internal::trait< category_name > trait_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::_internal::model< category_name >
      orange( )
       {
        typedef ::color::_internal::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::orange( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

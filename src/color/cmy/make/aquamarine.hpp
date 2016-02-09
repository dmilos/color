#ifndef color_cmy_make_aquamarine
#define color_cmy_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 1, 0.831373 } ) - rgb(127,255,212) - #7FFFD4

     template< typename tag_name >
      inline
      void aquamarine( ::color::_internal::model< ::color::category::cmy< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmy< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::cmy< double >      right_type;

        static left_type local( right_type( { 0.5, 0, 0.168627451 } ) );

        color_parameter = local;
       }

    }
  }

#endif

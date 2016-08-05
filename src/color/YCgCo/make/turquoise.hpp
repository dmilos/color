#ifndef color_YCgCo_make_turquoise
#define color_YCgCo_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.25, 0.875, 0.8125 } ) - rgb(63,223,207) - #3FDFCF

     template< typename tag_name >
      inline
      void turquoise( ::color::model< ::color::category::YCgCo< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCgCo< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCgCo< double >      right_type;

        static left_type local( right_type( { 0.703125, -0.328125, -0.78125 } ) );

        color_parameter = local;
       }

    }
  }

#endif

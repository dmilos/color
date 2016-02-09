#ifndef color_hsv_make_green
#define color_hsv_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.5, 0 } ) - rgb(0,127,0) - #007F00

     template< typename tag_name >
      inline
      void green( ::color::_internal::model< ::color::category::hsv< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsv< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::hsv< double >      right_type;

        static left_type local( right_type( { 120, 100, 50 } ) );

        color_parameter = local;
       }

    }
  }

#endif

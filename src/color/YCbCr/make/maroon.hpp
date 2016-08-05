#ifndef color_YCbCr_make_maroon
#define color_YCbCr_make_maroon

// ::color::make::maroon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0, 0 } ) - rgb(127,0,0) - #7F0000

     template< typename tag_name >
      inline
      void maroon( ::color::model< ::color::category::YCbCr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCbCr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCbCr< double >      right_type;

        static left_type local( right_type( { 0.1494195, -0.0843685, 0.25 } ) );

        color_parameter = local;
       }

    }
  }

#endif

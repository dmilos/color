#ifndef color_YCbCr_make_teal
#define color_YCbCr_make_teal

// ::color::make::teal( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.5, 0.5 } ) - rgb(0,127,127) - #007F7F

     template< typename tag_name >
      inline
      void teal( ::color::model< ::color::category::YCbCr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCbCr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCbCr< double >      right_type;

        static left_type local( right_type( { 0.3505, 0.1495, -0.3505 } ) );

        color_parameter = local;
       }

    }
  }

#endif

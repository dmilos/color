#ifndef color_YCbCr_make_azure
#define color_YCbCr_make_azure

// ::color::make::azure( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.9375, 1, 1 } ) - rgb(239,255,255) - #EFFFFF

     template< typename tag_name >
      inline
      void azure( ::color::model< ::color::category::YCbCr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCbCr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCbCr< double >      right_type;

        static left_type local( right_type( { 0.9813125, 0.0186875, -0.0438125 } ) );

        color_parameter = local;
       }

    }
  }

#endif

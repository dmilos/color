#ifndef color_YCbCr_make_linen
#define color_YCbCr_make_linen

// ::color::make::linen( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.980392, 0.9375, 0.9 } ) - rgb(250,239,229) - #FAEFE5

     template< typename tag_name >
      inline
      void linen( ::color::model< ::color::category::YCbCr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCbCr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCbCr< double >      right_type;

        static left_type local( right_type( { 0.946049755, -0.0460497549, 0.034342402 } ) );

        color_parameter = local;
       }

    }
  }

#endif

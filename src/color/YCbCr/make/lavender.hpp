#ifndef color_YCbCr_make_lavender
#define color_YCbCr_make_lavender

// ::color::make::lavender( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.901961, 0.901961, 0.980392 } ) - rgb(230,230,250) - #E6E6FA

     template< typename tag_name >
      inline
      void lavender( ::color::model< ::color::category::YCbCr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCbCr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCbCr< double >      right_type;

        static left_type local( right_type( { 0.910929412, 0.0392147843, -0.00637741176 } ) );

        color_parameter = local;
       }

    }
  }

#endif

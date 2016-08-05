#ifndef color_YCbCr_make_tan
#define color_YCbCr_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.823529, 0.705882, 0.54902 } ) - rgb(210,180,140) - #D2B48C

     template< typename tag_name >
      inline
      void tan( ::color::model< ::color::category::YCbCr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCbCr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCbCr< double >      right_type;

        static left_type local( right_type( { 0.723102627, -0.0982834902, 0.0715783529 } ) );

        color_parameter = local;
       }

    }
  }

#endif

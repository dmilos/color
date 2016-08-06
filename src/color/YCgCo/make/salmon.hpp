#ifndef color_YCgCo_make_salmon
#define color_YCgCo_make_salmon

// ::color::make::salmon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.980392, 0.5, 0.447059 } ) - rgb(250,127,114) - #FA7F72

     template< typename tag_name >
      inline
      void salmon( ::color::model< ::color::category::YCgCo< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCgCo< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCgCo< double >      right_type;

        static left_type local( right_type( { 0.606862745, -0.106862745, 0.266666667 } ) );

        color_parameter = local;
       }

    }
  }

#endif

#ifndef color_YCgCo_make_green
#define color_YCgCo_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.5, 0 } ) - rgb(0,127,0) - #007F00

     template< typename tag_name >
      inline
      void green( ::color::model< ::color::category::YCgCo< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCgCo< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCgCo< double >      right_type;

        static left_type local( right_type( { 0.25, 0.25, 0 } ) );

        color_parameter = local;
       }

    }
  }

#endif

#ifndef color_YDbDr_make_green
#define color_YDbDr_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.5, 0 } ) - rgb(0,127,0) - #007F00

     template< typename tag_name >
      inline
      void green( ::color::model< ::color::category::YDbDr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YDbDr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YDbDr< double >      right_type;

        static left_type local( right_type( { 0.2934055, 0.62281089044893, 0.786808919870568 } ) );

        color_parameter = local;
       }

    }
  }

#endif

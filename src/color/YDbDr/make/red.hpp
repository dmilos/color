#ifndef color_YDbDr_make_red
#define color_YDbDr_make_red

// ::color::make::red( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0, 0 } ) - rgb(255,0,0) - #FF0000

     template< typename tag_name >
      inline
      void red( ::color::model< ::color::category::YDbDr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YDbDr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YDbDr< double >      right_type;

        static left_type local( right_type( { 0.298839, -3.30034456, -1.88026376 } ) );

        color_parameter = local;
       }

    }
  }

#endif

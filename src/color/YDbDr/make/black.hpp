#ifndef color_YDbDr_make_black
#define color_YDbDr_make_black

// ::color::make::black( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 0 } ) - rgb(0,0,0) - #000000

     template< typename tag_name >
      inline
      void black( ::color::model< ::color::category::YDbDr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YDbDr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YDbDr< double >      right_type;

        static left_type local( right_type( { 0, -2.666, 0 } ) );

        color_parameter = local;
       }

    }
  }

#endif

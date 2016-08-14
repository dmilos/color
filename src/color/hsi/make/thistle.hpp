#ifndef color_hsi_make_thistle
#define color_hsi_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.847059, 0.74902, 0.847059 } ) - rgb(216,191,216) - #D8BFD8

     template< typename tag_name >
      inline
      void thistle( ::color::model< ::color::category::hsi< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsi< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hsi< double >      right_type;

        static left_type local( right_type( { 300, 8.02568218298556, 81.437908496732 } ) );

        color_parameter = local;
       }

    }
  }

#endif

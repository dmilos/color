#ifndef color_hsv_make_chocolate
#define color_hsv_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.823529, 0.411765, 0.117647 } ) - rgb(210,105,30) - #D2691E

     template< typename tag_name >
      inline
      void chocolate( ::color::model< ::color::category::hsv< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsv< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hsv< double >      right_type;

        static left_type local( right_type( { 25, 85.7142857, 82.3529412 } ) );

        color_parameter = local;
       }

    }
  }

#endif

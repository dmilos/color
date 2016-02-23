#ifndef color_hsv_make_beige
#define color_hsv_make_beige

// ::color::make::beige( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.960784, 0.960784, 0.862745 } ) - rgb(245,245,220) - #F5F5DC

     template< typename tag_name >
      inline
      void beige( ::color::model< ::color::category::hsv< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsv< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hsv< double >      right_type;

        static left_type local( right_type( { 60, 10.2040816, 96.0784314 } ) );

        color_parameter = local;
       }

    }
  }

#endif

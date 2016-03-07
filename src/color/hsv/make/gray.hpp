#ifndef color_hsv_make_gray50
#define color_hsv_make_gray50

// ::color::make::gray50( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0.5, 0.5 } ) - rgb(127,127,127) - #7F7F7F

     template< typename tag_name >
      inline
      void gray
       (
                  ::color::model< ::color::category::hsv< tag_name > > & color_parameter
        ,typename ::color::trait::scalar< ::color::category::hsv< tag_name > >::input_const_type    percent
       )
       {
        typedef ::color::category::hsv< tag_name >      category_left_type;
        typedef ::color::model< category_left_type  >            left_type;

        typedef ::color::hsv< double >      right_type;

        color_parameter = right_type( { 0, 0, percent } );
       }

     template< typename tag_name >
      inline
      void gray50( ::color::model< ::color::category::hsv< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsv< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hsv< double >      right_type;

        static left_type local( right_type( { 0, 0, 50 } ) );

        color_parameter = local;
       }

    }
  }

#endif

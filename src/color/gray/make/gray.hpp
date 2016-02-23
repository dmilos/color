#ifndef color_gray_make_gray50
#define color_gray_make_gray50

// ::color::make::gray50( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0.5, 0.5 } ) - rgb(127,127,127) - #7F7F7F

     template< typename tag_name >
      inline
      void gray50( ::color::model< ::color::category::gray< tag_name > > & color_parameter )
       {
        typedef ::color::category::gray< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::gray< double >      right_type;

        static left_type local( right_type( { 0.5 } ) );

        color_parameter = local;
       }

    }
  }

#endif

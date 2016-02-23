#ifndef color_gray_make_cyan
#define color_gray_make_cyan

// ::color::make::cyan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 1, 1 } ) - rgb(0,255,255) - #00FFFF

     template< typename tag_name >
      inline
      void cyan( ::color::model< ::color::category::gray< tag_name > > & color_parameter )
       {
        typedef ::color::category::gray< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::gray< double >      right_type;

        static left_type local( right_type( { 0.7873272 } ) );

        color_parameter = local;
       }

    }
  }

#endif

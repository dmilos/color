#ifndef color_YCbCr_make_white
#define color_YCbCr_make_white

// ::color::make::white( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 1 } ) - rgb(255,255,255) - #FFFFFF

     template< typename tag_name >
      inline
      void white( ::color::model< ::color::category::YCbCr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCbCr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCbCr< double >      right_type;

        static left_type local( right_type( { 1, -2.22044605E-16, -2.22044605E-16 } ) );

        color_parameter = local;
       }

    }
  }

#endif

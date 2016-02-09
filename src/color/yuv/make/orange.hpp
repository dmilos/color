#ifndef color_yuv_make_orange
#define color_yuv_make_orange

// ::color::make::orange( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.65, 0 } ) - rgb(255,165,0) - #FFA500

     template< typename tag_name >
      inline
      void orange( ::color::_internal::model< ::color::category::yuv< tag_name > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::yuv< double >      right_type;

        static left_type local( right_type( { 0.68055, -0.334898194, 0.280259272 } ) );

        color_parameter = local;
       }

    }
  }

#endif

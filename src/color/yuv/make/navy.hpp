#ifndef color_yuv_make_navy
#define color_yuv_make_navy

// ::color::make::navy( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 0.5 } ) - rgb(0,0,127) - #00007F

     template< typename tag_name >
      inline
      void navy( ::color::model< ::color::category::yuv< tag_name > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double >      right_type;

        static left_type local( right_type( { 0.057, 0.218, -0.0500071327 } ) );

        color_parameter = local;
       }

    }
  }

#endif

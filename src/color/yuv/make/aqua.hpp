#ifndef color_yuv_make_aqua
#define color_yuv_make_aqua

// ::color::make::aqua( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 1, 1 } ) - rgb(0,255,255) - #00FFFF

     template< typename tag_name >
      inline
      void aqua( ::color::model< ::color::category::yuv< tag_name > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double >      right_type;

        static left_type local( right_type( { 0.701, 0.147137698, -0.615 } ) );

        color_parameter = local;
       }

    }
  }

#endif

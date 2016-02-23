#ifndef color_yuv_make_ivory
#define color_yuv_make_ivory

// ::color::make::ivory( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 0.9375 } ) - rgb(255,255,239) - #FFFFEF

     template< typename tag_name >
      inline
      void ivory( ::color::model< ::color::category::yuv< tag_name > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double >      right_type;

        static left_type local( right_type( { 0.992875, -0.02725, 0.00625089158 } ) );

        color_parameter = local;
       }

    }
  }

#endif

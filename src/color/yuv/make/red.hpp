#ifndef color_yuv_make_red
#define color_yuv_make_red

// ::color::make::red( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0, 0 } ) - rgb(255,0,0) - #FF0000

     template< typename tag_name >
      inline
      void red( ::color::_internal::model< ::color::category::yuv< tag_name > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::yuv< double >      right_type;

        static left_type local( right_type( { 0.299, -0.147137698, 0.615 } ) );

        color_parameter = local;
       }

    }
  }

#endif

#ifndef color_yuv_make_maroon
#define color_yuv_make_maroon

// ::color::make::maroon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0, 0 } ) - rgb(127,0,0) - #7F0000

     template< typename tag_name >
      inline
      void maroon( ::color::_internal::model< ::color::category::yuv< tag_name > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::yuv< double >      right_type;

        static left_type local( right_type( { 0.1495, -0.0735688488, 0.3075 } ) );

        color_parameter = local;
       }

    }
  }

#endif

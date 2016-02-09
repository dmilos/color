#ifndef color_yuv_make_teal
#define color_yuv_make_teal

// ::color::make::teal( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.5, 0.5 } ) - rgb(0,127,127) - #007F7F

     template< typename tag_name >
      inline
      void teal( ::color::_internal::model< ::color::category::yuv< tag_name > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::yuv< double >      right_type;

        static left_type local( right_type( { 0.3505, 0.0735688488, -0.3075 } ) );

        color_parameter = local;
       }

    }
  }

#endif

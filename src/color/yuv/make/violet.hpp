#ifndef color_yuv_make_violet
#define color_yuv_make_violet

// ::color::make::violet( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.933333, 0.509804, 0.933333 } ) - rgb(238,130,238) - #EE82EE

     template< typename tag_name >
      inline
      void violet( ::color::_internal::model< ::color::category::yuv< tag_name > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::yuv< double >      right_type;

        static left_type local( right_type( { 0.684721569, 0.122341681, 0.218111605 } ) );

        color_parameter = local;
       }

    }
  }

#endif

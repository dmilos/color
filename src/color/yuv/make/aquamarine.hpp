#ifndef color_yuv_make_aquamarine
#define color_yuv_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 1, 0.831373 } ) - rgb(127,255,212) - #7FFFD4

     template< typename tag_name >
      inline
      void aquamarine( ::color::model< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_601_entity > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name, ::color::constant::yuv::BT_601_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double, ::color::constant::yuv::BT_601_entity >      right_type;

        static left_type local( right_type( { 0.831297951, 3.67241519E-05, -0.290586955 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void aquamarine( ::color::model< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_709_entity > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name, ::color::constant::yuv::BT_709_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double, ::color::constant::yuv::BT_709_entity >      right_type;

        static left_type local( right_type( { 0.881492864, -0.0235523479, -0.297993186 } ) );

        color_parameter = local;
       }

    }
  }

#endif

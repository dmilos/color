#ifndef color_yuv_make_coral
#define color_yuv_make_coral

// ::color::make::coral( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.5, 0.31 } ) - rgb(255,127,79) - #FF7F4F

     template< typename tag_name >
      inline
      void coral( ::color::model< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_601_entity > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name, ::color::constant::yuv::BT_601_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double, ::color::constant::yuv::BT_601_entity >      right_type;

        static left_type local( right_type( { 0.627693, -0.156398293, 0.326556675 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void coral( ::color::model< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_709_entity > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name, ::color::constant::yuv::BT_709_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double, ::color::constant::yuv::BT_709_entity >      right_type;

        static left_type local( right_type( { 0.5926232, -0.132809221, 0.318211747 } ) );

        color_parameter = local;
       }

    }
  }

#endif

#ifndef color_yuv_make_gold
#define color_yuv_make_gold

// ::color::make::gold( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.843137, 0 } ) - rgb(255,215,0) - #FFD700

     template< typename tag_name >
      inline
      void gold( ::color::model< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_601_entity > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name, ::color::constant::yuv::BT_601_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double, ::color::constant::yuv::BT_601_entity >      right_type;

        static left_type local( right_type( { 0.793601216, -0.390684955, 0.181035814 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void gold( ::color::model< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_709_entity > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name, ::color::constant::yuv::BT_709_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double, ::color::constant::yuv::BT_709_entity >      right_type;

        static left_type local( right_type( { 0.815644278, -0.383284461, 0.144004657 } ) );

        color_parameter = local;
       }

    }
  }

#endif

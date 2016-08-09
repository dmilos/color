#ifndef color_yuv_make_gray50
#define color_yuv_make_gray50

// ::color::make::gray50( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0.5, 0.5 } ) - rgb(127,127,127) - #7F7F7F

     template< typename tag_name >
      inline
      void gray
       (
                  ::color::model< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_601_entity > > & color_parameter
        ,typename ::color::trait::scalar< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_601_entity > >::input_const_type    percent
       )
       {
        typedef ::color::category::yuv< tag_name, ::color::constant::yuv::BT_601_entity >      category_left_type;
        typedef ::color::model< category_left_type  >            left_type;

        typedef ::color::yuv< double, ::color::constant::yuv::BT_601_entity >      right_type;

        color_parameter = right_type( { percent/100, 0, 0 } );
       }

     template< typename tag_name >
      inline
      void gray
       (
                  ::color::model< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_709_entity > > & color_parameter
        ,typename ::color::trait::scalar< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_709_entity > >::input_const_type    percent
       )
       {
        typedef ::color::category::yuv< tag_name, ::color::constant::yuv::BT_709_entity >      category_left_type;
        typedef ::color::model< category_left_type  >            left_type;

        typedef ::color::yuv< double, ::color::constant::yuv::BT_601_entity >      right_type;

        color_parameter = right_type( { percent/100, 0, 0 } );
       }

     template< typename tag_name >
      inline
      void gray50( ::color::model< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_601_entity > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name, ::color::constant::yuv::BT_601_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double, ::color::constant::yuv::BT_709_entity >      right_type;

        static left_type local( right_type( { 0.5, 0, 0 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void gray50( ::color::model< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_709_entity > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name, ::color::constant::yuv::BT_709_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double, ::color::constant::yuv::BT_709_entity >      right_type;

        static left_type local( right_type( { 0.5, 0, 0 } ) );

        color_parameter = local;
       }


    }
  }

#endif

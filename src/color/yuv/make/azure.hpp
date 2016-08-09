#ifndef color_yuv_make_azure
#define color_yuv_make_azure

// ::color::make::azure( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.9375, 1, 1 } ) - rgb(239,255,255) - #EFFFFF

     template< typename tag_name >
      inline
      void azure( ::color::model< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_601_entity > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name, ::color::constant::yuv::BT_601_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double, ::color::constant::yuv::BT_601_entity >      right_type;

        static left_type local( right_type( { 0.981322562, 0.0091947866, -0.0384375 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void azure( ::color::model< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_709_entity > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name, ::color::constant::yuv::BT_709_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double, ::color::constant::yuv::BT_709_entity >      right_type;

        static left_type local( right_type( { 0.986707944, 0.00624615259, -0.0384375 } ) );

        color_parameter = local;
       }

    }
  }

#endif

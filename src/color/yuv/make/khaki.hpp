#ifndef color_yuv_make_khaki
#define color_yuv_make_khaki

// ::color::make::khaki( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.9375, 0.9, 0.55 } ) - rgb(239,229,140) - #EFE58C

     template< typename tag_name >
      inline
      void khaki( ::color::model< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_601_entity > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name, ::color::constant::yuv::BT_601_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double, ::color::constant::yuv::BT_601_entity >      right_type;

        static left_type local( right_type( { 0.8713125, -0.158117664, 0.0580674929 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void khaki( ::color::model< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_709_entity > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name, ::color::constant::yuv::BT_709_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double, ::color::constant::yuv::BT_709_entity >      right_type;

        static left_type local( right_type( { 0.8713125, -0.158117664, 0.0580674929 } ) );

        color_parameter = local;
       }

    }
  }

#endif

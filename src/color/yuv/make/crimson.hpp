#ifndef color_yuv_make_crimson
#define color_yuv_make_crimson

// ::color::make::crimson( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.862745, 0.0784314, 0.235294 } ) - rgb(220,20,60) - #DC143C

     template< typename tag_name >
      inline
      void crimson( ::color::model< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_601_entity > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name, ::color::constant::yuv::BT_601_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double, ::color::constant::yuv::BT_601_entity >      right_type;

        static left_type local( right_type( { 0.330752157, -0.0469934004, 0.466619876 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void crimson( ::color::model< ::color::category::yuv< tag_name, ::color::constant::yuv::BT_709_entity > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name, ::color::constant::yuv::BT_709_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double, ::color::constant::yuv::BT_709_entity >      right_type;

        static left_type local( right_type( { 0.256555216, -0.00999093444, 0.473509394 } ) );

        color_parameter = local;
       }

    }
  }

#endif

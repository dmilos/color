#ifndef color_YPbPr_make_peru
#define color_YPbPr_make_peru

// ::color::make::peru( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.8, 0.52, 0.25 } ) - rgb(204,132,63) - #CC843F

     template< typename tag_name >
      inline
      void peru( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_601_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_601_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double, ::color::constant::YPbPr::BT_601_entity >      right_type;

        static left_type local( right_type( { 0.57280042, 0.31775312, 0.66195424 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void peru( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_709_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_709_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double, ::color::constant::YPbPr::BT_709_entity >      right_type;

        static left_type local( right_type( { 0.57280042, 0.31775312, 0.66195424 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void peru( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_2020_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_2020_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double, ::color::constant::YPbPr::BT_2020_entity >      right_type;

        static left_type local( right_type( { 0.57280042, 0.31775312, 0.66195424 } ) );

        color_parameter = local;
       }

    }
  }

#endif

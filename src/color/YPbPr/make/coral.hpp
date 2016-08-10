#ifndef color_YPbPr_make_coral
#define color_YPbPr_make_coral

// ::color::make::coral( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.5, 0.31 } ) - rgb(255,127,79) - #FF7F4F

     template< typename tag_name >
      inline
      void coral( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_601_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_601_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double, ::color::constant::YPbPr::BT_601_entity >      right_type;

        static left_type local( right_type( { 0.627693, 0.320631, 0.76544928 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void coral( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_709_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_709_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double, ::color::constant::YPbPr::BT_709_entity >      right_type;

        static left_type local( right_type( { 0.627693, 0.320631, 0.76544928 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void coral( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_2020_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_2020_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double, ::color::constant::YPbPr::BT_2020_entity >      right_type;

        static left_type local( right_type( { 0.627693, 0.320631, 0.76544928 } ) );

        color_parameter = local;
       }

    }
  }

#endif

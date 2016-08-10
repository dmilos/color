#ifndef color_YPbPr_make_aquamarine
#define color_YPbPr_make_aquamarine

// ::color::make::aquamarine( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 1, 0.831373 } ) - rgb(127,255,212) - #7FFFD4

     template< typename tag_name >
      inline
      void aquamarine( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_601_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_601_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double, ::color::constant::YPbPr::BT_601_entity >      right_type;

        static left_type local( right_type( { 0.831297951, 0.5, 0.263711435 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void aquamarine( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_709_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_709_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double, ::color::constant::YPbPr::BT_709_entity >      right_type;

        static left_type local( right_type( { 0.831297951, 0.5, 0.263711435 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void aquamarine( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_2020_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_2020_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double, ::color::constant::YPbPr::BT_2020_entity >      right_type;

        static left_type local( right_type( { 1.72594196, 0.360439568, 2.8814 } ) );

        color_parameter = local;
       }

    }
  }

#endif

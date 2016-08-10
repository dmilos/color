#ifndef color_YPbPr_make_thistle
#define color_YPbPr_make_thistle

// ::color::make::thistle( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.847059, 0.74902, 0.847059 } ) - rgb(216,191,216) - #D8BFD8

     template< typename tag_name >
      inline
      void thistle( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_601_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_601_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double >      right_type;

        static left_type local( right_type( { 0.789528333, 0.532476016, 0.541047843 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void thistle( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_709_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_709_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double >      right_type;

        static left_type local( right_type( { 0.789528333, 0.532476016, 0.541047843 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void thistle( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_2020_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_2020_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double >      right_type;

        static left_type local( right_type( { 0.789528333, 0.532476016, 0.541047843 } ) );

        color_parameter = local;
       }

    }
  }

#endif

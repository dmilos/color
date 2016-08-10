#ifndef color_YPbPr_make_orange
#define color_YPbPr_make_orange

// ::color::make::orange( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.65, 0 } ) - rgb(255,165,0) - #FFA500

     template< typename tag_name >
      inline
      void orange( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_601_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_601_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double >      right_type;

        static left_type local( right_type( { 0.68026615, 0.1159414, 0.7278528 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void orange( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_709_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_709_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double >      right_type;

        static left_type local( right_type( { 0.68026615, 0.1159414, 0.7278528 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void orange( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_2020_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_2020_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double >      right_type;

        static left_type local( right_type( { 0.68026615, 0.1159414, 0.7278528 } ) );

        color_parameter = local;
       }

    }
  }

#endif

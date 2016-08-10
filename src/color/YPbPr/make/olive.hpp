#ifndef color_YPbPr_make_olive
#define color_YPbPr_make_olive

// ::color::make::olive( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0.5, 0 } ) - rgb(127,127,0) - #7F7F00

     template< typename tag_name >
      inline
      void olive( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_601_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_601_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double >      right_type;

        static left_type local( right_type( { 0.442825, 0.2499995, 0.540656 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void olive( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_709_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_709_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double >      right_type;

        static left_type local( right_type( { 0.442825, 0.2499995, 0.540656 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void olive( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_2020_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_2020_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double >      right_type;

        static left_type local( right_type( { 0.442825, 0.2499995, 0.540656 } ) );

        color_parameter = local;
       }

    }
  }

#endif

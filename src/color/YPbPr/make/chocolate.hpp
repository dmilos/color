#ifndef color_YPbPr_make_chocolate
#define color_YPbPr_make_chocolate

// ::color::make::chocolate( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.823529, 0.411765, 0.117647 } ) - rgb(210,105,30) - #D2691E

     template< typename tag_name >
      inline
      void chocolate( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_601_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_601_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double >      right_type;

        static left_type local( right_type( { 0.501183706, 0.283460824, 0.729797647 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void chocolate( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_709_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_709_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double >      right_type;

        static left_type local( right_type( { 0.501183706, 0.283460824, 0.729797647 } ) );

        color_parameter = local;
       }

     template< typename tag_name >
      inline
      void chocolate( ::color::model< ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_2020_entity > > & color_parameter )
       {
        typedef ::color::category::YPbPr< tag_name, ::color::constant::YPbPr::BT_2020_entity >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YPbPr< double >      right_type;

        static left_type local( right_type( { 0.501183706, 0.283460824, 0.729797647 } ) );

        color_parameter = local;
       }

    }
  }

#endif

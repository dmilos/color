#ifndef color_YDbDr_make_azure
#define color_YDbDr_make_azure

// ::color::make::azure( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.9375, 1, 1 } ) - rgb(239,255,255) - #EFFFFF

     template< typename tag_name >
      inline
      void azure( ::color::model< ::color::category::YDbDr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YDbDr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YDbDr< double >      right_type;

        static left_type local( right_type( { 0.9813225625, -0.0396465351899651, 0.117516485091743 } ) );

        color_parameter = local;
       }

    }
  }

#endif

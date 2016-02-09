#ifndef color_yiq_make_azure
#define color_yiq_make_azure

// ::color::make::azure( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.9375, 1, 1 } ) - rgb(239,255,255) - #EFFFFF

     template< typename tag_name >
      inline
      void azure( ::color::_internal::model< ::color::category::yiq< tag_name > > & color_parameter )
       {
        typedef ::color::category::yiq< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::yiq< double >      right_type;

        static left_type local( right_type( { 0.9813125, -0.0372322584, -0.0132160251 } ) );

        color_parameter = local;
       }

    }
  }

#endif

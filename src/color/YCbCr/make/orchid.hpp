#ifndef color_YCbCr_make_orchid
#define color_YCbCr_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.854902, 0.439216, 0.839216 } ) - rgb(218,112,214) - #DA70D6

     template< typename tag_name >
      inline
      void orchid( ::color::model< ::color::category::YCbCr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YCbCr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YCbCr< double >      right_type;

        static left_type local( right_type( { 0.609105882, 0.230109804, 0.245796078 } ) );

        color_parameter = local;
       }

    }
  }

#endif

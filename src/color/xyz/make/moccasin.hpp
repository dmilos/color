#ifndef color_xyz_make_moccasin
#define color_xyz_make_moccasin

// ::color::make::moccasin( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.894118, 0.709804 } ) - rgb(255,228,181) - #FFE4B5

     template< typename tag_name >
      inline
      void moccasin( ::color::model< ::color::category::xyz< tag_name > > & color_parameter )
       {
        typedef ::color::category::xyz< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::xyz< double >      right_type;

        static left_type local( right_type( { 0.904764706, 0.122289061, -0.0349568838 } ) );

        color_parameter = local;
       }

    }
  }

#endif

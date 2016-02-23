#ifndef color_rgb_make_brown
#define color_rgb_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 165.0/255.0, 42.0/255.0, 42.0/255.0 } ) - rgb(165,42,42) - #A52A2A

     template< typename tag_name >
      inline
      void brown( ::color::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xA5, 0x2A, 0x2A } ) );

        color_parameter = local;
       }

    }
  }

#endif

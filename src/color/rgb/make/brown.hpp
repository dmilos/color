#ifndef color_rgb_make_brown
#define color_rgb_make_brown

// ::color::make::brown( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 165.0/255.0,  42.0/255.0,  42.0/255.0 } ) - rgb(165,42,42) - #a52a2a

     template< typename tag_name >
      inline
      void brown( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::category::rgb< std::uint8_t > category_right_type;

        typedef ::color::_internal::model< category_left_type  > left_type;
        typedef ::color::_internal::model< category_right_type > right_type;

        static left_type local( right_type( { 0xA5, 0x2A, 0x2A } ) );

        color_parameter = local;
       }

    }
  }

#endif

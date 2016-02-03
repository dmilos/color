#ifndef color_rgb_make_sienna
#define color_rgb_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 160.0/255.0,  82.0/255.0,  45.0/255.0 } ) - rgb(160,82,45) - #A0522D

     template< typename tag_name >
      inline
      void sienna( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xA0, 0x52, 0x2D } ) );

        color_parameter = local;
       }

    }
  }

#endif

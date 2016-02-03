#ifndef color_rgb_make_peru
#define color_rgb_make_peru

// ::color::make::peru( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 205.0/255.0, 133.0/255.0,  63.0/255.0 } ) - rgb(205,133,63) - #cd853f

     template< typename tag_name >
      inline
      void peru( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xCD, 0x85, 0x3F } ) );

        color_parameter = local;
       }

    }
  }

#endif

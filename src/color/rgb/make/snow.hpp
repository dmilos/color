#ifndef color_rgb_make_snow
#define color_rgb_make_snow

// ::color::make::snow( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 255.0/255.0, 250.0/255.0, 250.0/255.0 } ) - rgb(255,250,250) - #FFFAFA

     template< typename tag_name >
      inline
      void snow( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0xFF, 0xFA, 0xFA } ) );

        color_parameter = local;
       }

    }
  }

#endif

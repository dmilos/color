#ifndef color_rgb_make_indigo
#define color_rgb_make_indigo

// ::color::make::indigo( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 75.0/255.0, 0.0/255.0, 130.0/255.0 } ) - rgb(75,0,130) - #4B0082

     template< typename tag_name >
      inline
      void indigo( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::rgb< std::uint8_t >      right_type;

        static left_type local( right_type( { 0x4B, 0x00, 0x82 } ) );

        color_parameter = local;
       }

    }
  }

#endif

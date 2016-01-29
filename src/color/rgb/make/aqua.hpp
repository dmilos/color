#ifndef color_rgb_make_aqua
#define color_rgb_make_aqua

// ::color::make::aqua( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 1, 1 } ) - rgb(0,255,255) - #00ffff

     template< typename tag_name >
      inline
      void aqua( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {// Same as Cyan
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::category::rgb< std::uint8_t > category_right_type;

        typedef ::color::_internal::model< category_left_type > left_type;
        enum
         {
           red_p   = ::color::place::_internal::red<category_left_type>::position_enum
          ,green_p = ::color::place::_internal::green<category_left_type>::position_enum
          ,blue_p  = ::color::place::_internal::blue<category_left_type>::position_enum
         };

        typedef  ::color::_internal::reformat< category_left_type, category_right_type, double > reformat_type;

        static left_type local
         ( {
            reformat_type::template process< red_p  , 0 >( 0x00 )
           ,reformat_type::template process< green_p, 1 >( 0xFF )
           ,reformat_type::template process< blue_p , 2 >( 0xFF )
         } );

        color_parameter = local;
       }


    }
  }

#endif

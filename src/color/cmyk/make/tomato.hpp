#ifndef color_cmyk_make_tomato
#define color_cmyk_make_tomato

// ::color::make::tomato( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.388235, 0.278431 } ) - rgb(255,99,71) - #FF6347

     template< typename tag_name >
      inline
      void tomato( ::color::_internal::model< ::color::category::cmyk< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmyk< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::cmyk< double >      right_type;

        static left_type local( right_type( { 0, 0.611764706, 0.721568627, 0 } ) );

        color_parameter = local;
       }

    }
  }

#endif

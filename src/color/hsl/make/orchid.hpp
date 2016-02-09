#ifndef color_hsl_make_orchid
#define color_hsl_make_orchid

// ::color::make::orchid( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.854902, 0.439216, 0.839216 } ) - rgb(218,112,214) - #DA70D6

     template< typename tag_name >
      inline
      void orchid( ::color::_internal::model< ::color::category::hsl< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsl< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::hsl< double >      right_type;

        static left_type local( right_type( { 302.264151, 58.8888889, 64.7058824 } ) );

        color_parameter = local;
       }

    }
  }

#endif

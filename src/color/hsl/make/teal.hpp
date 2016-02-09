#ifndef color_hsl_make_teal
#define color_hsl_make_teal

// ::color::make::teal( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.5, 0.5 } ) - rgb(0,127,127) - #007F7F

     template< typename tag_name >
      inline
      void teal( ::color::_internal::model< ::color::category::hsl< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsl< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::hsl< double >      right_type;

        static left_type local( right_type( { 180, 100, 25 } ) );

        color_parameter = local;
       }

    }
  }

#endif

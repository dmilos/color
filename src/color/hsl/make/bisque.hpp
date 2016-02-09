#ifndef color_hsl_make_bisque
#define color_hsl_make_bisque

// ::color::make::bisque( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.875, 0.75 } ) - rgb(255,223,191) - #FFDFBF

     template< typename tag_name >
      inline
      void bisque( ::color::_internal::model< ::color::category::hsl< tag_name > > & color_parameter )
       {
        typedef ::color::category::hsl< tag_name >         category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::hsl< double >      right_type;

        static left_type local( right_type( { 30, 100, 87.5 } ) );

        color_parameter = local;
       }

    }
  }

#endif

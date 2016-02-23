#ifndef color_rgb_make_turquoise
#define color_rgb_make_turquoise

// ::color::make::turquoise( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 64.0/255.0, 224.0/255.0, 208.0/255.0 } ) - rgb(64,224,208) - #40E0D0

     template< typename tag_name >
      inline
      void turquoise( ::color::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::rgb< double >      right_type;

        static left_type local( right_type( { 0.25, 0.875, 0.8125 } ) );

        color_parameter = local;
       }

    }
  }

#endif

#ifndef color_yiq_make_tan
#define color_yiq_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.823529, 0.705882, 0.54902 } ) - rgb(210,180,140) - #D2B48C

     template< typename tag_name >
      inline
      void tan( ::color::model< ::color::category::yiq< tag_name > > & color_parameter )
       {
        typedef ::color::category::yiq< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yiq< double >      right_type;

        static left_type local( right_type( { 0.723176471, 0.120478494, -0.0239282104 } ) );

        color_parameter = local;
       }

    }
  }

#endif

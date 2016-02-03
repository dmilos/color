#ifndef color_rgb_make_salmon
#define color_rgb_make_salmon

// ::color::make::salmon( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 250/255, 128/255, 114/255 } ) - rgb(221,160,221) - #FA8072

     template< typename tag_name >
      inline
      void salmon( ::color::_internal::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::_internal::model< category_left_type  > left_type;

        typedef ::color::rgb< double >      right_type;

        static left_type local( right_type( { 250/255.0, 0.5, 114/255.0  } ) );

        color_parameter = local;
       }

    }
  }

#endif

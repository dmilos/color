#ifndef  color_generic_constant_make
#define  color_generic_constant_make

// ::color::make::_internal::constant( c )

 namespace color
  {
   namespace constant
    {
     template< typename color_name, typename category_name >
      struct make
       {
        typedef category_name category_type;
        typedef color_name       color_type;

        typedef ::color::trait::container<category_type>       container_type;

          static void process( container_type & m )
           {
            // do nothing;
           }
       };

    }
  }

#endif

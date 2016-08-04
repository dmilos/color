#ifndef  color_generic_constant__make
#define  color_generic_constant__make

// ::color::make::constant::_internal::make( c )

 namespace color
  {
   namespace constant
    {

     //namespace /*_internal*/
     // {

       template< typename constant_name, typename category_name >
        struct make
         {
          typedef category_name   category_type;
          typedef constant_name   constant_type;
       
          typedef typename ::color::trait::container<category_type>::output_type       container_output_type;
       
          static void process( container_output_type & m )
           {
            // do nothing;
           }
         };

     // }
    }
  }

#endif

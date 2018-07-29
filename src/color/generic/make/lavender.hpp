#ifndef  color_generic_make_lavender
#define color_generic_make_lavender

// ::color::make::lavender( c )

// TODO #include "model.hpp"
#include "../constant/lavender.hpp"


 namespace color
  {
   namespace constant
    {

     template< typename category_name >
      struct make< ::color::constant::lavender_t, category_name >
       {
        typedef category_name                         category_type;

        typedef ::color::model<category_type>            model_type;
        typedef ::color::rgb<std::uint8_t>                       rgb_type;
        typedef ::color::constant::lavender_t      constant_type;

        typedef typename ::color::trait::container<category_type>::output_type       container_output_type;


        inline static void process( container_output_type & container )
         {
          static model_type  s_model{ rgb_type{ 0xE6, 0xE6, 0xFA } };
          container = s_model.container();
         }
       };

    }
  }

#endif

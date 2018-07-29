#ifndef  color_generic_make_moccasin
#define color_generic_make_moccasin

// ::color::make::moccasin( c )

// TODO #include "model.hpp"
#include "../constant/moccasin.hpp"


 namespace color
  {
   namespace constant
    {

     template< typename category_name >
      struct make< ::color::constant::moccasin_t, category_name >
       {
        typedef category_name                         category_type;

        typedef ::color::model<category_type>            model_type;
        typedef ::color::rgb<std::uint8_t>                 rgb_type;
        typedef ::color::constant::moccasin_t         constant_type;

        typedef typename ::color::trait::container<category_type>::output_type       container_output_type;


        inline static void process( container_output_type & container )
         {
          static model_type  s_model{ rgb_type{ 0xFF, 0xE4, 0xB5 } }; // TODO rgb 1, 0.9  0.7;
          container = s_model.container();
         }
       };

    }
  }

#endif

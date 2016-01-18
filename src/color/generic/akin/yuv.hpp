#ifndef color_akin_yuv
#define color_akin_yuv

// ::color::akin::yuv< non_yuv_category >::akin_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct yuv
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif

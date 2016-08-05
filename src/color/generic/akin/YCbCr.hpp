#ifndef color_akin_YCbCr
#define color_akin_YCbCr

// ::color::akin::YCbCr< non_YCbCr_category >::akin_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct YCbCr
      {
       typedef category_name category_type;
       typedef void              akin_type;
      };

   }
 }

#endif 
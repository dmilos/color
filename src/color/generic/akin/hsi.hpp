#ifndef color_akin_hsi
#define color_akin_hsi

// ::color::akin::hsi< non_hsi_category >::akin_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct hsi
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif

#ifndef color_akin_hcg
#define color_akin_hcg

// ::color::akin::hcg< non_hcg_category >::akin_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct hcg
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif

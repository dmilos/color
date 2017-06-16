#ifndef color_akin_LabCH
#define color_akin_LabCH

// ::color::akin::LabCH< non_LabCH_category >::akin_type;

namespace color
 {
  namespace akin
   {

    template< typename category_name >
     struct LabCH
      {
       typedef category_name category_type;
       typedef void akin_type;
      };

   }
 }

#endif

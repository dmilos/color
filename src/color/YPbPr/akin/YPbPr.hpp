#ifndef color_YPbPr_akin_YPbPr
#define color_YPbPr_akin_YPbPr

#include "../../generic/akin/YPbPr.hpp"
#include "../category.hpp"
#include "../../YPbPr/category.hpp"

namespace color
 {
  namespace akin
   {

    template< typename tag_name, ::color::constant::YPbPr::reference_enum reference_number >
     struct YPbPr< ::color::category::YPbPr< tag_name, reference_number >, reference_number >
      {
       public:
         typedef ::color::category::YPbPr< tag_name, reference_number > akin_type;
      };

   }
 }

#endif

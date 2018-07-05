#ifndef color_lms_convert_lms
#define color_lms_convert_lms

//#include "../place/place.hpp"

#include "../../_internal/convert.hpp"

#include "../../_internal/reformat.hpp"







namespace color
 {
  namespace _internal
   {

    template
     <
       typename tag_left_name,  ::color::constant::lms::reference_enum  left_reference_number
      ,typename tag_right_name, ::color::constant::lms::reference_enum right_reference_number
     >
     struct convert
      <
        ::color::category::lms< tag_left_name ,  left_reference_number >
       ,::color::category::lms< tag_right_name, right_reference_number >
      >
      {
       public:
         typedef ::color::category::lms< tag_left_name ,  left_reference_number> category_left_type;
         typedef ::color::category::lms< tag_right_name, right_reference_number> category_right_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::_internal::reformat< category_left_type, category_right_type >    reformat_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           container_left_trait_type::template set<0>( left, reformat_type::template process<0,0>( container_right_trait_type::template get<0>( right ) ) );
           container_left_trait_type::template set<1>( left, reformat_type::template process<1,1>( container_right_trait_type::template get<1>( right ) ) );
           container_left_trait_type::template set<2>( left, reformat_type::template process<2,2>( container_right_trait_type::template get<2>( right ) ) );
          }
       };

   }
 }

#endif
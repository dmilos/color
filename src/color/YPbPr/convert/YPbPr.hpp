#ifndef color_YPbPr_convert_YPbPr
#define color_YPbPr_convert_YPbPr

//#include "../place/place.hpp"

#include "../../_internal/convert.hpp"

#include "../../_internal/reformat.hpp"









namespace color
 {
  namespace _internal
   {

    template
     <
       typename tag_left_name,  ::color::constant::YPbPr::reference_enum left_reference_number
      ,typename tag_right_name, ::color::constant::YPbPr::reference_enum right_reference_number
     >
     struct convert
      <
        ::color::category::YPbPr<  tag_left_name, left_reference_number  >
       ,::color::category::YPbPr< tag_right_name, right_reference_number >
      >
      {
       public:
         typedef ::color::category::YPbPr< tag_left_name , left_reference_number  > category_left_type;
         typedef ::color::category::YPbPr< tag_right_name, right_reference_number > category_right_type;

         typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

         typedef ::color::model< category_left_type >    left_model_type;
         typedef ::color::model< category_right_type >  right_model_type;

         typedef ::color::rgb< scalar_type >  rgb_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           left = left_model_type( rgb_model_type( right_model_type( right ) ) ).container();
          }
       };


    template
     <
       ::color::constant::YPbPr::reference_enum reference_number
      ,typename tag_left_name
      ,typename tag_right_name
     >
     struct convert
      <
        ::color::category::YPbPr<  tag_left_name, reference_number  >
       ,::color::category::YPbPr< tag_right_name, reference_number >
      >
      {
       public:
         typedef ::color::category::YPbPr< tag_left_name , reference_number  > category_left_type;
         typedef ::color::category::YPbPr< tag_right_name, reference_number > category_right_type;

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

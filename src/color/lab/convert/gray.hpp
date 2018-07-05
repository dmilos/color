#ifndef color_lab_convert_gray
#define color_lab_convert_gray

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../_internal/convert.hpp"
#include "../../gray/gray.hpp"

#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {

    template
     <
       typename lab_tag_name, ::color::constant::lab::reference_enum reference_number
      ,typename gray_tag_name 
     >
     struct convert
      <
        ::color::category::lab< lab_tag_name, reference_number >
       ,::color::category::gray<   gray_tag_name >
      >
      {
       public:
         typedef ::color::category::lab<   lab_tag_name, reference_number > category_left_type;
         typedef ::color::category::gray< gray_tag_name > category_right_type;

         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;

         typedef ::color::category::lab< scalar_type, reference_number > labSCALAR_category_type;

         typedef ::color::trait::bound<category_left_type>         bound_left_trait_type;
         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::_internal::reformat< category_left_type, category_right_type >    reformat_type;
         typedef ::color::_internal::reformat< category_left_type, labSCALAR_category_type >    reformatLAB_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         enum
          {
            lightness_p  = ::color::place::_internal::lightness<category_left_type>::position_enum
          };

         enum
          {
            gray_p       = ::color::place::_internal::gray<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           container_left_trait_type::template set<0>( left, reformat_type::template process< 0, 0 >( container_right_trait_type::template get<0>( right ) ) );
           container_left_trait_type::template set<1>( left, reformatLAB_type::template process< 1, 1 >( 0 ) );
           container_left_trait_type::template set<2>( left, reformatLAB_type::template process< 2, 2 >( 0 ) );
          }
      };

   }
 }

#endif

#ifndef color_lab_convert_LabCH
#define color_lab_convert_LabCH

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../LabCH/LabCH.hpp"






namespace color
 {
  namespace _internal
   {

    template
     <
       typename lab_tag_name
      ,typename LabCH_tag_name
     >
     struct convert
      <
        ::color::category::lab< lab_tag_name >
       ,::color::category::LabCH<  LabCH_tag_name >
      >
      {
       public:
         typedef ::color::category::lab< lab_tag_name >    lab_category_type, category_left_type;
         typedef ::color::category::LabCH< lab_tag_name >    LabCH_category_type, category_right_type;

         typedef typename ::color::trait::scalar< lab_category_type >::instance_type scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef typename ::color::lab<   scalar_type >::category_type LABscalar_category_type;
         typedef typename ::color::LabCH< scalar_type >::category_type LabCHscalar_category_type;

         typedef ::color::_internal::reformat< category_left_type, LABscalar_category_type, scalar_type >     reformatAB_type;
         typedef ::color::_internal::reformat< LabCHscalar_category_type, category_right_type, scalar_type >  reformatCH_type;

         typedef ::color::constant::generic< LABscalar_category_type > generic_costant_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type l = reformatCH_type::template process< 0, 0 >( container_right_trait_type::template get<0>( right ) );
           scalar_type c = reformatCH_type::template process< 1, 1 >( container_right_trait_type::template get<1>( right ) );
           scalar_type h = reformatCH_type::template process< 2, 2 >( container_right_trait_type::template get<2>( right ) );

           scalar_type a = c * cos( h * generic_costant_type::deg2rad() );
           scalar_type b = c * sin( h * generic_costant_type::deg2rad() );

           container_left_trait_type::template set<0>( left, reformatAB_type::template process< 0, 0 >( l ) );
           container_left_trait_type::template set<1>( left, reformatAB_type::template process< 1, 1 >( a ) );
           container_left_trait_type::template set<2>( left, reformatAB_type::template process< 2, 2 >( b ) );
          }
      };

   }
 }

#endif

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
       typename   lab_tag_name
      ,typename LabCH_tag_name
     >
     struct convert
      <
        ::color::category::lab< lab_tag_name, ::color::constant::lab::CIE_entity >
       ,::color::category::LabCH<  LabCH_tag_name >
      >
      {
       public:
         typedef ::color::category::lab< lab_tag_name, ::color::constant::lab::CIE_entity >    lab_category_type, category_left_type;
         typedef ::color::category::LabCH< LabCH_tag_name >    LabCH_category_type, category_right_type;

         typedef typename ::color::trait::scalar< lab_category_type >::instance_type scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef typename ::color::lab<   scalar_type >::category_type LABscalar_category_type;
         typedef typename ::color::LabCH< scalar_type >::category_type LabCHscalar_category_type;

         typedef ::color::_internal::reformat< category_left_type, LABscalar_category_type >     reformatAB_type;
         typedef ::color::_internal::reformat< LabCHscalar_category_type, category_right_type >  reformatCH_type;

         typedef ::color::constant::generic< LABscalar_category_type > generic_costant_type;

         enum
          {
            lightness_left_p       = ::color::place::_internal::lightness<category_left_type>::position_enum
          };

         enum
          {
            lightness_right_p  = ::color::place::_internal::lightness<category_right_type>::position_enum
           ,chroma_right_p     = ::color::place::_internal::chroma<category_right_type>::position_enum
           ,hue_right_p        = ::color::place::_internal::hue<category_right_type>::position_enum
          };


         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type l = reformatCH_type::template process< 0, lightness_right_p  >( container_right_trait_type::template get<lightness_right_p >( right ) );
           scalar_type c = reformatCH_type::template process< 1, chroma_right_p     >( container_right_trait_type::template get<chroma_right_p    >( right ) );
           scalar_type h = reformatCH_type::template process< 2, hue_right_p        >( container_right_trait_type::template get<hue_right_p       >( right ) );

           scalar_type a = c * cos( h * generic_costant_type::deg2rad() );
           scalar_type b = c * sin( h * generic_costant_type::deg2rad() );

           container_left_trait_type::template set<lightness_left_p>( left, reformatAB_type::template process< lightness_left_p, 0 >( l ) );
           container_left_trait_type::template set<1>( left, reformatAB_type::template process< 1, 1 >( a ) );
           container_left_trait_type::template set<2>( left, reformatAB_type::template process< 2, 2 >( b ) );
          }
      };

    template
     <
       typename   lab_tag_name
      ,typename LabCH_tag_name
     >
     struct convert
      <
        ::color::category::lab< lab_tag_name, ::color::constant::lab::Hunter_entity >
       ,::color::category::LabCH<  LabCH_tag_name >
      >
      {
       public:
         typedef ::color::category::lab< lab_tag_name, ::color::constant::lab::Hunter_entity >    lab_category_type, category_left_type;
         typedef ::color::category::LabCH< LabCH_tag_name >    LabCH_category_type, category_right_type;

         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;

         typedef ::color::model< lab_category_type > lab_model_type;
         typedef ::color::model< LabCH_category_type >  LabCH_model_type;



         typedef ::color::xyz< scalar_type >  xyz_model_type;

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
           //::color::_internal::convert< xyz_model_type::category_type, LabCH_category_type >::process( t0, right );
           //::color::_internal::convert< lab_category_type,   xyz_model_type::category_type >::process( left, t0  );

           left = lab_model_type( xyz_model_type( LabCH_model_type( right ) ) ).container();
          }
      };

   }
 }

#endif

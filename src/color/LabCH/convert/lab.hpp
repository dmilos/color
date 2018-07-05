#ifndef color_LabCH_convert_lab
#define color_LabCH_convert_lab

#include "../../_internal/convert.hpp"

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../lab/lab.hpp"






namespace color
 {
  namespace _internal
   {

    template
     <
       typename LabCH_tag_name
      ,typename lab_tag_name
     >
     struct convert
      <
        ::color::category::LabCH< LabCH_tag_name >
       ,::color::category::lab<  lab_tag_name, ::color::constant::lab::CIE_entity >
      >
      {
       public:
         typedef ::color::category::LabCH< LabCH_tag_name >    LabCH_category_type, category_left_type;
         typedef ::color::category::lab<      lab_tag_name, ::color::constant::lab::CIE_entity >    lab_category_type, category_right_type;

         typedef typename ::color::trait::scalar< LabCH_category_type >::instance_type scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef typename ::color::LabCH< scalar_type >::category_type LabCHscalar_category_type;
         typedef typename ::color::lab<   scalar_type >::category_type LABscalar_category_type;

         typedef ::color::_internal::reformat< category_left_type, LabCHscalar_category_type >  reformatCH_type;
         typedef ::color::_internal::reformat< LABscalar_category_type, category_right_type >    reformatAB_type;

         typedef ::color::constant::generic< LABscalar_category_type > generic_costant_type;

         enum
          {
            lightness_p  = ::color::place::_internal::lightness<category_left_type>::position_enum
           ,chroma_p     = ::color::place::_internal::chroma<category_left_type>::position_enum
           ,hue_p        = ::color::place::_internal::hue<category_left_type>::position_enum
          };

         // TODFO enum
         // TODFO  {
         // TODFO    lightness_r_p  = ::color::place::_internal::lightness<category_right_type>::position_enum
         // TODFO  };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type l = reformatAB_type::template process< 0, 0 >( container_right_trait_type::template get<0>( right ) );
           scalar_type a = reformatAB_type::template process< 1, 1 >( container_right_trait_type::template get<1>( right ) );
           scalar_type b = reformatAB_type::template process< 2, 2 >( container_right_trait_type::template get<2>( right ) );

           scalar_type c = sqrt( a*a + b*b );
           scalar_type h = atan2( b, a ) * generic_costant_type::rad2deg();
           if( h < 0 ) h += 360;

           container_left_trait_type::template set<lightness_p>( left, reformatCH_type::template process< lightness_p, 0 >( l ) );
           container_left_trait_type::template set<chroma_p   >( left, reformatCH_type::template process< chroma_p,    1 >( c ) );
           container_left_trait_type::template set<hue_p      >( left, reformatCH_type::template process< hue_p,       2 >( h ) );
          }
      };

    template
     <
       typename LabCH_tag_name
      ,typename lab_tag_name
     >
     struct convert
      <
        ::color::category::LabCH< LabCH_tag_name >
       ,::color::category::lab<  lab_tag_name, ::color::constant::lab::Hunter_entity >
      >
      {
       public:
         typedef ::color::category::LabCH< LabCH_tag_name >                                       LabCH_category_type, category_left_type;
         typedef ::color::category::lab< lab_tag_name, ::color::constant::lab::Hunter_entity >    lab_category_type, category_right_type;

         typedef typename ::color::trait::scalar< LabCH_category_type >::instance_type scalar_type;

         typedef ::color::model<   LabCH_category_type >      LabCH_model_type;
         typedef ::color::model<   lab_category_type >      lab_model_type;

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
           left = LabCH_model_type( xyz_model_type( lab_model_type( right ) ) ).container();
          }
      };

   }
 }

#endif

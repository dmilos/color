#ifndef color_gray_convert_tsl
#define color_gray_convert_tsl

#include "../../_internal/convert.hpp"
#include "../../tsl/tsl.hpp"

#include "../category.hpp"
#include "../constant.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"




namespace color
 {
  namespace _internal
   {

    template< typename gray_tag_name, typename tsl_tag_name >
     struct convert
      <
        ::color::category::gray< gray_tag_name >
       ,::color::category::tsl<   tsl_tag_name >
      >
      {
       public:
         typedef ::color::category::gray< gray_tag_name > category_left_type;
         typedef ::color::category::tsl<   tsl_tag_name > category_right_type;
         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         enum
          {
             gray_p = ::color::place::_internal::gray<category_left_type>::position_enum
          };

         enum
          {
             lightness_p = ::color::place::_internal::lightness<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type value = normalize_type::template process<lightness_p > ( container_right_trait_type::template get<lightness_p >( right ) );

           container_left_trait_type::template set<0>( left, diverse_type::template process<gray_p>( value ) );
          }
      };

   }
 }

#endif
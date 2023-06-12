#ifndef color_tsl_convert_gray
#define color_tsl_convert_gray

#include "../place/place.hpp"

#include "../../_internal/convert.hpp"
#include "../../gray/gray.hpp"

#include "../../_internal/reformat.hpp"

#include "../place/tint.hpp"
#include "../place/saturation.hpp"
#include "../place/lightness.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename tsl_tag_name, typename gray_tag_name >
     struct convert
      <
        ::color::category::tsl< tsl_tag_name >
       ,::color::category::gray<gray_tag_name>
      >
      {
       public:
         typedef ::color::category::tsl< tsl_tag_name > category_left_type;
         typedef ::color::category::gray<gray_tag_name> category_right_type;

         typedef typename ::color::trait::scalar< category_left_type >::instance_type scalar_type;

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
           enum
            {
              tint_p       = ::color::place::_internal::tint<category_left_type>::position_enum
             ,saturation_p = ::color::place::_internal::saturation<category_left_type>::position_enum
             ,lightness_p  = ::color::place::_internal::lightness<category_left_type>::position_enum
            };

           enum
            {
              gray_p   = ::color::place::_internal::gray<category_right_type>::position_enum
            };

           auto const value = container_right_trait_type::template get<gray_p>( right );

           container_left_trait_type::template set<tint_p  >(     left, reformat_type::template process<tint_p,       gray_p >( 0 ) );
           container_left_trait_type::template set<saturation_p>( left, reformat_type::template process<saturation_p, gray_p >( 0 ) );
           container_left_trait_type::template set<lightness_p >( left, reformat_type::template process<lightness_p , gray_p >( value ) );
          }
      };

   }
 }

#endif

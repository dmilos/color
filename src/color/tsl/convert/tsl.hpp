#ifndef color_tsl_convert_tsl
#define color_tsl_convert_tsl

#include "../place/place.hpp"

#include "../../_internal/convert.hpp"

#include "../../_internal/reformat.hpp"









namespace color
 {
  namespace _internal
   {

    template< typename tag_left_name, typename tag_right_name >
     struct convert
       <
         ::color::category::tsl< tag_left_name >
        ,::color::category::tsl< tag_right_name>
       >
       {
        public:
          typedef ::color::category::tsl< tag_left_name > category_left_type;
          typedef ::color::category::tsl< tag_right_name> category_right_type;

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
               tl = ::color::place::_internal::tint<category_left_type>::position_enum
              ,sl = ::color::place::_internal::saturation<category_left_type>::position_enum
              ,ll = ::color::place::_internal::lightness<category_left_type>::position_enum
              ,tr = ::color::place::_internal::tint<category_right_type>::position_enum
              ,sr = ::color::place::_internal::saturation<category_right_type>::position_enum
              ,lr = ::color::place::_internal::lightness<category_right_type>::position_enum
             };

            container_left_trait_type::template set<tl>( left, reformat_type::template process<tl,tr>( container_right_trait_type::template get<tr>( right ) ) );
            container_left_trait_type::template set<sl>( left, reformat_type::template process<sl,sr>( container_right_trait_type::template get<sr>( right ) ) );
            container_left_trait_type::template set<ll>( left, reformat_type::template process<ll,lr>( container_right_trait_type::template get<lr>( right ) ) );
           }
        };
   }
 }

#endif
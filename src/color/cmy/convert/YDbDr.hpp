#ifndef color_cmy_convert_YDbDr
#define color_cmy_convert_YDbDr

#include "../category.hpp"

#include "../../_internal/convert.hpp"

#include "../../YDbDr/trait/container.hpp"
#include "../../YDbDr/category.hpp"
#include "../../YDbDr/constant.hpp"

#include "../place/place.hpp"

#include "../../generic/operation/diverse.hpp"
#include "../../generic/operation/normalize.hpp"
#include "../../_internal/reformat.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename cmy_tag_name, typename YDbDr_tag_name >
     struct convert
      <
        ::color::category::cmy< cmy_tag_name >
       ,::color::category::YDbDr< YDbDr_tag_name>
      >
      {
       public:
         typedef ::color::category::cmy< cmy_tag_name >  category_left_type;
         typedef ::color::category::YDbDr<YDbDr_tag_name>    category_right_type;
         typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::constant::YDbDr< category_right_type > YDbDr_const_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
               cyan_p  = ::color::place::_internal::cyan<category_left_type>::position_enum
           ,magenta_p  = ::color::place::_internal::magenta<category_left_type>::position_enum
           , yellow_p  = ::color::place::_internal::yellow<category_left_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           static scalar_type const Wr   = YDbDr_const_type::Wr();
           static scalar_type const Wb   = YDbDr_const_type::Wb();
           static scalar_type const Wg   = YDbDr_const_type::Wg();
           static scalar_type const Umax = YDbDr_const_type::Umax();
           static scalar_type const Vmax = YDbDr_const_type::Vmax();

           static scalar_type const b11 = 1, b12 = 0,                          b13 =  (1 - Wr) / Vmax;
           static scalar_type const b21 = 1, b22 = - Wb*(1 - Wb) / Umax / Wg,  b23 = -Wr*(1 - Wr) / Vmax / Wg;
           static scalar_type const b31 = 1, b32 = ((1 - Wb) / Umax),          b33 = 0;

           scalar_type Y  = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
           scalar_type Db = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
           scalar_type Dr = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

           scalar_type u = YDbDr_const_type::DB_diverse( Db ) / YDbDr_const_type::DB_scale();
           scalar_type v = YDbDr_const_type::DR_diverse( Dr ) / YDbDr_const_type::DR_scale();

           scalar_type r = Y +           v * b13;
           scalar_type g = Y + u * b22 + v * b23;
           scalar_type b = Y + u * b32;

           container_left_trait_type::template set<   cyan_p>( left, diverse_type::template process<   cyan_p>( scalar_type(1) - r ) );
           container_left_trait_type::template set<magenta_p>( left, diverse_type::template process<magenta_p>( scalar_type(1) - g ) );
           container_left_trait_type::template set< yellow_p>( left, diverse_type::template process< yellow_p>( scalar_type(1) - b ) );
          }
      };

   }
 }

#endif

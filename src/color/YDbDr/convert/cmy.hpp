#ifndef color_YDbDr_convert_cmy
#define color_YDbDr_convert_cmy

#include "../../_internal/convert.hpp"
#include "../../cmy/category.hpp"
#include "../../cmy/trait/container.hpp"

#include "../category.hpp"
#include "../constant.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename YDbDr_tag_name, typename cmy_tag_name >
     struct convert
      <
        ::color::category::YDbDr<   YDbDr_tag_name >
       ,::color::category::cmy<   cmy_tag_name >
      >
      {
       public:
         typedef ::color::category::YDbDr<   YDbDr_tag_name > category_left_type;
         typedef ::color::category::cmy<   cmy_tag_name > category_right_type;

         typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         typedef ::color::constant::YDbDr< category_left_type >  YDbDr_const_type;

         enum
          {
               cyan_p  = ::color::place::_internal::cyan<category_right_type>::position_enum
           ,magenta_p  = ::color::place::_internal::magenta<category_right_type>::position_enum
           , yellow_p  = ::color::place::_internal::yellow<category_right_type>::position_enum
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

           scalar_type r = scalar_type(1) - normalize_type::template process<   cyan_p>( container_right_trait_type::template get<   cyan_p>( right ) );
           scalar_type g = scalar_type(1) - normalize_type::template process<magenta_p>( container_right_trait_type::template get<magenta_p>( right ) );
           scalar_type b = scalar_type(1) - normalize_type::template process< yellow_p>( container_right_trait_type::template get< yellow_p>( right ) );

           scalar_type Y = Wr * r + Wg * g + Wb * b;
           scalar_type u = Umax * ( b - Y )/( 1- Wb );
           scalar_type v = Vmax * ( r - Y )/( 1- Wr );

           scalar_type Db = YDbDr_const_type::DB_scale() * u;
           scalar_type Dr = YDbDr_const_type::DR_scale() * v;

           Db = YDbDr_const_type::DB_normalize( Db );
           Dr = YDbDr_const_type::DR_normalize( Dr );

           container_left_trait_type::template set<0>( left, diverse_type::template process<0>( Y  ) );
           container_left_trait_type::template set<1>( left, diverse_type::template process<1>( Db ) );
           container_left_trait_type::template set<2>( left, diverse_type::template process<2>( Dr ) );
          }
      };

   }
 }

#endif

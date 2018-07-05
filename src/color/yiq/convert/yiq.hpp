#ifndef color_yiq_convert_yiq
#define color_yiq_convert_yiq

//#include "../place/place.hpp"

#include "../../_internal/convert.hpp"

#include "../../_internal/reformat.hpp"









namespace color
 {
  namespace _internal
   {

    template< typename tag_left_name, typename tag_right_name >
     struct convert
       <
         ::color::category::yiq< tag_left_name >
        ,::color::category::yiq< tag_right_name>
       >
       {
        public:
           typedef ::color::category::yiq< tag_left_name > category_left_type;
           typedef ::color::category::yiq< tag_right_name> category_right_type;

           typedef ::color::trait::container<category_left_type>     container_left_trait_type;
           typedef ::color::trait::container<category_right_type>    container_right_trait_type;

           typedef ::color::_internal::reformat< category_left_type, category_right_type >    reformat_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::model_type  container_right_const_input_type;

           enum
            {
              ll_p  = ::color::place::_internal::luma<category_left_type>::position_enum
             ,il_p  = ::color::place::_internal::inphase<category_left_type>::position_enum
             ,ql_p  = ::color::place::_internal::quadrature<category_left_type>::position_enum
            };

           enum
            {
              lr_p  = ::color::place::_internal::luma<category_right_type>::position_enum
             ,ir_p  = ::color::place::_internal::inphase<category_right_type>::position_enum
             ,qr_p  = ::color::place::_internal::quadrature<category_right_type>::position_enum
            };

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             container_left_trait_type::template set<ll_p>( left, reformat_type::template process<ll_p,lr_p>( container_right_trait_type::template get<lr_p>( right ) ) );
             container_left_trait_type::template set<il_p>( left, reformat_type::template process<il_p,ir_p>( container_right_trait_type::template get<ir_p>( right ) ) );
             container_left_trait_type::template set<ql_p>( left, reformat_type::template process<ql_p,qr_p>( container_right_trait_type::template get<qr_p>( right ) ) );
            }
        };
   }
 }

#endif
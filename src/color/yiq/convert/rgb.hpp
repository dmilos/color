#ifndef color_yiq_convert_rgb
#define color_yiq_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/category.hpp"

namespace color
 {
  namespace _internal
   {

     template<>
      struct convert< ::color::category::yiq_ldouble, ::color::category::rgb_ldouble >
       {
        public:
          typedef ::color::category::yiq_ldouble category_left_type;
          typedef ::color::category::rgb_ldouble category_right_type;

          typedef ::color::_internal::trait<category_left_type>    category_left_trait_type;
          typedef ::color::_internal::trait<category_left_type>   category_right_trait_type;

          typedef category_left_trait_type::index_type          index_type;
          
          typedef category_left_trait_type::container_trait_type     container_left_trait_type, clt_type;
          typedef category_right_trait_type::container_trait_type    container_right_trait_type, crt_type;
          
          typedef category_left_trait_type::component_type  component_left_type;
          
          typedef container_left_trait_type::input_type         container_left_input_type;
          typedef container_right_trait_type::input_const_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           static const index_type min_common_size = std::min< index_type >( container_left_trait_type::size(), container_right_trait_type::size() );
           component_left_type value;

           container_left_trait_type::template set<0>( left, 0.299000 * clt_type::template get<0>( right ) + 0.587000 * clt_type::template get<1>( right ) + 0.114000 * clt_type::template get<2>( right ) );
           container_left_trait_type::template set<1>( left, 0.595879 * clt_type::template get<0>( right ) - 0.274133 * clt_type::template get<1>( right ) - 0.321746 * clt_type::template get<2>( right ) );
           container_left_trait_type::template set<2>( left, 0.211205 * clt_type::template get<0>( right ) - 0.523083 * clt_type::template get<1>( right ) + 0.311878 * clt_type::template get<2>( right ) );
          }
       };

   }
 }

#endif
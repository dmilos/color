#ifndef color_rgb_convert_yiq
#define color_rgb_convert_yiq

#include "../../_internal/convert.hpp"
#include "../../yiq/category.hpp"

namespace color
 {
  namespace _internal
   {

     template<>
      struct convert< ::color::category::rgb_ldouble, ::color::category::yiq_ldouble >
       {
        public:
          typedef ::color::category::rgb_ldouble category_left_type;
          typedef ::color::category::yiq_ldouble category_right_type;

          typedef ::color::_internal::trait<category_left_type>    category_left_trait_type;
          typedef ::color::_internal::trait<category_left_type>   category_right_trait_type;

         typedef typename category_left_trait_type::index_type          index_type;

         typedef typename category_left_trait_type::container_trait_type     container_left_trait_type, clt_type;
         typedef typename category_right_trait_type::container_trait_type    container_right_trait_type, crt_type;

         typedef typename category_left_trait_type::component_type  component_left_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           static const index_type min_common_size = std::min< index_type >( container_left_trait_type::size(), container_right_trait_type::size() );
           component_left_type value;

           container_left_trait_type::template set<0>( left, 1 * clt_type::template get<0>( right ) + 0.956 * clt_type::template get<1>( right ) + 0.621 * clt_type::template get<2>( right ) );
           container_left_trait_type::template set<1>( left, 1 * clt_type::template get<0>( right ) - 0.272 * clt_type::template get<1>( right ) - 0.647 * clt_type::template get<2>( right ) );
           container_left_trait_type::template set<2>( left, 1 * clt_type::template get<0>( right ) - 1.106 * clt_type::template get<1>( right ) + 1.703 * clt_type::template get<2>( right ) );
          }
       };

   }
 }

#endif
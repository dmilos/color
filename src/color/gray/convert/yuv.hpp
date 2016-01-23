#ifndef color_gray_convert_yuv
#define color_gray_convert_yuv

#include "../../_internal/convert.hpp"
#include "../../yuv/yuv.hpp"

#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateGray
     {

      template< typename category_left_name, typename category_right_name, typename scalar_name = double >
       struct convert_yuv2gray
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;

           typedef ::color::trait::container<category_left_type>     container_left_trait_type;
           typedef ::color::trait::container<category_right_type>    container_right_trait_type;

           typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_name >    reformat_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             container_left_trait_type::template set<0>( left, reformat_type::template process<0,0>( container_right_trait_type::template get<0>( right ) ) );
           }
        };

     }

     template< typename gray_tag_name, typename yuv_tag_name >
      struct convert
       <
         ::color::category::gray< gray_tag_name >
        ,::color::category::yuv<yuv_tag_name>
       >
      : public ::color::_internal::_privateGray::convert_yuv2gray
       <
         ::color::category::gray< gray_tag_name >
        ,::color::category::yuv<yuv_tag_name>
        >
      {
      };


   }
 }

#endif
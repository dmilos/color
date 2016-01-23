#ifndef color_xyz_convert_gray
#define color_xyz_convert_gray

#include "../../_internal/convert.hpp"
#include "../../gray/gray.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateXYZ
     {

      template< typename category_left_name, typename category_right_name, typename scalar_name = double >
       struct convert_gray2xyz
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
             // TODO
            }
        };
     }

     template< typename xyz_tag_name, typename gray_tag_name >
      struct convert
       <
         ::color::category::xyz<   xyz_tag_name >
        ,::color::category::gray< gray_tag_name >
       >
      : public ::color::_internal::_privateXYZ::convert_gray2xyz
       <
         ::color::category::xyz<   xyz_tag_name >
        ,::color::category::gray< gray_tag_name >
        >
      {
      };


   }
 }

#endif

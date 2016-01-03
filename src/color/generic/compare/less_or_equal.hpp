#ifndef color_generic_operation_compare_less_or_equal
#define color_generic_operation_compare_less_or_equal

// using namespace  ::color::compare::less_or_equal

#include "../../_internal/model.hpp"


 namespace color
  {
   namespace compare
    {

     template < typename category_left_name, typename category_right_name >
      bool less_or_equal( color::_internal::model< category_left_name > const& left, color::_internal::model< category_right_name > const& right )
       {
        return left.container() <= color::_internal::model< category_left_name >( right ).container();
       }

     template < typename category_name >
      bool less_or_equal( color::_internal::model< category_name > const& left, color::_internal::model< category_name > const& right )
       {
        return left.container() <= right.container();
       }

    }
 }

#endif

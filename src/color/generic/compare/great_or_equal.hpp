#ifndef color_generic_operation_compare_great_or_equal
#define color_generic_operation_compare_great_or_equal

// using namespace  ::color::compare::great_or_equal

#include "../../_internal/model.hpp"


 namespace color
  {
   namespace compare
    {

     template < typename category_left_name, typename category_right_name >
      bool great_or_equal( color::_internal::model< category_left_name > const& left, color::_internal::model< category_right_name > const& right )
       {
        return left.container() >= color::_internal::model< category_left_name >( right ).container();
       }

     template < typename category_name >
      bool great_or_equal( color::_internal::model< category_name > const& left, color::_internal::model< category_name > const& right )
       {
        return left.container() >= right.container();
       }


     template < typename category_left_name, typename category_right_name >
      inline
      bool
      operator >=( ::color::_internal::model< category_left_name > const& left, ::color::_internal::model< category_right_name > const&  right )
       {
        return ::color::compare::great_or_equal( left, right );
       }

     template< typename category_name >
      inline
      bool
      operator >=( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const&  right )
       {
        return ::color::compare::great_or_equal( left, right );
       }

    }
 }

#endif

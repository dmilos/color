#ifndef color_generic_operation_compare
#define color_generic_operation_compare
// using namespace  ::color::operation::compare::equal
// using namespace  ::color::operation::compare::different
// using namespace  ::color::operation::compare::less_strict
// using namespace  ::color::operation::compare::great_strict
// using namespace  ::color::operation::compare::less_or_equal
// using namespace  ::color::operation::compare::great_or_equal

#include "../../_internal/model.hpp"


 namespace color
  {
   namespace operation
    {
     namespace compare
      {

       // TODO template < typename category_name >
       // TODO  int compare( color::_internal::model< category_name > const& left, color::_internal::model< category_name > const& right )
       // TODO   {
       // TODO    return ;
       // TODO   }

       template < typename category_name >
        bool equal( color::_internal::model< category_name > const& left, color::_internal::model< category_name > const& right )
         {
          return left.container() == right.container();
         }

       template < typename category_name >
        bool different( color::_internal::model< category_name > const& left, color::_internal::model< category_name > const& right )
         {
          return left.container() != right.container();
         }

       template < typename category_name >
        bool less_strict( color::_internal::model< category_name > const& left, color::_internal::model< category_name > const& right )
         {
          return left.container() < right.container();
         }

       template < typename category_name >
        bool great_strict( color::_internal::model< category_name > const& left, color::_internal::model< category_name > const& right )
         {
          return left.container() > right.container();
         }

       template < typename category_name >
        bool less_or_equal( color::_internal::model< category_name > const& left, color::_internal::model< category_name > const& right )
         {
          return left.container() <= right.container();
         }

       template < typename category_name >
        bool great_or_equal( color::_internal::model< category_name > const& left, color::_internal::model< category_name > const& right )
         {
          return left.container() >= right.container();
         }


    }
   }
 }

#endif

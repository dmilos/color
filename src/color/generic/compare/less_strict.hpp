#ifndef color_generic_operation_compare_less_strict
#define color_generic_operation_compare_less_strict

// using namespace  ::color::compare::less_strict

#include "../../generic/model.hpp"





 namespace color
  {
   namespace compare
    {

     template < typename category_name >
      bool less_strict
       (
         ::color::model< category_name >  const& left
        ,::color::model< category_name >  const& right
       )
       {
        return left.container() <  right.container();
       }

     namespace  operators
      {

       template< typename category_name >
        inline
        bool
        operator < ( ::color::model< category_name > const& left, ::color::model< category_name > const&  right )
         {
          return ::color::compare::less_strict( left, right );
         }

      }
    }
  }

#endif

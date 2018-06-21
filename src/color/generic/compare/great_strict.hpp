#ifndef color_generic_operation_compare_great_strict
#define color_generic_operation_compare_great_strict

// using namespace  ::color::compare::great_strict

#include "../../generic/model.hpp"





 namespace color
  {
   namespace compare
    {

     template < typename category_name >
      bool great_strict
       (
         ::color::model< category_name >  const& left
        ,::color::model< category_name >  const& right
       )
       {
        return left.container() >  right.container();
       }

     namespace  operators
      {

       template< typename category_name >
        inline
        bool
        operator > ( ::color::model< category_name > const& left, ::color::model< category_name > const&  right )
         {
          return ::color::compare::great_strict( left, right );
         }

      }
    }
  }

#endif

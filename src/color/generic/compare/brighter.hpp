#ifndef color_generic_compare_lighter
#define color_generic_compare_lighter

// ::color::compare::lighter

#include "../../gray/gray.hpp"
#include "./great_strict.hpp"


 namespace color
  {
   namespace compare
    {
     template < typename category_name >
      bool lighter( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const& right )
       {
        using namespace ::color::compare::operators;
        return ::color::gray<float>( left ) > ::color::gray<float>( right );
       }
    }
  }

#endif

#ifndef color_generic_compare_darker
#define color_generic_compare_darker

// ::color::compare::darker

#include "../../gray/gray.hpp"
#include "./less_strict.hpp"


 namespace color
  {
   namespace compare
    {
     template < typename category_name >
      bool darker( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const& right )
       {
        using namespace ::color::compare::operators;
        return ::color::gray<float>( left ) < ::color::gray<float>( right );
       }
    }
  }

#endif

#ifndef color_generic_compare_brighter
#define color_generic_compare_brighter

// ::color::compare::brighter

#include "../../gray/gray.hpp"
#include "./great_strict.hpp"


 namespace color
  {
   namespace compare
    {

     template < typename category_name >
      bool brighter( ::color::model< category_name > const& left, ::color::model< category_name > const& right )
       {
        using namespace ::color::compare::operators;
        return ::color::gray<float>( left ) > ::color::gray<float>( right );
       }

    }
  }

#endif

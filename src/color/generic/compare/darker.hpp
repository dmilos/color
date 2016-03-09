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
      bool darker( ::color::model< category_name > const& left, ::color::model< category_name > const& right )
       {
        using namespace ::color::compare::operators;
        typedef typename ::color::trait::scalar< category_name >::instance_type  scalar_type;
        return ::color::gray<scalar_type>( left ).container() < ::color::gray<scalar_type>( right ).container();
       }

    }
  }

#endif

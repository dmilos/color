#ifndef color_generic_compare_brighter
#define color_generic_compare_brighter

// ::color::compare::brighter

#include "../../generic/model.hpp"

#include "../../gray/gray.hpp"



 namespace color
  {
   namespace compare
    {

     template < typename category_name >
      bool brighter
       (
         ::color::model< category_name >  const& left
        ,::color::model< category_name >  const& right
       )
       {
        typedef typename ::color::trait::scalar< category_name >::instance_type  scalar_type;
        return ::color::gray<scalar_type>( left ).container() > ::color::gray<scalar_type>( right ).container();
       }

    }
  }

#endif

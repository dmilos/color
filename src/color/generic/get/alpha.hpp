#ifndef color_generic_get_alpha
#define color_generic_get_alpha

#include "../place/alpha.hpp"
#include "../trait/component.hpp"
#include "../trait/bound.hpp"
#include "../../generic/model.hpp"

// ::color::get::alpha( c )

 namespace color
  {
   namespace get
    {

     template< typename category_name >
      inline
      typename ::color::trait::component< category_name >::return_type
      alpha( ::color::model< category_name > const& color_parameter )
       {
        //typedef ::color::model< category_name > model_type;
        typedef ::color::trait::bound< category_name > bound_type;

        //return bound_type::template maximum< ::color::place::alpha<category_name>() >();
        return bound_type::template maximum< 0 >();
       }

    }
  }

#endif

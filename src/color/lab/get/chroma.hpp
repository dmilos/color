#ifndef color_lab_get_chroma
#define color_lab_get_chroma

// ::color::get::chroma( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name, ::color::constant::lab::reference_enum reference_number >
      inline
      typename ::color::model< ::color::category::lab< tag_name, reference_number > >::component_const_type
      chroma( ::color::model< ::color::category::lab< tag_name, reference_number > > const& c )
       {
        typedef ::color::category::lab< tag_name, reference_number >  category_type;

        typedef typename ::color::trait::scalar<category_type>     scalar_trait_type;
        typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

        typedef typename ::color::trait::component<category_type>::instance_type     component_type;

        auto const& A = c.template get< 1 >();
        auto const& B = c.template get< 2 >();

        return component_type( sqrt(A*A + B*B) );
       }

    }
  }

#endif
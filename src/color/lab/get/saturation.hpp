#ifndef color_lab_get_saturation
#define color_lab_get_saturation

// ::color::get::saturation( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name, ::color::constant::lab::reference_enum reference_number >
      inline
      typename ::color::model< ::color::category::lab< tag_name, reference_number > >::component_const_type
      saturation( ::color::model< ::color::category::lab< tag_name, reference_number > > const& c )
       {
        typedef ::color::category::lab< tag_name, reference_number >  category_type;

        typedef typename ::color::trait::scalar<category_type>     scalar_trait_type;
        typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

        typedef typename ::color::trait::component<category_type>::instance_type     component_type;

        typedef ::color::_internal::normalize< category_type > normalize_type;

        enum
         {
           lightness_p  = ::color::place::_internal::lightness<category_type>::position_enum
         };

        scalar_type const L = static_cast<scalar_type>( normalize_type::template process<lightness_p>( c.template get< lightness_p>() ) );
        scalar_type const A = static_cast<scalar_type>( normalize_type::template process<1>(           c.template get< 1 >() ) ) ;
        scalar_type const B = static_cast<scalar_type>( normalize_type::template process<2>(           c.template get< 2 >() ) );

        if( false == scalar_trait_type::is_small( scalar_type(L) ) )
         {
          return 0;
         }

        return component_type( sqrt(A*A + B*B) / L );
       }

    }
  }

#endif
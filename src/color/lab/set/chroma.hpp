#ifndef color_lab_set_lightness
#define color_lab_set_lightness

// ::color::set::lightness( c, val )

#include "../place/place.hpp"

 namespace color
  {
   namespace set
    {
     template< typename tag_name, ::color::constant::lab::reference_enum reference_number >
      inline
      void
      lightness
       (
                  ::color::model< ::color::category::lab<tag_name, reference_number> >                                   & color_parameter,
        typename  ::color::model< ::color::category::lab<tag_name, reference_number> >::component_input_const_type         component_parameter
       )
       {
        typedef ::color::category::lab<tag_name,reference_number>  category_type;

        typedef typename ::color::trait::scalar<category_type>     scalar_trait_type;
        typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

        typedef ::color::_internal::diverse< category_type >    diverse_type;
        typedef ::color::_internal::normalize< category_scalar_type > normalize_type;

        auto const& A = normalize_type::template process<1>( c.template get< 1 >() );
        auto const& B = normalize_type::template process<2>( c.template get< 2 >() );

        auto chroma = sqrt( A*A + B*B  );

        A *= diverse_type::template process<1>( component_parameter )/ chroma;
        B *= diverse_type::template process<2>( component_parameter )/ chroma;

        color_parameter.template set<1>( diverse_type::template process<1>( A ) );
        color_parameter.template set<2>( diverse_type::template process<2>( B ) );
       }

    }
  }

#endif

#ifndef color_LabCH_get_saturation
#define color_LabCH_get_saturation

// ::color::get::saturation( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::model< ::color::category::LabCH< tag_name> >::component_const_type
      saturation( ::color::model< ::color::category::LabCH< tag_name> > const& c )
       {
        typedef ::color::category::LabCH< tag_name>  category_type;

        typedef typename ::color::trait::scalar<category_type>     scalar_trait_type;
        typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

        enum
         {
            lightness_p  = ::color::place::_internal::lightness<category_type>::position_enum
          ,    chroma_p  = ::color::place::_internal::chroma<category_type>::position_enum
         };

         auto const& L = c.template get< lightness_p>();
         auto const& C = c.template get<    chroma_p>();

        if( false == scalar_trait_type::is_small( scalar_type(L) ) )
         {
          return 0;
         }

        return C / L;
       }

    }
  }

#endif
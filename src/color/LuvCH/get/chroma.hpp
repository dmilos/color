#ifndef color_LuvCH_get_chroma
#define color_LuvCH_get_chroma

// ::color::get:: chroma( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::model< ::color::category::LuvCH< tag_name> >::component_const_type
      chroma( ::color::model< ::color::category::LuvCH<tag_name> > const& color_parameter )
       {
        typedef ::color::category::LuvCH< tag_name>  category_type;
        enum
         {
          chroma_p  = ::color::place::_internal::chroma<category_type>::position_enum 
         };

        return color_parameter.template get<chroma_p>();
       }
 
    }
  }

#endif

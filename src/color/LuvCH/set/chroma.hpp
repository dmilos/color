#ifndef color_LuvCH_set_chroma
#define color_LuvCH_set_chroma

// ::color::set::chroma( c, val )

#include "../place/place.hpp"

 namespace color
  {
   namespace set
    {
     template< typename tag_name >
      inline
      void
      chroma
       (
                  ::color::model< ::color::category::LuvCH<tag_name> >                                   & color_parameter,
        typename  ::color::model< ::color::category::LuvCH<tag_name> >::component_input_const_type         component_parameter
       )
       {
        typedef ::color::category::LuvCH<tag_name>  category_type;
        enum
         {
           chroma_p  = ::color::place::_internal::chroma<category_type>::position_enum
         };

        color_parameter.template set<chroma_p>( component_parameter );
       }

    }
  }

#endif

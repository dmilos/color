#ifndef color_LabCH_get_hue
#define color_LabCH_get_hue

// ::color::get:: hue( c )

 namespace color
  {
   namespace get
    {

     template< typename tag_name >
      inline
      typename ::color::model< ::color::category::LabCH< tag_name> >::component_const_type
      hue( ::color::model< ::color::category::LabCH<tag_name> > const& color_parameter )
       {
        typedef ::color::category::LabCH< tag_name>  category_type;
        enum
         {
          hue_p  = ::color::place::_internal::hue<category_type>::position_enum 
         };

        return color_parameter.template get<hue_p>();
       }
 
    }
  }

#endif

#ifndef color_rgb_get__formula
#define color_rgb_get__formula


 namespace color
  {
   namespace get
    {
     namespace constant
      {
       namespace rgb
        {

         enum formula_enum
          {
                     error_entity
            ,         alvy_entity
            ,     hsl_star_entity
            ,      channel_entity
            ,max_minus_min_entity
            ,distance2gray_entity
            ,      average_entity
            ,       middle_entity
            ,       yuv709_entity
            ,    lightness_entity
            ,      hexagon_entity                       //!< =  Preucil
            ,  polar_atan2_entity                       //!< EHB(atan2) = Evans, Hanson, and Brewer
            ,   polar_acos_entity                       //!< EHB(acos)  = Evans, Hanson, and Brewer
            ,        polar_entity = polar_atan2_entity  //!< Default polar formula
            ,          cmy_entity
            ,         cmyk_entity
            ,          hsv_entity
            ,          hsl_entity
            ,          hsi_entity

          };

        }
      }
    }
  }

#endif

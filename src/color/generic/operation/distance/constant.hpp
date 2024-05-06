#ifndef  color_generic_operation_distance_constant
#define  color_generic_operation_distance_constant

// ::color::constant::distance::reference_enum
// ::color::constant::distance:: delta_gray_entity, hsl_euclid_entity, euclid_entity






 namespace color
  {
   namespace constant
    {
     namespace distance
      {

       enum reference_enum
        {
          error_entity
         ,euclid_entity

       //,DeltaC_entity
       //,DeltaH_entity
         ,CIE76_entity
         ,CIE94__base_entity
         ,CIE94_graphics_entity
         ,CIE94_textile_entity
         ,CIEDE2000_entity
         ,CMC1984_entity         //!< default ratio is 2:1
         ,delta_gray_entity
         ,hue_euclid_entity
         ,hue_helix_entity
         ,hue_helix_rgb_entity
       //,hue_entity             //!< Rejected. Distance by only one coordinate. use hsl_bicone_entity , hsv_cone_entity
         ,rgb_special_entity
         ,maxwell_entity
         ,hsl_bicone_entity // ( (1-fabs( 2*L - 1 ) ) * s*cos(H), (1-fabs( 2*L - 1 ) ) * s*sin(H), 2*L - 1  )
         ,hsv_cone_entity   // ( V * s*cos(H), V * s*sin(H), V  )
         // ,hsi_bicone_entity
         // ,hwb_cone_entity
        };

      }
    }
  }

#endif

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
       //,hue_entity             //!< Rejected. Distance by only one coordinate
         ,rgb_special_entity
         ,maxwell_entity
         // ,hsi_circle_entity //!< TODO  use all coordinate
         // ,hsl_circle_entity //!< TODO  use all coordinate
         // ,hsv_circle_entity //!< TODO  use all coordinate
         // ,hwb_circle_entity //!< TODO  use all coordinate
        };

      }
    }
  }

#endif

#ifndef color_contant_yuv_reference
#define color_contant_yuv_reference

// ::color::constant::yuv::reference_enum


namespace color
 {
  namespace constant
   {
    namespace yuv
     {

      enum reference_enum
       {
         error_entity
        ,BT_601_entity //( 0.299,  (1-r-b), 0.114  )( 0.2988390, (1-r-b),  0.1143500 )
        ,BT_709_entity //( 0.2126, (1-r-b), 0.0722 )( 0.2126729, (1-r-b) , 0.0721750 )
        // TODO ,BT_2020_entity //( 0.2126, (1-r-b), 0.0722 )( 0.2126729, (1-r-b) , 0.0721750 )
       };

    }
   }
 }

#endif

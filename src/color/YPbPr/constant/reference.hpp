#ifndef color_contant_YPbPr_reference
#define color_contant_YPbPr_reference

// ::color::constant::YPbPr::reference_enum
// ::color::constant::YPbPr::BT_2020_entity


namespace color
 {
  namespace constant
   {
    namespace YPbPr
     {

      enum reference_enum
       {
         error_entity
        ,BT_601_entity  //  ( 0.299,  (1-r-b), 0.114  )
        ,BT_709_entity  //  ( 0.2126, (1-r-b), 0.0722 )( 0.2126729, (1-r-b) , 0.0721750 )
        ,BT_2020_entity //  ( 0.2627, (1-r-b), 0.0593 )
       };

    }
   }
 }

#endif



#ifndef color_xyz_profile_
#define color_xyz_profile_

namespace color
 {
  namespace constant
   {
    namespace xyz
     {
         
      template
       <
         ::color::constant::xyz::space::name_enum           space_number
        ,::color::constant::xyz::illuminant::observer_enum  observer_number
        ,::color::constant::xyz::illuminant::name_enum      source_number
        ,::color::constant::xyz::illuminant::name_enum      target_number
        ,::color::constant::xyz::adaptation::scaling_enum   adaptation_number
       >
       struct profile
        {
        };

     }
   }
 }

#endif

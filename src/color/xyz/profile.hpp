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
         ::color::constant::xyz::space::name_entity           space_number
        ,::color::constant::xyz::illuminant::observer_entity  observer_number
        ,::color::constant::xyz::illuminant::name_entity      source_number
        ,::color::constant::xyz::illuminant::name_entity      target_number
        ,::color::constant::xyz::adaptation::scaling_entity   adaptation_number
       >
       struct profile
        {
        };

     }
   }
 }

#endif

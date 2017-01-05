space
illuminant
source WP
target WP
adaptation


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
        ::color::constant::xyz::space::name_enum           space
        ::color::constant::xyz::illuminant::observer_enum  observer
        ::color::constant::xyz::illuminant::name_enum      source
        ::color::constant::xyz::illuminant::name_enum      target
        ::color::constant::xyz::adaptation::scaling_enum   adaptation
       >
       struct profile
        {
        };

     }
   }
 }

#endif

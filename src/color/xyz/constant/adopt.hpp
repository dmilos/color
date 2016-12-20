#ifndef color_contant_xyz_adopt
#define color_contant_xyz_adopt

// ::color::constant::xyz::adopt::matrix< scalar_name, ::color::constant::xyz::white::name_enum left_number,, ::color::constant::xyz::white::name_enum right_number >::process()

#include "./white.hpp"

namespace color
 {
  namespace constant
   {
    namespace xyz
     {
      namespace adopt
       {

        template< typename scalar_name, ::color::constant::xyz::white::name_enum left_number, ::color::constant::xyz::white::name_enum right_number >
         struct matrix
          {

           static void process( scalar_name &X, scalar_name &Y, scalar_name &Z )
            {
             
            }

          };
       }
     }
   }
 }

#endif

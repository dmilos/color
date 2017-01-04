#ifndef color_contant_xyz_adaptation
#define color_contant_xyz_adaptation

// ::color::constant::xyz::adaptation::matrix< scalar_name, ::color::constant::xyz::white::name_enum left_number,, ::color::constant::xyz::white::name_enum right_number >::process()

#include "./white.hpp"

namespace color
 {
  namespace constant
   {
    namespace xyz
     {
      namespace white
       {

        enum scaling_enum
         {
           XYZ_entity
          ,Bradford_entity
          ,VonKries_entity
         };

        template
         <
          typename scalar_name
          ,::color::constant::xyz::white::scaling_enum scaling_number = ::color::constant::xyz::white::XYZ_entity
         >
         struct method
          {
           typedef scalar_name scalar_type;

           static /* constexpr*/ scalar_type const a11(){ return 1; }
           static /* constexpr*/ scalar_type const a12(){ return 0; }
           static /* constexpr*/ scalar_type const a13(){ return 0; }

           static /* constexpr*/ scalar_type const a21(){ return 0; }
           static /* constexpr*/ scalar_type const a22(){ return 1; }
           static /* constexpr*/ scalar_type const a23(){ return 0; }

           static /* constexpr*/ scalar_type const a31(){ return 0; }
           static /* constexpr*/ scalar_type const a32(){ return 0; }
           static /* constexpr*/ scalar_type const a33(){ return 1; }

           static /* constexpr*/ scalar_type const i11(){ return 1; }
           static /* constexpr*/ scalar_type const i12(){ return 0; }
           static /* constexpr*/ scalar_type const i13(){ return 0; }

           static /* constexpr*/ scalar_type const i21(){ return 0; }
           static /* constexpr*/ scalar_type const i22(){ return 1; }
           static /* constexpr*/ scalar_type const i23(){ return 0; }

           static /* constexpr*/ scalar_type const i31(){ return 0; }
           static /* constexpr*/ scalar_type const i32(){ return 0; }
           static /* constexpr*/ scalar_type const i33(){ return 1; }

          };

        template
         <
           typename scalar_name
          ,::color::constant::xyz::white::name_enum left_number
          ,::color::constant::xyz::white::name_enum right_number
          ,::color::constant::xyz::white::scaling_enum scaling_number = ::color::constant::xyz::white::XYZ_entity
         >
         struct adaptation
          {
           typedef scalar_name scalar_type;
           typedef method<scalar_type,scaling_number > method_type;

           typedef ::color::constant::xyz::white::point< scalar_name, left_number,  ::color::constant::xyz::white::two_entity > source_type;
           typedef ::color::constant::xyz::white::point< scalar_name, right_number, ::color::constant::xyz::white::two_entity > destination_type;


           static /* constexpr*/  scalar_type rho_S()    { return method_type::a11() * source_type::X()  +  method_type::a12() * source_type::Y()  +  method_type::a13() * source_type::Z(); }
           static /* constexpr*/  scalar_type gamma_S()  { return method_type::a21() * source_type::X()  +  method_type::a22() * source_type::Y()  +  method_type::a23() * source_type::Z(); }
           static /* constexpr*/  scalar_type beta_S()   { return method_type::a31() * source_type::X()  +  method_type::a32() * source_type::Y()  +  method_type::a33() * source_type::Z(); }
           
           static /* constexpr*/  scalar_type rho_D()    { return method_type::a11() * destination_type::X()  +  method_type::a12() * destination_type::Y()  +  method_type::a13() * destination_type::Z(); }
           static /* constexpr*/  scalar_type gamma_D()  { return method_type::a21() * destination_type::X()  +  method_type::a22() * destination_type::Y()  +  method_type::a23() * destination_type::Z(); }
           static /* constexpr*/  scalar_type beta_D()   { return method_type::a31() * destination_type::X()  +  method_type::a32() * destination_type::Y()  +  method_type::a33() * destination_type::Z(); }


           static void process( scalar_name &X, scalar_name &Y, scalar_name &Z )
            {

            }

          };

       }
     }
   }
 }

#endif

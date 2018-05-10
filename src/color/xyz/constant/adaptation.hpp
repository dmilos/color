#ifndef color_contant_xyz_adaptation
#define color_contant_xyz_adaptation

// ::color::constant::xyz::adaptation::matrix< scalar_name,  >::process()
// ::color::constant::xyz::adaptation::scaling_entity

#include "./illuminant.hpp"

namespace color
 {
  namespace constant
   {
    namespace xyz
     {
      namespace adaptation
       {

        enum scaling_entity
         {
           XYZ_entity
          ,Bradford_entity
          ,VonKries_entity
         };

        template
         <
          typename scalar_name
          ,::color::constant::xyz::adaptation::scaling_entity scaling_number = ::color::constant::xyz::adaptation::XYZ_entity
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

#define COLOR_CONTATNT_XYZ_ADAPTATION_METHOD_PRIMARY_SPECIALIZE( DP_scaling,  \
   DP_a11, DP_a12, DP_a13, \
   DP_a21, DP_a22, DP_a23, \
   DP_a31, DP_a32, DP_a33, \
   DP_i11, DP_i12, DP_i13, \
   DP_i21, DP_i22, DP_i23, \
   DP_i31, DP_i32, DP_i33 ) \
        template < typename scalar_name >                                     \
         struct method< scalar_name, DP_scaling >                             \
          {                                                                   \
           typedef scalar_name scalar_type;                                   \
                                                                              \
           static /* constexpr*/ scalar_type const a11(){ return DP_a11; }    \
           static /* constexpr*/ scalar_type const a12(){ return DP_a12; }    \
           static /* constexpr*/ scalar_type const a13(){ return DP_a13; }    \
                                                                              \
           static /* constexpr*/ scalar_type const a21(){ return DP_a21; }    \
           static /* constexpr*/ scalar_type const a22(){ return DP_a22; }    \
           static /* constexpr*/ scalar_type const a23(){ return DP_a23; }    \
                                                                              \
           static /* constexpr*/ scalar_type const a31(){ return DP_a31; }    \
           static /* constexpr*/ scalar_type const a32(){ return DP_a32; }    \
           static /* constexpr*/ scalar_type const a33(){ return DP_a33; }    \
                                                                              \
           static /* constexpr*/ scalar_type const i11(){ return DP_i11; }    \
           static /* constexpr*/ scalar_type const i12(){ return DP_i12; }    \
           static /* constexpr*/ scalar_type const i13(){ return DP_i13; }    \
                                                                              \
           static /* constexpr*/ scalar_type const i21(){ return DP_i21; }    \
           static /* constexpr*/ scalar_type const i22(){ return DP_i22; }    \
           static /* constexpr*/ scalar_type const i23(){ return DP_i23; }    \
                                                                              \
           static /* constexpr*/ scalar_type const i31(){ return DP_i31; }    \
           static /* constexpr*/ scalar_type const i32(){ return DP_i32; }    \
           static /* constexpr*/ scalar_type const i33(){ return DP_i33; }    \
          }



COLOR_CONTATNT_XYZ_ADAPTATION_METHOD_PRIMARY_SPECIALIZE( ::color::constant::xyz::adaptation::XYZ_entity,
                                                    1,  0,  0,
                                                    0,  1,  0,
                                                    0,  0,  1,
                                                    1,  0,  0,
                                                    0,  1,  0,
                                                    0,  0,  1
                                                    );

COLOR_CONTATNT_XYZ_ADAPTATION_METHOD_PRIMARY_SPECIALIZE(  ::color::constant::xyz::adaptation::Bradford_entity,
                                                    0.8951000,  0.2664000, -0.1614000,
                                                   -0.7502000,  1.7135000,  0.0367000,
                                                    0.0389000, -0.0685000,  1.0296000,
                                                    0.9869929, -0.1470543,  0.1599627,
                                                    0.4323053,  0.5183603,  0.0492912,
                                                   -0.0085287,  0.0400428,  0.9684867
                                                    );


COLOR_CONTATNT_XYZ_ADAPTATION_METHOD_PRIMARY_SPECIALIZE(  ::color::constant::xyz::adaptation::VonKries_entity,
                                                     0.4002400,  0.7076000, -0.0808100,
                                                    -0.2263000,  1.1653200,  0.0457000,
                                                     0.0000000,  0.0000000,  0.9182200,
                                                     1.8599364, -1.1293816,  0.2198974,
                                                     0.3611914,  0.6388125, -0.0000064,
                                                     0.0000000,  0.0000000,  1.0890636
                                                    );


        template
         <
           typename scalar_name
          ,::color::constant::xyz::illuminant::name_entity            left_number = ::color::constant::xyz::illuminant::D50_entity
          ,::color::constant::xyz::illuminant::name_entity           right_number = ::color::constant::xyz::illuminant::D65_entity
          ,::color::constant::xyz::adaptation::scaling_entity scaling_number      = ::color::constant::xyz::adaptation::XYZ_entity
         >
         struct matrix
          {
           typedef scalar_name scalar_type;
           typedef method<scalar_type,scaling_number > method_type;

           typedef ::color::constant::xyz::illuminant::point< scalar_name, left_number,  ::color::constant::xyz::illuminant::two_entity > source_type;
           typedef ::color::constant::xyz::illuminant::point< scalar_name, right_number, ::color::constant::xyz::illuminant::two_entity > destination_type;


           static /* constexpr*/  scalar_type rho_S()    { return method_type::a11() * source_type::X()  +  method_type::a12() * source_type::Y()  +  method_type::a13() * source_type::Z(); }
           static /* constexpr*/  scalar_type gamma_S()  { return method_type::a21() * source_type::X()  +  method_type::a22() * source_type::Y()  +  method_type::a23() * source_type::Z(); }
           static /* constexpr*/  scalar_type beta_S()   { return method_type::a31() * source_type::X()  +  method_type::a32() * source_type::Y()  +  method_type::a33() * source_type::Z(); }

           static /* constexpr*/  scalar_type rho_D()    { return method_type::a11() * destination_type::X()  +  method_type::a12() * destination_type::Y()  +  method_type::a13() * destination_type::Z(); }
           static /* constexpr*/  scalar_type gamma_D()  { return method_type::a21() * destination_type::X()  +  method_type::a22() * destination_type::Y()  +  method_type::a23() * destination_type::Z(); }
           static /* constexpr*/  scalar_type beta_D()   { return method_type::a31() * destination_type::X()  +  method_type::a32() * destination_type::Y()  +  method_type::a33() * destination_type::Z(); }

           static /* constexpr*/  scalar_type rho_R()    { return rho_D()   / rho_S(); }
           static /* constexpr*/  scalar_type gamma_R()  { return gamma_D() / gamma_S(); }
           static /* constexpr*/  scalar_type beta_R()   { return beta_D()  / beta_S(); }

           static /* constexpr*/ scalar_type const a11(){ return method_type::a11()*method_type::i11()*rho_R() + method_type::a21()*method_type::i12()*gamma_R() + method_type::a31()*method_type::i13()*beta_R(); }
           static /* constexpr*/ scalar_type const a12(){ return method_type::a12()*method_type::i11()*rho_R() + method_type::a22()*method_type::i12()*gamma_R() + method_type::a32()*method_type::i13()*beta_R(); }
           static /* constexpr*/ scalar_type const a13(){ return method_type::a13()*method_type::i11()*rho_R() + method_type::a23()*method_type::i12()*gamma_R() + method_type::a33()*method_type::i13()*beta_R(); }
           static /* constexpr*/ scalar_type const a21(){ return method_type::a11()*method_type::i21()*rho_R() + method_type::a21()*method_type::i22()*gamma_R() + method_type::a31()*method_type::i23()*beta_R(); }
           static /* constexpr*/ scalar_type const a22(){ return method_type::a12()*method_type::i21()*rho_R() + method_type::a22()*method_type::i22()*gamma_R() + method_type::a32()*method_type::i23()*beta_R(); }
           static /* constexpr*/ scalar_type const a23(){ return method_type::a13()*method_type::i21()*rho_R() + method_type::a23()*method_type::i22()*gamma_R() + method_type::a33()*method_type::i23()*beta_R(); }
           static /* constexpr*/ scalar_type const a31(){ return method_type::a11()*method_type::i31()*rho_R() + method_type::a21()*method_type::i32()*gamma_R() + method_type::a31()*method_type::i33()*beta_R(); }
           static /* constexpr*/ scalar_type const a32(){ return method_type::a12()*method_type::i31()*rho_R() + method_type::a22()*method_type::i32()*gamma_R() + method_type::a32()*method_type::i33()*beta_R(); }
           static /* constexpr*/ scalar_type const a33(){ return method_type::a13()*method_type::i31()*rho_R() + method_type::a23()*method_type::i32()*gamma_R() + method_type::a33()*method_type::i33()*beta_R(); }

           static /* constexpr*/ scalar_type const i11(){ return method_type::a11()*method_type::i11()/rho_R() + method_type::a21()*method_type::i12()/gamma_R() + method_type::a31()*method_type::i13()/beta_R(); }
           static /* constexpr*/ scalar_type const i12(){ return method_type::a12()*method_type::i11()/rho_R() + method_type::a22()*method_type::i12()/gamma_R() + method_type::a32()*method_type::i13()/beta_R(); }
           static /* constexpr*/ scalar_type const i13(){ return method_type::a13()*method_type::i11()/rho_R() + method_type::a23()*method_type::i12()/gamma_R() + method_type::a33()*method_type::i13()/beta_R(); }
           static /* constexpr*/ scalar_type const i21(){ return method_type::a11()*method_type::i21()/rho_R() + method_type::a21()*method_type::i22()/gamma_R() + method_type::a31()*method_type::i23()/beta_R(); }
           static /* constexpr*/ scalar_type const i22(){ return method_type::a12()*method_type::i21()/rho_R() + method_type::a22()*method_type::i22()/gamma_R() + method_type::a32()*method_type::i23()/beta_R(); }
           static /* constexpr*/ scalar_type const i23(){ return method_type::a13()*method_type::i21()/rho_R() + method_type::a23()*method_type::i22()/gamma_R() + method_type::a33()*method_type::i23()/beta_R(); }
           static /* constexpr*/ scalar_type const i31(){ return method_type::a11()*method_type::i31()/rho_R() + method_type::a21()*method_type::i32()/gamma_R() + method_type::a31()*method_type::i33()/beta_R(); }
           static /* constexpr*/ scalar_type const i32(){ return method_type::a12()*method_type::i31()/rho_R() + method_type::a22()*method_type::i32()/gamma_R() + method_type::a32()*method_type::i33()/beta_R(); }
           static /* constexpr*/ scalar_type const i33(){ return method_type::a13()*method_type::i31()/rho_R() + method_type::a23()*method_type::i32()/gamma_R() + method_type::a33()*method_type::i33()/beta_R(); }


           static void encode( scalar_name &X, scalar_name &Y, scalar_name &Z )
            {
             scalar_type x = a11() * X + a12() * Y + a13() * Z; 
             scalar_type y = a21() * X + a22() * Y + a23() * Z;
             scalar_type z = a31() * X + a32() * Y + a33() * Z;

             X =  x;
             Y =  y;
             Z =  z;
            }

           static void decode( scalar_name &X, scalar_name &Y, scalar_name &Z )
            {
             scalar_type x = i11() * X + i12() * Y + i13() * Z; 
             scalar_type y = i21() * X + i22() * Y + i23() * Z;
             scalar_type z = i31() * X + i32() * Y + i33() * Z;

             X =  x;
             Y =  y;
             Z =  z;
            }

        };

        template
         <
           typename scalar_name
          ,::color::constant::xyz::illuminant::name_entity            both_number
          ,::color::constant::xyz::adaptation::scaling_entity scaling_number
         >
         struct matrix< scalar_name, both_number, both_number, scaling_number >
          {
           typedef scalar_name scalar_type;

           static void encode( scalar_name &X, scalar_name &Y, scalar_name &Z )
            {
             // Do nothing! Identity transformation.
            }
           static void decode( scalar_name &X, scalar_name &Y, scalar_name &Z )
            {
             // Do nothing! Identity transformation.
            }
          };

       }
     }
   }
 }

#endif

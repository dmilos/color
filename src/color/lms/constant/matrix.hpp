#ifndef color_contant_lms_parameter
#define color_contant_lms_parameter

// ::color::constant::lms::matrix< scalar_name, reference_number >::Wr()

#include "./reference.hpp"



namespace color
 {
  namespace constant
   {
    namespace lms
     {

        template< typename scalar_name, ::color::constant::lms::reference_enum reference_number >
         struct matrix
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

        template< typename scalar_name >
         struct matrix< scalar_name, ::color::constant::lms::von_Kries_E_entity >
          {
           typedef scalar_name scalar_type;

           static /* constexpr*/ scalar_type const a11(){ return scalar_type(  0.38971 ); }
           static /* constexpr*/ scalar_type const a12(){ return scalar_type(  0.68898 ); }
           static /* constexpr*/ scalar_type const a13(){ return scalar_type( -0.07868 ); }

           static /* constexpr*/ scalar_type const a21(){ return scalar_type( -0.22981 ); }
           static /* constexpr*/ scalar_type const a22(){ return scalar_type(  1.18340 ); }
           static /* constexpr*/ scalar_type const a23(){ return scalar_type(  0.04641 ); }

           static /* constexpr*/ scalar_type const a31(){ return 0; }
           static /* constexpr*/ scalar_type const a32(){ return 0; }
           static /* constexpr*/ scalar_type const a33(){ return 1; }

           static /* constexpr*/ scalar_type const i11(){ return 1.910196834052030; }
           static /* constexpr*/ scalar_type const i12(){ return -1.112123892787870; }
           static /* constexpr*/ scalar_type const i13(){ return 0.201907956767499; }

           static /* constexpr*/ scalar_type const i21(){ return 0.370950088248689; }
           static /* constexpr*/ scalar_type const i22(){ return 0.629054257392613; }
           static /* constexpr*/ scalar_type const i23(){ return -0.000008055142184; }

           static /* constexpr*/ scalar_type const i31(){ return 0; }
           static /* constexpr*/ scalar_type const i32(){ return 0; }
           static /* constexpr*/ scalar_type const i33(){ return 1; }
          };

        template< typename scalar_name >
         struct matrix< scalar_name, ::color::constant::lms::von_Kries_D65_entity >
          {
           typedef scalar_name scalar_type;

           static /* constexpr*/ scalar_type const a11(){ return scalar_type(  0.4002 ); }
           static /* constexpr*/ scalar_type const a12(){ return scalar_type(  0.7076 ); }
           static /* constexpr*/ scalar_type const a13(){ return scalar_type( -0.0808 ); }

           static /* constexpr*/ scalar_type const a21(){ return scalar_type( -0.2263 ); }
           static /* constexpr*/ scalar_type const a22(){ return scalar_type(  1.1653  ); }
           static /* constexpr*/ scalar_type const a23(){ return scalar_type(  0.0457  ); }

           static /* constexpr*/ scalar_type const a31(){ return scalar_type( 0 ); }
           static /* constexpr*/ scalar_type const a32(){ return scalar_type( 0 ); }
           static /* constexpr*/ scalar_type const a33(){ return scalar_type( 0.9182 ); }

           static /* constexpr*/ scalar_type const i11(){ return scalar_type(  1.860066612508240 ); }
           static /* constexpr*/ scalar_type const i12(){ return scalar_type( -1.129480078100770 ); }
           static /* constexpr*/ scalar_type const i13(){ return scalar_type(  0.219898303049304 ); }

           static /* constexpr*/ scalar_type const i21(){ return scalar_type(  0.361222924921148 ); }
           static /* constexpr*/ scalar_type const i22(){ return scalar_type(  0.638804306466829 ); }
           static /* constexpr*/ scalar_type const i23(){ return scalar_type( -0.000007127501531 ); }

           static /* constexpr*/ scalar_type const i31(){ return scalar_type( 0 ); }
           static /* constexpr*/ scalar_type const i32(){ return scalar_type( 0 ); }
           static /* constexpr*/ scalar_type const i33(){ return scalar_type( 1.089087344805050 ); }
          };

        template< typename scalar_name >
         struct matrix< scalar_name, ::color::constant::lms::BFD_entity >
          {
           typedef scalar_name scalar_type;

           static /* constexpr*/ scalar_type const a11(){ return scalar_type(  0.8951 ); }
           static /* constexpr*/ scalar_type const a12(){ return scalar_type(  0.2664 ); }
           static /* constexpr*/ scalar_type const a13(){ return scalar_type( -0.1614 ); }

           static /* constexpr*/ scalar_type const a21(){ return scalar_type( -0.7502 ); }
           static /* constexpr*/ scalar_type const a22(){ return scalar_type(  1.7135 ); }
           static /* constexpr*/ scalar_type const a23(){ return scalar_type(  0.0367 ); }

           static /* constexpr*/ scalar_type const a31(){ return scalar_type(  0.0389 ); }
           static /* constexpr*/ scalar_type const a32(){ return scalar_type( -0.0685 ); }
           static /* constexpr*/ scalar_type const a33(){ return scalar_type(  1.0296 ); }

           static /* constexpr*/ scalar_type const i11(){ return  0.986992905466712; }
           static /* constexpr*/ scalar_type const i12(){ return -0.147054256420990; }
           static /* constexpr*/ scalar_type const i13(){ return  0.159962651663731; }

           static /* constexpr*/ scalar_type const i21(){ return 0.432305269723394; }
           static /* constexpr*/ scalar_type const i22(){ return 0.518360271536777; }
           static /* constexpr*/ scalar_type const i23(){ return 0.049291228212856; }

           static /* constexpr*/ scalar_type const i31(){ return -0.008528664575177; }
           static /* constexpr*/ scalar_type const i32(){ return  0.040042821654085; }
           static /* constexpr*/ scalar_type const i33(){ return  0.968486695787550; }
          };

        template< typename scalar_name >
         struct matrix< scalar_name, ::color::constant::lms::MCAT02_entity >
          {
           typedef scalar_name scalar_type;

           static /* constexpr*/ scalar_type const a11(){ return scalar_type(  0.7328 ); }
           static /* constexpr*/ scalar_type const a12(){ return scalar_type(  0.4296 ); }
           static /* constexpr*/ scalar_type const a13(){ return scalar_type( -0.1624 ); }

           static /* constexpr*/ scalar_type const a21(){ return scalar_type( -0.7036 ); }
           static /* constexpr*/ scalar_type const a22(){ return scalar_type(  1.6975 ); }
           static /* constexpr*/ scalar_type const a23(){ return scalar_type(  0.0061 ); }

           static /* constexpr*/ scalar_type const a31(){ return scalar_type(  0.0030 ); }
           static /* constexpr*/ scalar_type const a32(){ return scalar_type(  0.0136 ); }
           static /* constexpr*/ scalar_type const a33(){ return scalar_type(  0.9834 ); }

           static /* constexpr*/ scalar_type const i11(){ return  1.096123820835510 ; }
           static /* constexpr*/ scalar_type const i12(){ return -0.278869000218287; }
           static /* constexpr*/ scalar_type const i13(){ return  0.182745179382773; }

           static /* constexpr*/ scalar_type const i21(){ return  0.454369041975359  ; }
           static /* constexpr*/ scalar_type const i22(){ return  0.473533154307412  ; }
           static /* constexpr*/ scalar_type const i23(){ return  0.072097803717229; }

           static /* constexpr*/ scalar_type const i31(){ return -0.009627608738429 ; }
           static /* constexpr*/ scalar_type const i32(){ return -0.005698031216113  ; }
           static /* constexpr*/ scalar_type const i33(){ return  1.015325639954540; }
          };

     }
   }
 }

#endif


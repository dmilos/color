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

        template< typename scalar_name, ::color::constant::lms::reference_enum reference_number = ::color::constant::lms::error_entity  >
         struct matrix
          {
           typedef scalar_name scalar_type;
           typedef ::color::constant::lms::matrix< scalar_name, ::color::constant::lms::error_entity > this_type;

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
           typedef ::color::constant::lms::matrix< scalar_name, ::color::constant::lms::von_Kries_E_entity > this_type;

           static /* constexpr*/ scalar_type const a11(){ return 0.38971;  }
           static /* constexpr*/ scalar_type const a12(){ return 0.68898;  }
           static /* constexpr*/ scalar_type const a13(){ return -0.07868; }

           static /* constexpr*/ scalar_type const a21(){ return -0.22981; }
           static /* constexpr*/ scalar_type const a22(){ return 1.18340;  }
           static /* constexpr*/ scalar_type const a23(){ return 0.04641;  }

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
           typedef ::color::constant::lms::matrix< scalar_name, ::color::constant::lms::von_Kries_D65_entity > this_type;

          };

        template< typename scalar_name >
         struct matrix< scalar_name, ::color::constant::lms::BFD_entity >
          {
           typedef scalar_name scalar_type;
           typedef ::color::constant::lms::matrix< scalar_name, ::color::constant::lms::BFD_entity > this_type;

          };

        template< typename scalar_name >
         struct matrix< scalar_name, ::color::constant::lms::MCAT02_entity >
          {
           typedef scalar_name scalar_type;
           typedef ::color::constant::lms::matrix< scalar_name, ::color::constant::lms::MCAT02_entity > this_type;

          };

     }
   }
 }

#endif


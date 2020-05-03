#ifndef color_contant_xyz_rgb
#define color_contant_xyz_rgb

// ::color::constant::xyz::space::primary< scalar_name, sRGB_entity >::x()

#include "./illuminant.hpp"

namespace color
 {
  namespace constant
   {
    namespace xyz
     {
      namespace space
       {

        enum name_entity
         {
          none_entity,
          LabGamut_entity,
          Adobe_entity,
          Apple_entity,
          Best_entity,
          Beta_entity,
          Bruce_entity,
          CIE_entity,
          ColorMatch_entity,
          Don_entity,
          ECI_entity,
          Ekta_Space_PS5_entity,
          NTSC_entity,
          PAL_SECAM_entity,
          ProPhoto_entity,
          SMPTE_C_entity,
          sRGB_entity,
          WideGamut_entity,
          //BT2020_entity,
         };

        template< typename scalar_name, ::color::constant::xyz::space::name_entity name_number >
         struct primary
          {
           public:
             typedef scalar_name scalar_type;
             enum { name_entity = name_number };
           private:
             typedef std::array<scalar_type,2> coord_type;
           public:
             static /* constexpr*/ coord_type const& red()  { static coord_type value{}; return value; }
             static /* constexpr*/ coord_type const& green(){ static coord_type value{}; return value; }
             static /* constexpr*/ coord_type const& blue() { static coord_type value{}; return value; }
          };


#define COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( DP_system, DP_red_x, DP_red_y, DP_green_x, DP_green_y, DP_blue_x, DP_blue_y  )  \
        template< typename scalar_name >                                              \
         struct primary< scalar_name, DP_system >                                     \
          {                                                                           \
           public:                                                                    \
             typedef scalar_name scalar_type;                                         \
             enum { name_entity = DP_system };                                        \
           private:                                                                   \
             typedef std::array<scalar_type,2> coord_type;                            \
           public:                                                                    \
             static coord_type const& red()  { static coord_type value{ { DP_red_x,   DP_red_y   } }; return value; }  \
             static coord_type const& green(){ static coord_type value{ { DP_green_x, DP_green_y } }; return value; }  \
             static coord_type const& blue() { static coord_type value{ { DP_blue_x,  DP_blue_y  } }; return value; }  \
          }

      //COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::LabGamut_entity,       )
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Adobe_entity,          0.6400, 0.3300,  0.2100, 0.7100,  0.1500, 0.0600 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Apple_entity,          0.6250, 0.3400,  0.2800, 0.5950,  0.1550, 0.0700 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Best_entity,           0.7347, 0.2653,  0.2150, 0.7750,  0.1300, 0.0350 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Beta_entity,           0.6888, 0.3112,  0.1986, 0.7551,  0.1265, 0.0352 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Bruce_entity,          0.6400, 0.3300,  0.2800, 0.6500,  0.1500, 0.0600 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::CIE_entity,            0.7350, 0.2650,  0.2740, 0.7170,  0.1670, 0.0090 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::ColorMatch_entity,     0.6300, 0.3400,  0.2950, 0.6050,  0.1500, 0.0750 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Don_entity,            0.6960, 0.3000,  0.2150, 0.7650,  0.1300, 0.0350 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::ECI_entity,            0.6700, 0.3300,  0.2100, 0.7100,  0.1400, 0.0800 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Ekta_Space_PS5_entity, 0.6950, 0.3050,  0.2600, 0.7000,  0.1100, 0.0050 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::NTSC_entity,           0.6700, 0.3300,  0.2100, 0.7100,  0.1400, 0.0800 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::PAL_SECAM_entity,      0.6400, 0.3300,  0.2900, 0.6000,  0.1500, 0.0600 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::ProPhoto_entity,       0.7347, 0.2653,  0.1596, 0.8404,  0.0366, 0.0001 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::SMPTE_C_entity,        0.6300, 0.3400,  0.3100, 0.5950,  0.1550, 0.0700 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::sRGB_entity,           0.6400, 0.3300,  0.3000, 0.6000,  0.1500, 0.0600 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::WideGamut_entity,      0.7350, 0.2650,  0.1150, 0.8260,  0.1570, 0.0180 );
      //COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::BT2020_entity,         0.7080, 0.2920,  0.1700, 0.7970,  0.1310, 0.0460 );
      //COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::KodakDC_entity,        0.6492, 0.3314,  0.3219, 0.5997,  0.1548, 0.0646 );

#undef COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE

        template< typename scalar_name, ::color::constant::xyz::space::name_entity name_number = ::color::constant::xyz::space::none_entity >
         struct gamma
          {
           typedef scalar_name scalar_type;

           static scalar_type  encode( scalar_type const& value )// RGB <-  XYZ
            {
             return value ;
            }

           static scalar_type  decode( scalar_type const& value )  // XYZ <- RGB
            {
             return  value;
            }
          };

#define COLOR_CONTATNT_XYZ_SPACE_GAMMA_TRANSFER_SPECIALIZE(DP_name,DP_g, DP_a)                   \
        template< typename scalar_name >                                                         \
         struct gamma< scalar_name, DP_name >                                                    \
          {                                                                                      \
           typedef scalar_name scalar_type;                                                      \
                                                                                                 \
           static scalar_type  s()                                                               \
            {                                                                                    \
             return pow( (1+DP_a)/ DP_g, DP_g ) * pow( ( DP_g-1) / DP_a, DP_g-1);                \
            }                                                                                    \
                                                                                                 \
           static scalar_type  t( )                                                              \
            {                                                                                    \
             return DP_a/(DP_g-1);                                                               \
            }                                                                                    \
                                                                                                 \
           static scalar_type  encode( scalar_type const& value )                                \
            {                                                                                    \
             if( value < t()/s() ) return s() * value;                                           \
             return ( 1 + DP_a ) * pow( value, scalar_type(1) / scalar_type(DP_g) ) - DP_a;      \
            }                                                                                    \
                                                                                                 \
           static scalar_type  decode( scalar_type const&  value )                               \
            {                                                                                    \
             if( value < t() ) return value / s();                                               \
             return pow( ( value + DP_a ) / ( 1 + DP_a ), DP_g );                                \
            }                                                                                    \
          }

          COLOR_CONTATNT_XYZ_SPACE_GAMMA_TRANSFER_SPECIALIZE( ::color::constant::xyz::space::ECI_entity,                3, 0.16  );
          COLOR_CONTATNT_XYZ_SPACE_GAMMA_TRANSFER_SPECIALIZE( ::color::constant::xyz::space::sRGB_entity,             2.4, 0.055 );

          // ??? COLOR_CONTATNT_XYZ_SPACE_GAMMA_TRANSFER_SPECIALIZE( ::color::constant::xyz::space::NTSC_entity,             0.45, 0.099 );
          // ??? COLOR_CONTATNT_XYZ_SPACE_GAMMA_TRANSFER_SPECIALIZE( ::color::constant::xyz::space::PAL_SECAM_entity,        0.45, 0.099 );


#undef COLOR_CONTATNT_XYZ_SPACE_GAMMA_TRANSFER_SPECIALIZE

#define COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE(DP_name,DP_gamma)\
        template< typename scalar_name >                                                                                                \
         struct gamma< scalar_name, DP_name >                                                                                           \
          {                                                                                                                             \
           typedef scalar_name scalar_type;                                                                                             \
           static scalar_type  encode( scalar_type const& value ) { return pow( value, scalar_type(1) / scalar_type( DP_gamma ) ); }    \
           static scalar_type  decode( scalar_type const& value ) { return pow( value, scalar_type( DP_gamma ) ); }                     \
          }

       COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE( ::color::constant::xyz::space::Adobe_entity,            2.19921875 );
       COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE( ::color::constant::xyz::space::Apple_entity,            1.8  );
       COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE( ::color::constant::xyz::space::Best_entity,             2.2  );
       COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE( ::color::constant::xyz::space::Beta_entity,             2.2  );
       COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE( ::color::constant::xyz::space::Bruce_entity,            2.2  );
       COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE( ::color::constant::xyz::space::CIE_entity,              2.2  );
       COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE( ::color::constant::xyz::space::ColorMatch_entity,       1.8 );
       COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE( ::color::constant::xyz::space::Don_entity,              2.2 );
     //COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE( ::color::constant::xyz::space::ECI_entity,              L* );
       COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE( ::color::constant::xyz::space::Ekta_Space_PS5_entity,   2.2 );
       COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE( ::color::constant::xyz::space::NTSC_entity,             2.2 );
       COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE( ::color::constant::xyz::space::PAL_SECAM_entity,        2.2 );
       COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE( ::color::constant::xyz::space::ProPhoto_entity,         1.8 );
       COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE( ::color::constant::xyz::space::SMPTE_C_entity,          2.2  );
     //COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE( ::color::constant::xyz::space::sRGB_entity,             sRGB  );
       COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE( ::color::constant::xyz::space::WideGamut_entity,        2.2 );
//TODO COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE( ::color::constant::xyz::space::BT2020_entity,           BT2020 );

#undef COLOR_CONTATNT_XYZ_SPACE_GAMMA_PURE_SPECIALIZE

        template<  ::color::constant::xyz::space::name_entity name_number >
         struct illuminant
          {
           typedef ::color::constant::xyz::illuminant::name_entity         name_type;
           typedef ::color::constant::xyz::illuminant::observer_entity observer_type;

           static name_type         name() { return ::color::constant::xyz::illuminant::D65_entity; }
           static observer_type observer() { return ::color::constant::xyz::illuminant::two_entity ; }
          };

#define COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( DP_space, DP_name, DP_observer )   \
        template<>                                                                         \
         struct illuminant< DP_space >                                                     \
          {                                                                                \
           typedef ::color::constant::xyz::illuminant::name_entity         name_type;        \
           typedef ::color::constant::xyz::illuminant::observer_entity observer_type;        \
                                                                                           \
           enum { name_entity   = DP_name };                                               \
           enum { observer_entity = DP_observer };                                         \
                                                                                           \
           static name_type     name() { return DP_name; }                                 \
           static observer_type observer() { return DP_observer; }                         \
          }

        COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::LabGamut_entity,        ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::Adobe_entity,           ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::Apple_entity,           ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::Best_entity,            ::color::constant::xyz::illuminant::D50_entity, ::color::constant::xyz::illuminant::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::Beta_entity,            ::color::constant::xyz::illuminant::D50_entity, ::color::constant::xyz::illuminant::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::Bruce_entity,           ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::CIE_entity,             ::color::constant::xyz::illuminant::E_entity,   ::color::constant::xyz::illuminant::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::ColorMatch_entity,      ::color::constant::xyz::illuminant::D50_entity, ::color::constant::xyz::illuminant::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::Don_entity,             ::color::constant::xyz::illuminant::D50_entity, ::color::constant::xyz::illuminant::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::ECI_entity,             ::color::constant::xyz::illuminant::D50_entity, ::color::constant::xyz::illuminant::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::Ekta_Space_PS5_entity,  ::color::constant::xyz::illuminant::D50_entity, ::color::constant::xyz::illuminant::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::NTSC_entity,            ::color::constant::xyz::illuminant::C_entity,   ::color::constant::xyz::illuminant::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::PAL_SECAM_entity,       ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::ProPhoto_entity,        ::color::constant::xyz::illuminant::D50_entity, ::color::constant::xyz::illuminant::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::SMPTE_C_entity,         ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::sRGB_entity,            ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::WideGamut_entity,       ::color::constant::xyz::illuminant::D50_entity, ::color::constant::xyz::illuminant::two_entity );
      //COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE( ::color::constant::xyz::space::BT2020_entity,          ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity );

#undef COLOR_CONTATNT_XYZ_SPACE_ILLUMINANT_SPECIALIZE

       }
     }
   }
 }

#endif

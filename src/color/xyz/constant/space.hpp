#ifndef color_contant_xyz_rgb
#define color_contant_xyz_rgb

// ::color::constant::xyz::space::primary< scalar_name, sRGB_entity >::x()


namespace color
 {
  namespace constant
   {
    namespace xyz
     {
      namespace space
       {

        enum name_enum
         {
          invalid_entity,
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
         };

        template< typename scalar_name, ::color::constant::xyz::space::name_enum name_number >
         struct primary
          {
           public:
             typedef scalar_name scalar_type;
           private:
             typedef std::array<scalar_type,2> coord_type;
           public:
             static /* constexpr*/ coord_type red()  { return coord_type{}; }
             static /* constexpr*/ coord_type green(){ return coord_type{}; }
             static /* constexpr*/ coord_type blue() { return coord_type{}; }
          };


#define COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( DP_system, DP_red_x, DP_red_y, DP_green_x, DP_green_y, DP_blue_x, DP_blue_y  )  \
        template< typename scalar_name >                                              \
         struct primary< scalar_name, DP_system >                                     \
          {                                                                           \
           public:                                                                    \
             typedef scalar_name scalar_type;                                         \
           private:                                                                   \
             typedef std::array<scalar_type,2> coord_type;                            \
           public:                                                                    \
             static coord_type red()  { return coord_type{DP_red_x,DP_red_y}; }       \
             static coord_type green(){ return coord_type{DP_green_x, DP_green_y}; }  \
             static coord_type blue() { return coord_type{DP_blue_x, DP_blue_y }; }   \
          }

      //COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( ::color::constant::xyz::LabGamut_entity,       )
        COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Adobe_entity,          0.6400, 0.3300,  0.2100, 0.7100,  0.1500, 0.0600 );
        COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Apple_entity,          0.6250, 0.3400,  0.2800, 0.5950,  0.1550, 0.0700 );
        COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Best_entity,           0.7347, 0.2653,  0.2150, 0.7750,  0.1300, 0.0350 );
        COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Beta_entity,           0.6888, 0.3112,  0.1986, 0.7551,  0.1265, 0.0352 );
        COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Bruce_entity,          0.6400, 0.3300,  0.2800, 0.6500,  0.1500, 0.0600 );
        COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::CIE_entity,            0.7350, 0.2650,  0.2740, 0.7170,  0.1670, 0.0090 );
        COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::ColorMatch_entity,     0.6300, 0.3400,  0.2950, 0.6050,  0.1500, 0.0750 );
        COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Don_entity,            0.6960, 0.3000,  0.2150, 0.7650,  0.1300, 0.0350 );
        COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::ECI_entity,            0.6700, 0.3300,  0.2100, 0.7100,  0.1400, 0.0800 );
        COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Ekta_Space_PS5_entity, 0.6950, 0.3050,  0.2600, 0.7000,  0.1100, 0.0050 );
        COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::NTSC_entity,           0.6700, 0.3300,  0.2100, 0.7100,  0.1400, 0.0800 );
        COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::PAL_SECAM_entity,      0.6400, 0.3300,  0.2900, 0.6000,  0.1500, 0.0600 );
        COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::ProPhoto_entity,       0.7347, 0.2653,  0.1596, 0.8404,  0.0366, 0.0001 );
        COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::SMPTE_C_entity,        0.6300, 0.3400,  0.3100, 0.5950,  0.1550, 0.0700 );
        COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::sRGB_entity,           0.6400, 0.3300,  0.3000, 0.6000,  0.1500, 0.0600 );
        COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::WideGamut_entity,      0.7350, 0.2650,  0.1150, 0.8260,  0.1570, 0.0180 );

#undef COLOR_CONTATNT_XYZ_PRIMARY_SPECIALIZE


        template< typename scalar_name, ::color::constant::xyz::space::name_enum name_number >
         struct gamma
          {
           typedef scalar_name scalar_type;

           static scalar_type value()  { return scalar_type{}; }
          };


       }
     }
   }
 }

#endif

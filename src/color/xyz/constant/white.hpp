#ifndef color_contant_xyz_wp
#define color_contant_xyz_wp

// ::color::constant::xyz::white::point< scalar_name,::color::constant::xyz::white::name_enum name_number, ::color::constant::xyz::white::degree_enum degree_number >::x()


namespace color
 {
  namespace constant
   {
    namespace xyz
     {
      namespace white
       {

        enum  degree_enum { two_entity, ten_entity };
        enum  name_enum
         {
          A_entity,
          B_entity,
          C_entity,
          D50_entity,
          D55_entity,
          D65_entity,
          D75_entity,
          E_entity,
          F1_entity,
          F2_entity,
          F3_entity,
          F4_entity,
          F5_entity,
          F6_entity,
          F7_entity,
          F8_entity,
          F9_entity,
          F10_entity,
          F11_entity,
          F12_entity
         };

      namespace _intrnal
       {

        template
         < 
            typename scalar_name
           ,::color::constant::xyz::white::name_enum      name_number
           ,::color::constant::xyz::white::degree_enum  degree_number
         >
         struct base
          {
          };

#define COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( DP_name, DP_degree, DP_x, DP_y )  \
        template< typename scalar_name >                              \
          struct base< scalar_name, DP_name, DP_degree >              \
           {                                                          \
            typedef scalar_name scalar_type;                          \
            static scalar_type x(){ return scalar_type(DP_x); }       \
            static scalar_type y(){ return scalar_type(DP_y); }       \
           }

        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::A_entity,   ::color::constant::xyz::white::two_entity, 0.44757, 0.40745 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::B_entity,   ::color::constant::xyz::white::two_entity, 0.34842, 0.35161 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::C_entity,   ::color::constant::xyz::white::two_entity, 0.31006, 0.31616 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::D50_entity, ::color::constant::xyz::white::two_entity, 0.34567, 0.35850 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::D55_entity, ::color::constant::xyz::white::two_entity, 0.33242, 0.34743 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::D65_entity, ::color::constant::xyz::white::two_entity, 0.31271, 0.32902 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::D75_entity, ::color::constant::xyz::white::two_entity, 0.29902, 0.31485 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::E_entity,   ::color::constant::xyz::white::two_entity, 0.33333, 0.33333 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F1_entity,  ::color::constant::xyz::white::two_entity, 0.31310, 0.33727 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F2_entity,  ::color::constant::xyz::white::two_entity, 0.37208, 0.37529 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F3_entity,  ::color::constant::xyz::white::two_entity, 0.40910, 0.39430 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F4_entity,  ::color::constant::xyz::white::two_entity, 0.44018, 0.40329 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F5_entity,  ::color::constant::xyz::white::two_entity, 0.31379, 0.34531 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F6_entity,  ::color::constant::xyz::white::two_entity, 0.37790, 0.38835 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F7_entity,  ::color::constant::xyz::white::two_entity, 0.31292, 0.32933 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F8_entity,  ::color::constant::xyz::white::two_entity, 0.34588, 0.35875 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F9_entity,  ::color::constant::xyz::white::two_entity, 0.37417, 0.37281 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F10_entity, ::color::constant::xyz::white::two_entity, 0.34609, 0.35986 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F11_entity, ::color::constant::xyz::white::two_entity, 0.38052, 0.37713 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F12_entity, ::color::constant::xyz::white::two_entity, 0.43695, 0.40441 );

        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::A_entity,   ::color::constant::xyz::white::ten_entity, 0.45117, 0.40594 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::B_entity,   ::color::constant::xyz::white::ten_entity, 0.34980, 0.35270 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::C_entity,   ::color::constant::xyz::white::ten_entity, 0.31039, 0.31905 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::D50_entity, ::color::constant::xyz::white::ten_entity, 0.34773, 0.35952 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::D55_entity, ::color::constant::xyz::white::ten_entity, 0.33411, 0.34877 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::D65_entity, ::color::constant::xyz::white::ten_entity, 0.31382, 0.33100 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::D75_entity, ::color::constant::xyz::white::ten_entity, 0.29968, 0.31740 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::E_entity,   ::color::constant::xyz::white::ten_entity, 0.33333, 0.33333 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F1_entity,  ::color::constant::xyz::white::ten_entity, 0.31811, 0.33559 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F2_entity,  ::color::constant::xyz::white::ten_entity, 0.37925, 0.36733 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F3_entity,  ::color::constant::xyz::white::ten_entity, 0.41761, 0.38324 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F4_entity,  ::color::constant::xyz::white::ten_entity, 0.44920, 0.39074 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F5_entity,  ::color::constant::xyz::white::ten_entity, 0.31975, 0.34246 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F6_entity,  ::color::constant::xyz::white::ten_entity, 0.38660, 0.37847 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F7_entity,  ::color::constant::xyz::white::ten_entity, 0.31569, 0.32960 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F8_entity,  ::color::constant::xyz::white::ten_entity, 0.34902, 0.35939 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F9_entity,  ::color::constant::xyz::white::ten_entity, 0.37829, 0.37045 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F10_entity, ::color::constant::xyz::white::ten_entity, 0.35090, 0.35444 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F11_entity, ::color::constant::xyz::white::ten_entity, 0.38541, 0.37123 );
        COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE( ::color::constant::xyz::white::F12_entity, ::color::constant::xyz::white::ten_entity, 0.44256, 0.39717 );

#undef COLOR_CONTATNT_XYZ_BASE_WHITE_POINT_SPEIALIZE
       }

      template< typename scalar_name,::color::constant::xyz::white::name_enum name_number, ::color::constant::xyz::white::degree_enum degree_number >
       struct point
        : private ::color::constant::xyz::white::_intrnal::base<scalar_name, name_number, degree_number >
        {
         private:
           typedef scalar_name scalar_type;
           typedef ::color::constant::xyz::white::_intrnal::base< scalar_name, name_number, degree_number > base_type;

         public:
         static /* constexpr*/ scalar_type const XW(){ return base_type::x()/base_type::y(); }
         static /* constexpr*/ scalar_type const YW(){ return scalar_type(1); }
         static /* constexpr*/ scalar_type const ZW(){ return (scalar_type(1)-base_type::x()-base_type::y())/base_type::y(); }
        };

       }
     }
   }
 }

#endif

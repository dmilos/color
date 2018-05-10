#ifndef color_contant_xyz_wp
#define color_contant_xyz_wp

// ::color::constant::xyz::illuminant::point< scalar_name,::color::constant::xyz::illuminant::name_entity name_number, ::color::constant::xyz::illuminant::observer_entity observer_number >::X()
// ::color::constant::xyz::illuminant::name_entity
// ::color::constant::xyz::illuminant::observer_entity


namespace color
 {
  namespace constant
   {
    namespace xyz
     {
      namespace illuminant
       {

        enum  observer_entity { two_entity, ten_entity };
        enum  name_entity
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
           ,::color::constant::xyz::illuminant::name_entity      name_number
           ,::color::constant::xyz::illuminant::observer_entity  observer_number
         >
         struct base
          {
          };

#define COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( DP_name, DP_observer, DP_x, DP_y )  \
        template< typename scalar_name >                                                    \
          struct base< scalar_name, DP_name, DP_observer >                                  \
           {                                                                                \
            typedef scalar_name scalar_type;                                                \
            static /* constexpr*/ scalar_type x(){ return scalar_type(DP_x); }              \
            static /* constexpr*/ scalar_type y(){ return scalar_type(DP_y); }              \
           }

        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::A_entity,   ::color::constant::xyz::illuminant::two_entity, 0.44757, 0.40745 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::B_entity,   ::color::constant::xyz::illuminant::two_entity, 0.34842, 0.35161 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::C_entity,   ::color::constant::xyz::illuminant::two_entity, 0.310063, 0.316158 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::D50_entity, ::color::constant::xyz::illuminant::two_entity, 0.34567, 0.35850 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::D55_entity, ::color::constant::xyz::illuminant::two_entity, 0.33242, 0.34743 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity, 0.312713, 0.329016 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::D75_entity, ::color::constant::xyz::illuminant::two_entity, 0.29902, 0.31485 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::E_entity,   ::color::constant::xyz::illuminant::two_entity, 0.33333, 0.33333 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F1_entity,  ::color::constant::xyz::illuminant::two_entity, 0.31310, 0.33727 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F2_entity,  ::color::constant::xyz::illuminant::two_entity, 0.37208, 0.37529 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F3_entity,  ::color::constant::xyz::illuminant::two_entity, 0.40910, 0.39430 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F4_entity,  ::color::constant::xyz::illuminant::two_entity, 0.44018, 0.40329 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F5_entity,  ::color::constant::xyz::illuminant::two_entity, 0.31379, 0.34531 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F6_entity,  ::color::constant::xyz::illuminant::two_entity, 0.37790, 0.38835 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F7_entity,  ::color::constant::xyz::illuminant::two_entity, 0.31292, 0.32933 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F8_entity,  ::color::constant::xyz::illuminant::two_entity, 0.34588, 0.35875 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F9_entity,  ::color::constant::xyz::illuminant::two_entity, 0.37417, 0.37281 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F10_entity, ::color::constant::xyz::illuminant::two_entity, 0.34609, 0.35986 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F11_entity, ::color::constant::xyz::illuminant::two_entity, 0.38052, 0.37713 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F12_entity, ::color::constant::xyz::illuminant::two_entity, 0.43695, 0.40441 );

        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::A_entity,   ::color::constant::xyz::illuminant::ten_entity, 0.45117, 0.40594 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::B_entity,   ::color::constant::xyz::illuminant::ten_entity, 0.34980, 0.35270 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::C_entity,   ::color::constant::xyz::illuminant::ten_entity, 0.31039, 0.31905 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::D50_entity, ::color::constant::xyz::illuminant::ten_entity, 0.34773, 0.35952 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::D55_entity, ::color::constant::xyz::illuminant::ten_entity, 0.33411, 0.34877 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::ten_entity, 0.31382, 0.33100 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::D75_entity, ::color::constant::xyz::illuminant::ten_entity, 0.29968, 0.31740 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::E_entity,   ::color::constant::xyz::illuminant::ten_entity, 0.33333, 0.33333 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F1_entity,  ::color::constant::xyz::illuminant::ten_entity, 0.31811, 0.33559 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F2_entity,  ::color::constant::xyz::illuminant::ten_entity, 0.37925, 0.36733 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F3_entity,  ::color::constant::xyz::illuminant::ten_entity, 0.41761, 0.38324 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F4_entity,  ::color::constant::xyz::illuminant::ten_entity, 0.44920, 0.39074 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F5_entity,  ::color::constant::xyz::illuminant::ten_entity, 0.31975, 0.34246 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F6_entity,  ::color::constant::xyz::illuminant::ten_entity, 0.38660, 0.37847 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F7_entity,  ::color::constant::xyz::illuminant::ten_entity, 0.31569, 0.32960 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F8_entity,  ::color::constant::xyz::illuminant::ten_entity, 0.34902, 0.35939 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F9_entity,  ::color::constant::xyz::illuminant::ten_entity, 0.37829, 0.37045 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F10_entity, ::color::constant::xyz::illuminant::ten_entity, 0.35090, 0.35444 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F11_entity, ::color::constant::xyz::illuminant::ten_entity, 0.38541, 0.37123 );
        COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F12_entity, ::color::constant::xyz::illuminant::ten_entity, 0.44256, 0.39717 );

#undef COLOR_CONTATNT_XYZ_BASE_ILLUMINANT_POINT_SPECIALIZE
       }

      template
       <
          typename                                            scalar_name
         ,::color::constant::xyz::illuminant::name_entity         name_number
         ,::color::constant::xyz::illuminant::observer_entity observer_number
       >
       struct point
        : private ::color::constant::xyz::illuminant::_intrnal::base<scalar_name, name_number, observer_number >
        {
         private:
           typedef scalar_name scalar_type;
           typedef ::color::constant::xyz::illuminant::_intrnal::base< scalar_name, name_number, observer_number > base_type;

         public:
           static /* constexpr*/ scalar_type const X(){ return base_type::x()/base_type::y(); }
           static /* constexpr*/ scalar_type const Y(){ return scalar_type(1); }
           static /* constexpr*/ scalar_type const Z(){ return (scalar_type(1)-base_type::x()-base_type::y())/base_type::y(); }
        };

#define COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( DP_name, DP_observer, DP_X, DP_Z       )                        \
      template< typename scalar_name >                                                                             \
       struct point< scalar_name, DP_name, DP_observer >                                                           \
        : private ::color::constant::xyz::illuminant::_intrnal::base<scalar_name, DP_name, DP_observer >                \
        {                                                                                                          \
         private:                                                                                                  \
           typedef scalar_name scalar_type;                                                                        \
           typedef ::color::constant::xyz::illuminant::_intrnal::base< scalar_name, DP_name, DP_observer > base_type;   \
         public:                                                                                                   \
           static /* constexpr*/ scalar_type const X(){ return scalar_type(DP_X); }                                \
           static /* constexpr*/ scalar_type const Y(){ return scalar_type(1); }                                   \
           static /* constexpr*/ scalar_type const Z(){ return scalar_type(DP_Z); }                                \
        }

       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::A_entity,   ::color::constant::xyz::illuminant::two_entity,  1.09850,  0.35585  ); // (ASTM E308-01)
     //COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::B_entity,   ::color::constant::xyz::illuminant::two_entity,  0.99072,  0.85223  );
       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::C_entity,   ::color::constant::xyz::illuminant::two_entity,  0.98074,  1.18232  ); // (ASTM E308-01)
       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::D50_entity, ::color::constant::xyz::illuminant::two_entity,  0.96422,  0.82521  ); // (ASTM E308-01)
       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::D55_entity, ::color::constant::xyz::illuminant::two_entity,  0.95682,  0.92149  ); // (ASTM E308-01)
       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity,  0.95047,  1.08883  ); // (ASTM E308-01)
       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::D75_entity, ::color::constant::xyz::illuminant::two_entity,  0.94972,  1.22638  ); // (ASTM E308-01)
       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::E_entity,   ::color::constant::xyz::illuminant::two_entity,  1.00000,  1.00000  ); // (ASTM E308-01)
       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F2_entity,  ::color::constant::xyz::illuminant::two_entity,  0.99186,  0.67393  ); // (ASTM E308-01)
       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F7_entity,  ::color::constant::xyz::illuminant::two_entity,  0.95041,  1.08747  ); // (ASTM E308-01)
       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F11_entity, ::color::constant::xyz::illuminant::two_entity,  1.00962,  0.64350  ); // (ASTM E308-01)

       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::A_entity,   ::color::constant::xyz::illuminant::ten_entity,  1.11144,  0.35200 ); // (ASTM E308-01)
       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::C_entity,   ::color::constant::xyz::illuminant::ten_entity,  0.97285,  1.16145 ); // (ASTM E308-01)
       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::D50_entity, ::color::constant::xyz::illuminant::ten_entity,  0.96720,  0.81427 ); // (ASTM E308-01)
       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::D55_entity, ::color::constant::xyz::illuminant::ten_entity,  0.95799,  0.90926 ); // (ASTM E308-01)
       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::ten_entity,  0.94811,  1.07304 ); // (ASTM E308-01)
       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::D75_entity, ::color::constant::xyz::illuminant::ten_entity,  0.94416,  1.20641 ); // (ASTM E308-01)
       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F2_entity,  ::color::constant::xyz::illuminant::ten_entity,  1.03279,  0.69027 ); // (ASTM E308-01)
       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F7_entity,  ::color::constant::xyz::illuminant::ten_entity,  0.95792,  1.07687 ); // (ASTM E308-01)
       COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE( ::color::constant::xyz::illuminant::F11_entity, ::color::constant::xyz::illuminant::ten_entity,  1.03863,  0.65607 ); // (ASTM E308-01)



#undef COLOR_CONTATNT_XYZ_ILLUMINANT_POINT_SPECIALIZE
       }
     }
   }
 }

#endif

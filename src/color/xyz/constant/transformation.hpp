#ifndef color_contant_xyz_matrix
#define color_contant_xyz_matrix

// ::color::constant::xyz::transformation::matrix< category_name >::q_max()

#include "./space.hpp"
#include "./illuminant.hpp"
#include "./adaptation.hpp"


namespace color
 {
  namespace constant
   {
    namespace xyz
     {
      namespace transformation
       {

        template
          <
           typename scalar_name
           , ::color::constant::xyz::space::name_entity    space_number  = ::color::constant::xyz::space::sRGB_entity
           , ::color::constant::xyz::illuminant::name_entity      illuminant_number  = static_cast< ::color::constant::xyz::illuminant::name_entity     >( ::color::constant::xyz::space::illuminant< space_number >::name_entity   )
           , ::color::constant::xyz::illuminant::observer_entity    observer_number  = static_cast< ::color::constant::xyz::illuminant::observer_entity >( ::color::constant::xyz::space::illuminant< space_number >::observer_entity )
           >
          struct matrix
           {
            public:
              typedef scalar_name scalar_type;

              typedef ::color::constant::xyz::transformation::matrix<scalar_type> this_type;

              // D65, sRGB, 2deg
              typedef ::color::constant::xyz::space::primary< scalar_type, space_number > system_type;

              typedef ::color::constant::xyz::illuminant::point< scalar_type, illuminant_number, observer_number > wp_type;

              static /* constexpr*/ scalar_type const xr(){ return system_type::red()[0];   } // 0.64
              static /* constexpr*/ scalar_type const yr(){ return system_type::red()[1];   } // 0.33
              static /* constexpr*/ scalar_type const xg(){ return system_type::green()[0]; } // 0.30
              static /* constexpr*/ scalar_type const yg(){ return system_type::green()[1]; } // 0.60
              static /* constexpr*/ scalar_type const xb(){ return system_type::blue()[0];  } // 0.15
              static /* constexpr*/ scalar_type const yb(){ return system_type::blue()[1];  } // 0.06

            private:
              static /* constexpr*/ scalar_type const detQ(){ return -yr()*yg()*yb()/(  (xg()-xb())*yr() +  (xb()-xr())*yg() +  (xr()-xg())*yb() ) ; }
              static /* constexpr*/ scalar_type const Q11(){ return -detQ() * (  (xb()-1)*yg()  +  (1-xg())*yb() )/( yb()* yg() ); }
              static /* constexpr*/ scalar_type const Q12(){ return -detQ() * (  (yg()-1)*xb()  +  (1-yb())*xg() )/( yb()* yg() ); }
              static /* constexpr*/ scalar_type const Q13(){ return -detQ() * ( xb()*yg() - xg()*yb() ) / (  yb()*yg() ); }

              static /* constexpr*/ scalar_type const Q21(){ return  detQ() * (  (xb()-1)*yr()  +  (1-xr())*yb() )/( yb()* yr() ); }
              static /* constexpr*/ scalar_type const Q22(){ return  detQ() * (  (yr()-1)*xb()  +  (1-yb())*xr() )/( yb()* yr() ); }
              static /* constexpr*/ scalar_type const Q23(){ return  detQ() * ( xb()*yr() - xr()*yb() ) / (  yb()*yr() ); }

              static /* constexpr*/ scalar_type const Q31(){ return -detQ() * (  (xg()-1)*yr()  +  (1-xr())*yg() )/( yg()* yr() ); }
              static /* constexpr*/ scalar_type const Q32(){ return -detQ() * (  (yr()-1)*xg()  +  (1-yg())*xr() )/( yg()* yr() ); }
              static /* constexpr*/ scalar_type const Q33(){ return -detQ() * ( xg()*yr() - xr()*yg() ) / (  yg()*yr() ); }

            public:
              static /* constexpr*/ scalar_type const Sr(){ return Q11() * wp_type::X()  +  Q12() * wp_type::Y()  + Q13() * wp_type::Z(); }
              static /* constexpr*/ scalar_type const Sg(){ return Q21() * wp_type::X()  +  Q22() * wp_type::Y()  + Q23() * wp_type::Z(); }
              static /* constexpr*/ scalar_type const Sb(){ return Q31() * wp_type::X()  +  Q32() * wp_type::Y()  + Q33() * wp_type::Z(); }

              static /* constexpr*/ scalar_type const Xr(){ return xr()/yr() ; }
              static /* constexpr*/ scalar_type const Yr(){ return scalar_type(1); }
              static /* constexpr*/ scalar_type const Zr(){ return (scalar_type(1)-xr()-yr())/yr(); }

              static /* constexpr*/ scalar_type const Xg(){ return xg()/yg(); }
              static /* constexpr*/ scalar_type const Yg(){ return scalar_type(1); }
              static /* constexpr*/ scalar_type const Zg(){ return (scalar_type(1)-xg()-yg())/yg(); }

              static /* constexpr*/ scalar_type const Xb(){ return xb()/yb(); }
              static /* constexpr*/ scalar_type const Yb(){ return scalar_type(1); }
              static /* constexpr*/ scalar_type const Zb(){ return (scalar_type(1)-xb()-yb())/yb(); }

              // from RGB

              static /* constexpr*/ scalar_type const M11(){ return Sr()*Xr(); } // 0.4124564, [ASTM->] 0.41245643908969243   [non-ASTM->] 0.4123865632529917
              static /* constexpr*/ scalar_type const M12(){ return Sg()*Xg(); } // 0.3575761  [ASTM->] 0.35757607764390886   [non-ASTM->] 0.3575914909206254
              static /* constexpr*/ scalar_type const M13(){ return Sb()*Xb(); } // 0.1804375  [ASTM->] 0.18043748326639894   [non-ASTM->] 0.1804504912035637
              static /* constexpr*/ scalar_type const M21(){ return Sr()*Yr(); } // 0.2126729, [ASTM->] 0.21267285140562264   [non-ASTM->] 0.2126368216773238
              static /* constexpr*/ scalar_type const M22(){ return Sg()*Yg(); } // 0.7151522, [ASTM->] 0.71515215528781773   [non-ASTM->] 0.7151829818412507
              static /* constexpr*/ scalar_type const M23(){ return Sb()*Yb(); } // 0.0721750, [ASTM->] 0.072174993306559576  [non-ASTM->] 0.07218019648142547
              static /* constexpr*/ scalar_type const M31(){ return Sr()*Zr(); } // 0.0193339, [ASTM->] 0.019333895582329310  [non-ASTM->] 0.01933062015248399
              static /* constexpr*/ scalar_type const M32(){ return Sg()*Zg(); } // 0.1191920  [ASTM->] 0.11919202588130293   [non-ASTM->] 0.1191971636402085
              static /* constexpr*/ scalar_type const M33(){ return Sb()*Zb(); } // 0.9503041  [ASTM->] 0.95030407853636789   [non-ASTM->] 0.9503725870054354

              // to RGB
              static /* constexpr*/ scalar_type const detM(){ return M11()*(M22()*M33()-M23()*M32())-M12()*(M21()*M33()-M23()*M31())+M13()*(M21()*M32()-M22()*M31()); }

              static /* constexpr*/ scalar_type const i11(){ return  ( M22()*M33()-M23()*M32() ) / detM(); }  //  3.2406255;
              static /* constexpr*/ scalar_type const i12(){ return  ( M13()*M32()-M12()*M33() ) / detM(); }  // -1.537208; 
              static /* constexpr*/ scalar_type const i13(){ return  ( M12()*M23()-M13()*M22() ) / detM(); }  // -0.4986286;
              static /* constexpr*/ scalar_type const i21(){ return  ( M23()*M31()-M21()*M33() ) / detM(); }  // -0.9689307;
              static /* constexpr*/ scalar_type const i22(){ return  ( M11()*M33()-M13()*M31() ) / detM(); }  //  1.8757561;
              static /* constexpr*/ scalar_type const i23(){ return  ( M13()*M21()-M11()*M23() ) / detM(); }  //  0.0415175;
              static /* constexpr*/ scalar_type const i31(){ return  ( M21()*M32()-M22()*M31() ) / detM(); }  //  0.0557101;
              static /* constexpr*/ scalar_type const i32(){ return  ( M12()*M31()-M11()*M32() ) / detM(); }  // -0.2040211;
              static /* constexpr*/ scalar_type const i33(){ return  ( M11()*M22()-M12()*M21() ) / detM(); }  //  1.0569959;
           };
       }
     }
   }
 }

#endif

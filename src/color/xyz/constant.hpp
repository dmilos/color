#ifndef color_contant_xyz
#define color_contant_xyz

// ::color::constant::xyz< typename ::color::akin::xyz< category_name >::akin_type >::()
// ::color::constant::xyz< category_name >::q_max()


#include "./category.hpp"
#include "../generic/trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    template< typename category_name >
     struct xyz
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef ::color::constant::xyz<category_type> this_type;

         // D65
         static /* constexpr*/ scalar_type const XW(){ return scalar_type(31271)/scalar_type(32902); }
         static /* constexpr*/ scalar_type const YW(){ return scalar_type(1); }
         static /* constexpr*/ scalar_type const ZW(){ return scalar_type(35827)/scalar_type(32902); }

         // sRGB
         static /* constexpr*/ scalar_type const xr(){ return 0.64; }
         static /* constexpr*/ scalar_type const yr(){ return 0.33; }
         static /* constexpr*/ scalar_type const xg(){ return 0.3; }
         static /* constexpr*/ scalar_type const yg(){ return 0.6; }
         static /* constexpr*/ scalar_type const xb(){ return 0.15; }
         static /* constexpr*/ scalar_type const yb(){ return 0.06; }


         static /* constexpr*/ scalar_type const Xr(){ return xr()/yr() ; }
         static /* constexpr*/ scalar_type const Yr(){ return 1; }
         static /* constexpr*/ scalar_type const Zr(){ return (1-xr()-yr())/yr(); }

         static /* constexpr*/ scalar_type const Xg(){ return xg()/yg(); }
         static /* constexpr*/ scalar_type const Yg(){ return 1; }
         static /* constexpr*/ scalar_type const Zg(){ return (1-xg()-yg())/yg(); }

         static /* constexpr*/ scalar_type const Xb(){ return xb()/yb(); }
         static /* constexpr*/ scalar_type const Yb(){ return 1; }
         static /* constexpr*/ scalar_type const Zb(){ return (1-xb()-yb())/yb(); }

         static /* constexpr*/ scalar_type const detA(){ return -yr()*yg()*yb()/(  (xg()-xb())*yr() +  (xb()-xr())*yg() +  (xr()-xg())*yb() ) ; }

         static /* constexpr*/ scalar_type const A11(){ return -detA() * (  (xb()-1)*yg()  +  (1-xg())*yb() )/( yb()* yg() ); }
         static /* constexpr*/ scalar_type const A21(){ return  detA() * (  (xb()-1)*yr()  +  (1-xr())*yb() )/( yb()* yr() ); }
         static /* constexpr*/ scalar_type const A31(){ return -detA() * (  (xg()-1)*yr()  +  (1-xr())*yg() )/( yg()* yr() ); }

         static /* constexpr*/ scalar_type const A12(){ return -detA() * (  (yg()-1)*xb()  +  (1-yb())*xg() )/( yb()* yg() ); }
         static /* constexpr*/ scalar_type const A22(){ return  detA() * (  (yr()-1)*xb()  +  (1-yb())*xr() )/( yb()* yr() ); }
         static /* constexpr*/ scalar_type const A32(){ return -detA() * (  (yr()-1)*xg()  +  (1-yg())*xr() )/( yg()* yr() ); }

         static /* constexpr*/ scalar_type const A13(){ return -detA() * ( xb()*yg() - xg()*yb() ) / (  yb()*yg() ); }
         static /* constexpr*/ scalar_type const A23(){ return  detA() * ( xb()*yr() - xr()*yb() ) / (  yb()*yr() ); }
         static /* constexpr*/ scalar_type const A33(){ return -detA() * ( xg()*yr() - xr()*yg() ) / (  yg()*yr() ); }

         static /* constexpr*/ scalar_type const Sr(){ return A11() * XW()  +  A12() * YW()  + A13() * ZW(); }
         static /* constexpr*/ scalar_type const Sg(){ return A21() * XW()  +  A22() * YW()  + A23() * ZW(); }
         static /* constexpr*/ scalar_type const Sb(){ return A31() * XW()  +  A32() * YW()  + A33() * ZW(); }

         // from RGB
         static /* constexpr*/ scalar_type const M11(){ return Sr()*Xr(); } // 0.4124564
         static /* constexpr*/ scalar_type const M12(){ return Sg()*Xg(); } // 0.3575761
         static /* constexpr*/ scalar_type const M13(){ return Sb()*Xb(); } // 0.1804375
         static /* constexpr*/ scalar_type const M21(){ return Sr()*Yr(); } // 0.2126729
         static /* constexpr*/ scalar_type const M22(){ return Sg()*Yg(); } // 0.7151522
         static /* constexpr*/ scalar_type const M23(){ return Sb()*Yb(); } // 0.0721750
         static /* constexpr*/ scalar_type const M31(){ return Sr()*Zr(); } // 0.0193339
         static /* constexpr*/ scalar_type const M32(){ return Sg()*Zg(); } // 0.1191920
         static /* constexpr*/ scalar_type const M33(){ return Sb()*Zb(); } // 0.9503041

         // to RGB
         static /* constexpr*/ scalar_type const detM(){ return M11()*(M22()*M33()-M23()*M32())-M12()*(M21()*M33()-M23()*M31())+M13()*(M21()*M32()-M22()*M31()); }

         static /* constexpr*/ scalar_type const Mi11(){ return  ( M22()*M33()-M23()*M32() ) / detM(); }  //  3.2404542;
         static /* constexpr*/ scalar_type const Mi12(){ return  ( M13()*M32()-M12()*M33() ) / detM(); }  // -1.5371385;
         static /* constexpr*/ scalar_type const Mi13(){ return  ( M12()*M23()-M13()*M22() ) / detM(); }  // -0.4985314;
         static /* constexpr*/ scalar_type const Mi21(){ return  ( M23()*M31()-M21()*M33() ) / detM(); }  // -0.9692660;
         static /* constexpr*/ scalar_type const Mi22(){ return  ( M11()*M33()-M13()*M31() ) / detM(); }  //  1.8760108;
         static /* constexpr*/ scalar_type const Mi23(){ return  ( M13()*M21()-M11()*M23() ) / detM(); }  //  0.0415560;
         static /* constexpr*/ scalar_type const Mi31(){ return  ( M21()*M32()-M22()*M31() ) / detM(); }  //  0.0556434;
         static /* constexpr*/ scalar_type const Mi32(){ return  ( M12()*M31()-M11()*M32() ) / detM(); }  // -0.2040259;
         static /* constexpr*/ scalar_type const Mi33(){ return  ( M11()*M22()-M12()*M21() ) / detM(); }  //  1.0572252;

      };

   }
 }

#endif

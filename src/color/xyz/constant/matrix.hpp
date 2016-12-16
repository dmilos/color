#ifndef color_contant_xyz_matrix
#define color_contant_xyz_matrix

// ::color::constant::xyz< typename ::color::akin::xyz< category_name >::akin_type >::()
// ::color::constant::xyz< category_name >::q_max()

#include "./space.hpp"
#include "./white.hpp"

#include "../category.hpp"
#include "../../generic/trait/scalar.hpp"


namespace color
 {
  namespace constant
   {
    namespace xyz
     {

      template< typename category_name/*, white, space, illuminant */ >
       struct matrix
        {
         public:
           typedef category_name  category_type;

           typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

           typedef ::color::constant::xyz::matrix<category_type> this_type;

           // D65, sRGB, 2deg
           typedef ::color::constant::xyz::white::point< scalar_type,::color::constant::xyz::white::D65_entity, ::color::constant::xyz::white::two_entity > wp_type;
           typedef ::color::constant::xyz::space::primary< scalar_type, ::color::constant::xyz::space::sRGB_entity > system_type;

           static /* constexpr*/ scalar_type const XW(){ return wp_type::X(); } // 0.95042854537718071849735578384293, 0.94809667673716012084592145015106
           static /* constexpr*/ scalar_type const YW(){ return wp_type::Y(); } // 1
           static /* constexpr*/ scalar_type const ZW(){ return wp_type::Z(); } // 1.088900370798127773387636009969

           static /* constexpr*/ scalar_type const xr(){ return system_type::red()[0];   } // 0.64
           static /* constexpr*/ scalar_type const yr(){ return system_type::red()[1];   } // 0.33
           static /* constexpr*/ scalar_type const xg(){ return system_type::green()[0]; } // 0.30
           static /* constexpr*/ scalar_type const yg(){ return system_type::green()[1]; } // 0.60
           static /* constexpr*/ scalar_type const xb(){ return system_type::blue()[0];  } // 0.15
           static /* constexpr*/ scalar_type const yb(){ return system_type::blue()[1];  } // 0.06

           static /* constexpr*/ scalar_type const Xr(){ return xr()/yr() ; }
           static /* constexpr*/ scalar_type const Yr(){ return scalar_type(1); }
           static /* constexpr*/ scalar_type const Zr(){ return (scalar_type(1)-xr()-yr())/yr(); }

           static /* constexpr*/ scalar_type const Xg(){ return xg()/yg(); }
           static /* constexpr*/ scalar_type const Yg(){ return scalar_type(1); }
           static /* constexpr*/ scalar_type const Zg(){ return (scalar_type(1)-xg()-yg())/yg(); }

           static /* constexpr*/ scalar_type const Xb(){ return xb()/yb(); }
           static /* constexpr*/ scalar_type const Yb(){ return scalar_type(1); }
           static /* constexpr*/ scalar_type const Zb(){ return (scalar_type(1)-xb()-yb())/yb(); }

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
           static /* constexpr*/ scalar_type const M11(){ return Sr()*Xr(); } // 0.4124564, 0.4123907992659593, 0.41239558896741421610, 0.41238656325299189
           static /* constexpr*/ scalar_type const M12(){ return Sg()*Xg(); } // 0.3575761
           static /* constexpr*/ scalar_type const M13(){ return Sb()*Xb(); } // 0.1804375
           static /* constexpr*/ scalar_type const M21(){ return Sr()*Yr(); } // 0.2126729, 0.21263900587151024
           static /* constexpr*/ scalar_type const M22(){ return Sg()*Yg(); } // 0.7151522, 0.715168678767756
           static /* constexpr*/ scalar_type const M23(){ return Sb()*Yb(); } // 0.0721750, 0.07219231536073371
           static /* constexpr*/ scalar_type const M31(){ return Sr()*Zr(); } // 0.0193339, 0.01933081871559182
           static /* constexpr*/ scalar_type const M32(){ return Sg()*Zg(); } // 0.1191920
           static /* constexpr*/ scalar_type const M33(){ return Sb()*Zb(); } // 0.9503041

           // to RGB
           static /* constexpr*/ scalar_type const detM(){ return M11()*(M22()*M33()-M23()*M32())-M12()*(M21()*M33()-M23()*M31())+M13()*(M21()*M32()-M22()*M31()); }

           static /* constexpr*/ scalar_type const Mi11(){ return  ( M22()*M33()-M23()*M32() ) / detM(); }  //  3.2406255;  3.2404542;
           static /* constexpr*/ scalar_type const Mi12(){ return  ( M13()*M32()-M12()*M33() ) / detM(); }  // -1.537208;  -1.5371385;
           static /* constexpr*/ scalar_type const Mi13(){ return  ( M12()*M23()-M13()*M22() ) / detM(); }  // -0.4986286; -0.4985314;
           static /* constexpr*/ scalar_type const Mi21(){ return  ( M23()*M31()-M21()*M33() ) / detM(); }  // -0.9689307; -0.9692660;
           static /* constexpr*/ scalar_type const Mi22(){ return  ( M11()*M33()-M13()*M31() ) / detM(); }  //  1.8757561;
           static /* constexpr*/ scalar_type const Mi23(){ return  ( M13()*M21()-M11()*M23() ) / detM(); }  //  0.0415175;
           static /* constexpr*/ scalar_type const Mi31(){ return  ( M21()*M32()-M22()*M31() ) / detM(); }  //  0.0557101;
           static /* constexpr*/ scalar_type const Mi32(){ return  ( M12()*M31()-M11()*M32() ) / detM(); }  // -0.2040211;
           static /* constexpr*/ scalar_type const Mi33(){ return  ( M11()*M22()-M12()*M21() ) / detM(); }  //  1.0569959;
        };

     }
   }
 }

#endif

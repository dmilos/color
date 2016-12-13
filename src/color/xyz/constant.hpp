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
         static /* constexpr*/ scalar_type const XW(){ return 0.95047; }
         static /* constexpr*/ scalar_type const YW(){ return 1.00000; }
         static /* constexpr*/ scalar_type const ZW(){ return 1.08883; }

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

         // TODO Invert this matrix
         static /* constexpr*/ scalar_type const Sr(){ return Xr() * XW()  +  Xg() * YW()  +  Xb() * ZW(); }
         static /* constexpr*/ scalar_type const Sg(){ return Yr() * XW()  +  Yg() * YW()  +  Yb() * ZW(); }
         static /* constexpr*/ scalar_type const Sb(){ return Zr() * XW()  +  Zg() * YW()  +  Zb() * ZW(); }

         // from RGB
         static /* constexpr*/ scalar_type const b11(){ return  Sr()*Xr(); } // 0.4124564
         static /* constexpr*/ scalar_type const b12(){ return  Sg()*Xg(); } // 0.3575761
         static /* constexpr*/ scalar_type const b13(){ return  Sb()*Xb(); } // 0.1804375
         static /* constexpr*/ scalar_type const b21(){ return  Sr()*Yr(); } // 0.2126729
         static /* constexpr*/ scalar_type const b22(){ return  Sg()*Yg(); } // 0.7151522
         static /* constexpr*/ scalar_type const b23(){ return  Sb()*Yb(); } // 0.0721750
         static /* constexpr*/ scalar_type const b31(){ return  Sr()*Zr(); } // 0.0193339
         static /* constexpr*/ scalar_type const b32(){ return  Sg()*Zg(); } // 0.1191920
         static /* constexpr*/ scalar_type const b33(){ return  Sb()*Zb(); } // 0.9503041
         // to RGB
         static /* constexpr*/ scalar_type const a11(){ return   3.2404542; }
         static /* constexpr*/ scalar_type const a12(){ return  -1.5371385; }
         static /* constexpr*/ scalar_type const a13(){ return  -0.4985314; }
         static /* constexpr*/ scalar_type const a21(){ return  -0.9692660; }
         static /* constexpr*/ scalar_type const a22(){ return   1.8760108; }
         static /* constexpr*/ scalar_type const a23(){ return   0.0415560; }
         static /* constexpr*/ scalar_type const a31(){ return   0.0556434; }
         static /* constexpr*/ scalar_type const a32(){ return  -0.2040259; }
         static /* constexpr*/ scalar_type const a33(){ return   1.0572252; }


      };

   }
 }

#endif

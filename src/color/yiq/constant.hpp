#ifndef color_contant_yiq
#define color_contant_yiq

// ::color::constant::yiq< typename ::color::akin::yiq< category_name >::akin_type >::()
// ::color::constant::yiq< category_name >::q_max()


#include "./category.hpp"
#include "../generic/trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    template< typename category_name>
     struct yiq
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef ::color::constant::yiq<category_type> this_type;

         // to RGB
         static /* constexpr*/ scalar_type const a11(){ return  1.0000000000000000000; }
         static /* constexpr*/ scalar_type const a12(){ return  0.9562948323208939905; }
         static /* constexpr*/ scalar_type const a13(){ return  0.6210251254447287141; }
         static /* constexpr*/ scalar_type const a21(){ return  1.0000000000000000000; }
         static /* constexpr*/ scalar_type const a22(){ return -0.2721214740839773195; }
         static /* constexpr*/ scalar_type const a23(){ return -0.6473809535176157222; }
         static /* constexpr*/ scalar_type const a31(){ return  1.0000000000000000000; }
         static /* constexpr*/ scalar_type const a32(){ return -1.1069899085671282160; }
         static /* constexpr*/ scalar_type const a33(){ return  1.7046149754988293290; }

         // from RGB
         static /* constexpr*/ scalar_type const b11(){ return  0.2990000000000000000; } // TODO 0.298839
         static /* constexpr*/ scalar_type const b12(){ return  0.5870000000000000000; } // TODO 0.586811
         static /* constexpr*/ scalar_type const b13(){ return  0.1140000000000000000; } // TODO 0.114350
         static /* constexpr*/ scalar_type const b21(){ return  0.5957161349127745527; }
         static /* constexpr*/ scalar_type const b22(){ return -0.2744528378392564636; }
         static /* constexpr*/ scalar_type const b23(){ return -0.3212632970735180890; }
         static /* constexpr*/ scalar_type const b31(){ return  0.2114564021201178664; }
         static /* constexpr*/ scalar_type const b32(){ return -0.5225910452916111683; }
         static /* constexpr*/ scalar_type const b33(){ return  0.3111346431714933019; }

         static /* constexpr*/ scalar_type const i_min()  { return  -0.5957161349127745527; }
         static /* constexpr*/ scalar_type const i_max()  { return   0.5957161349127745527; }
         static /* constexpr*/ scalar_type const i_range(){ return 2*0.5957161349127745527; }

         static /* constexpr*/ scalar_type const q_min()  { return - 0.5225910452916111683; }
         static /* constexpr*/ scalar_type const q_max()  { return   0.5225910452916111683; }
         static /* constexpr*/ scalar_type const q_range(){ return 2*0.5225910452916111683; }

         static scalar_type i_deverse  ( scalar_type const& normal ){ return this_type::i_range() * normal + this_type::i_min(); }
         static scalar_type i_normalize( scalar_type const& divert ){ return ( divert + this_type::i_min() ) /this_type::i_range(); }

         static scalar_type q_deverse  ( scalar_type const& normal ){ return this_type::q_range() * normal + this_type::q_min(); }
         static scalar_type q_normalize( scalar_type const& divert ){ return ( divert + this_type::q_min() ) /this_type::q_range(); }
      };

   }
 }

#endif

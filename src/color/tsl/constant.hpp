#ifndef color_contant_tsl
#define color_contant_tsl

// ::color::constant::tsl< category_name >::R()
// ::color::constant::tsl< category_name >::G()
// ::color::constant::tsl< category_name >::B()


#include "./category.hpp"
#include "../generic/trait/scalar.hpp"


namespace color
 {
  namespace constant
   {

    template< typename category_name >
     struct tsl
      {
       public:
         typedef category_name  category_type;

         typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

         typedef ::color::constant::tsl<category_type> this_type;

         typedef ::color::constant::generic<  category_name >  constant_generic_type;

         static /* constexpr*/ scalar_type const R(){ return  0.2990000000000000000; }
         static /* constexpr*/ scalar_type const G(){ return  0.5870000000000000000; }
         static /* constexpr*/ scalar_type const B(){ return  0.1140000000000000000; }
         static /* constexpr*/ scalar_type const two_pi(){ return  constant_generic_type::two_pi(); }
         static /* constexpr*/ scalar_type const small(){ return  0.1/256.0; }
      };

   }
 }

#endif

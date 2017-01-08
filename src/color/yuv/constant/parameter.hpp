#ifndef color_contant_yuv_parameter
#define color_contant_yuv_parameter

// ::color::constant::yuv::parameter< tag_name, reference_number >::Wr()

#include "./reference.hpp"
#include "../../generic/trait/scalar.hpp"
#include "../category.hpp"



namespace color
 {
  namespace constant
   {
    namespace yuv
     {

      namespace _internal
       {

        template< typename scalar_name, ::color::constant::yuv::reference_enum reference_number = ::color::constant::yuv::error_entity  >
         struct base
          {
           typedef scalar_name scalar_type;
           static /* constexpr*/ scalar_type const Wr()  { return  0; }
           static /* constexpr*/ scalar_type const Wb()  { return  0; }
           static /* constexpr*/ scalar_type const Wg()  { return  0; }
           static /* constexpr*/ scalar_type const Umax(){ return  0; }
           static /* constexpr*/ scalar_type const Vmax(){ return  0; }
          };

        template< typename scalar_name >
         struct base< scalar_name, ::color::constant::yuv::BT_601_entity >
          {
           typedef scalar_name scalar_type;
           typedef ::color::constant::yuv::_internal::base< scalar_name, ::color::constant::yuv::BT_601_entity > this_type;

           static /* constexpr*/ scalar_type const Wr()  { return  0.2988390; } // TODO 337775559/1130000000
           static /* constexpr*/ scalar_type const Wb()  { return  0.1143500; } // TODO  28299149/247187500
           static /* constexpr*/ scalar_type const Wg()  { return  1 - this_type::Wr() - this_type::Wb(); }
           static /* constexpr*/ scalar_type const Umax(){ return  0.436; }
           static /* constexpr*/ scalar_type const Vmax(){ return  0.615; }
          };

        template< typename scalar_name >
         struct base< scalar_name, ::color::constant::yuv::BT_709_entity >
          {
           typedef scalar_name scalar_type;
           typedef ::color::constant::yuv::_internal::base< scalar_name, ::color::constant::yuv::BT_709_entity > this_type;
           
           static /* constexpr*/ scalar_type const Wr()  { return  0.2126729; } // TODO 2647777  / 12450000
           static /* constexpr*/ scalar_type const Wb()  { return  0.0721750; } // TODO 336967  / 4668750
           static /* constexpr*/ scalar_type const Wg()  { return  1 - this_type::Wr() - this_type::Wb(); }
           static /* constexpr*/ scalar_type const Umax(){ return  0.436; }
           static /* constexpr*/ scalar_type const Vmax(){ return  0.615; }
          };
       }

    template< typename tag_name, ::color::constant::yuv::reference_enum reference_number >
     struct parameter
     : public ::color::constant::yuv::_internal::base< typename ::color::trait::scalar< ::color::category::yuv< tag_name, reference_number > >::instance_type, reference_number >
      {
       public:
         typedef ::color::category::yuv< tag_name, reference_number >  category_type;

         typedef typename ::color::trait::scalar< category_type >::instance_type scalar_type;

         typedef  ::color::constant::yuv::parameter<tag_name,reference_number> this_type;

         static /* constexpr*/ scalar_type const u_min()  { return  -this_type::Umax(); }
         static /* constexpr*/ scalar_type const u_max()  { return   this_type::Umax(); }
         static /* constexpr*/ scalar_type const u_range(){ return 2*this_type::Umax(); }

         static /* constexpr*/ scalar_type const v_min()  { return  -this_type::Vmax(); }
         static /* constexpr*/ scalar_type const v_max()  { return   this_type::Vmax(); }
         static /* constexpr*/ scalar_type const v_range(){ return 2*this_type::Vmax(); }

         static scalar_type u_diverse  ( scalar_type const& normal ){ return this_type::u_range() * normal + this_type::u_min(); }
         static scalar_type u_normalize( scalar_type const& divert ){ return ( divert - this_type::u_min() ) /this_type::u_range(); }

         static scalar_type v_diverse  ( scalar_type const& normal ){ return this_type::v_range() * normal + this_type::v_min(); }
         static scalar_type v_normalize( scalar_type const& divert ){ return ( divert - this_type::v_min() ) /this_type::v_range(); }
      };

    }
   }
 }

#endif

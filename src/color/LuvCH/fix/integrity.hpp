#ifndef  color_LuvCH_fix_integrity
#define  color_LuvCH_fix_integrity

#include "../category.hpp"
#include "../../generic/fix/integrity.hpp"
#include "../trait/bound.hpp"
#include "../place/hue.hpp"


 namespace color
  {
   namespace fix
    {
     namespace _internal
      {
       namespace _privateLuvCH
        {

         template< typename category_name >
          struct integrity
           {
            public:
              typedef category_name  category_type;

              typedef typename ::color::model<category_type>  model_type;
              typedef typename ::color::trait::bound<category_type>      bound_type;

              enum
               {
                 hue_p        = ::color::place::_internal::hue<category_type>::position_enum
               };

              static void process( model_type &result )
               {
                if( result.template get<hue_p>() < bound_type::template minimum<hue_p>() )
                 {
                  result.template set<hue_p>( bound_type::template minimum<hue_p>() );
                  return;
                 }
                if( bound_type::template maximum<hue_p>() < result.template get<hue_p>() )
                 {
                  result.template set<hue_p>( bound_type::template maximum<hue_p>() );
                  return;
                 }
               }

              static void process(  model_type &result, model_type const& right )
               {
                result = right;
                if( result.template get<hue_p>() < bound_type::template minimum<hue_p>() )
                 {
                  result.template set<hue_p>( bound_type::template minimum<hue_p>() );
                  return;
                 }
                if( bound_type::template maximum<hue_p>() < result.template get<hue_p>() )
                 {
                  result.template set<hue_p>( bound_type::template maximum<hue_p>() );
                  return;
                 }
               }

           };

      }

       //template<> struct integrity< ::color::category::LuvCH_uint8   > : public ::color::fix::_internal::_privateLuvCH::integrity< ::color::category::LuvCH_uint8  >{ };
       //template<> struct integrity< ::color::category::LuvCH_uint16  > : public ::color::fix::_internal::_privateLuvCH::integrity< ::color::category::LuvCH_uint16 >{ };
       //template<> struct integrity< ::color::category::LuvCH_uint32  > : public ::color::fix::_internal::_privateLuvCH::integrity< ::color::category::LuvCH_uint32 >{ };
       //template<> struct integrity< ::color::category::LuvCH_uint64  > : public ::color::fix::_internal::_privateLuvCH::integrity< ::color::category::LuvCH_uint64 >{ };
       template<> struct integrity< ::color::category::LuvCH_float     > : public ::color::fix::_internal::_privateLuvCH::integrity< ::color::category::LuvCH_float  >{ };
       template<> struct integrity< ::color::category::LuvCH_double    > : public ::color::fix::_internal::_privateLuvCH::integrity< ::color::category::LuvCH_double >{ };
       template<> struct integrity< ::color::category::LuvCH_ldouble   > : public ::color::fix::_internal::_privateLuvCH::integrity< ::color::category::LuvCH_ldouble>{ };

      }
    }
  }

#endif

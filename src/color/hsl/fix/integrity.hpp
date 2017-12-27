#ifndef  color_hsl_fix_integrity
#define  color_hsl_fix_integrity

// ::color::check::integrity< category >( model )

#include "../category.hpp"
#include "../../generic/fix/integrity.hpp"
#include "../place/hue.hpp"

 namespace color
  {
   namespace fix
    {
     namespace _internal
      {
       namespace _privateHSL
        {

         template< typename category_name >
          struct integrity
           {
            public:
              typedef category_name  category_type;

              typedef typename ::color::model<category_type>  model_type;

              enum
               {
                 hue_p = ::color::place::_internal::hue<category_type>::position_enum
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

       //template<> struct integrity< ::color::category::hsl_uint8   > : public ::color::fix::_internal::_privateHSL::integrity< ::color::category::hsl_uint8  >{ };
       //template<> struct integrity< ::color::category::hsl_uint16  > : public ::color::fix::_internal::_privateHSL::integrity< ::color::category::hsl_uint16 >{ };
       //template<> struct integrity< ::color::category::hsl_uint32  > : public ::color::fix::_internal::_privateHSL::integrity< ::color::category::hsl_uint32 >{ };
       //template<> struct integrity< ::color::category::hsl_uint64  > : public ::color::fix::_internal::_privateHSL::integrity< ::color::category::hsl_uint64 >{ };
       template<> struct integrity< ::color::category::hsl_float     > : public ::color::fix::_internal::_privateHSL::integrity< ::color::category::hsl_float  >{ };
       template<> struct integrity< ::color::category::hsl_double    > : public ::color::fix::_internal::_privateHSL::integrity< ::color::category::hsl_double >{ };
       template<> struct integrity< ::color::category::hsl_ldouble   > : public ::color::fix::_internal::_privateHSL::integrity< ::color::category::hsl_ldouble>{ };

       }
    }
  }

#endif

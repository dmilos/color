#ifndef  color_hsl_fix_integrity
#define  color_hsl_fix_integrity

// ::color::check::integrity< category >( model )

#include "../category.hpp"
#include "../../generic/fix/integrity.hpp"


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

              typedef typename ::color::_internal::model<category_type>  model_type;

              static void process( model_type &result )
               {
                if( result.template get<0>() < bound_type::template minimum<0>() ) 
                 {
                  result.template set<0>( bound_type::template minimum<0>() );
                  return; 
                 }
                if( bound_type::template maximum<0>() < result.template get<0>() ) 
                 {
                  result.template set<0>( bound_type::template maximum<0>() );      
                  return; 
                 }
               }

              static void process(  model_type &result, model_type const& right )
               {
                result = right;
                if( result.template get<0>() < bound_type::template minimum<0>() ) 
                 {
                  result.template set<0>( bound_type::template minimum<0>() );
                  return; 
                 }
                if( bound_type::template maximum<0>() < result.template get<0>() ) 
                 {
                  result.template set<0>( bound_type::template maximum<0>() );      
                  return; 
                 }
               }

           };

        }

       //template<> struct integrity< ::color::category::hsl_uint8   > : public ::color::fix::_internal::_privateHSL::integrity<::color::category::hsl_uint8  >{ };
       //template<> struct integrity< ::color::category::hsl_uint16  > : public ::color::fix::_internal::_privateHSL::integrity<::color::category::hsl_uint16 >{ };
       //template<> struct integrity< ::color::category::hsl_uint32  > : public ::color::fix::_internal::_privateHSL::integrity<::color::category::hsl_uint32 >{ };
       //template<> struct integrity< ::color::category::hsl_uint64  > : public ::color::fix::_internal::_privateHSL::integrity<::color::category::hsl_uint64 >{ };
       template<> struct integrity< ::color::category::hsl_float   > : public ::color::fix::_internal::_privateHSL::integrity<::color::category::hsl_float  >{ };
       template<> struct integrity< ::color::category::hsl_double  > : public ::color::fix::_internal::_privateHSL::integrity<::color::category::hsl_double >{ };
       template<> struct integrity< ::color::category::hsl_ldouble > : public ::color::fix::_internal::_privateHSL::integrity<::color::category::hsl_ldouble>{ };

       }
    }
  }

#endif

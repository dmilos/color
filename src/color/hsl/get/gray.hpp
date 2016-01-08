#ifndef color_hsl_get_gray
#define color_hsl_get_gray

// ::color::get::gray( c )



 namespace color
  {
   namespace get
    {
     namespace _internal
      {
       namespace hsl
        {
         namespace _internal
          {

           template< typename category_name >
            inline
            typename ::color::_internal::model< category_name >::component_const_type
            gray( ::color::_internal::model< category_name > const& color_parameter  )
             {
              typedef ::color::_internal::model< category_name > model_type;

              return color_parameter.template get<0>();
             }

          }
        }
      }

      inline
      ::color::_internal::model< color::category::hsl_uint8 >::component_const_type
      gray( ::color::_internal::model< color::category::hsl_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::hsl::_internal::gray<color::category::hsl_uint8>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::hsl_uint16 >::component_const_type
      gray( ::color::_internal::model< color::category::hsl_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::hsl::_internal::gray<color::category::hsl_uint16>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::hsl_uint32 >::component_const_type
      gray( ::color::_internal::model< color::category::hsl_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::hsl::_internal::gray<color::category::hsl_uint32>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::hsl_uint64 >::component_const_type
      gray( ::color::_internal::model< color::category::hsl_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::hsl::_internal::gray<color::category::hsl_uint64>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::hsl_float >::component_const_type
      gray( ::color::_internal::model< color::category::hsl_float > const& color_parameter )
       {
        return ::color::get::_internal::hsl::_internal::gray<color::category::hsl_float>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::hsl_double >::component_const_type
      gray( ::color::_internal::model< color::category::hsl_double > const& color_parameter )
       {
        return ::color::get::_internal::hsl::_internal::gray<color::category::hsl_double>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::hsl_ldouble >::component_const_type
      gray( ::color::_internal::model< color::category::hsl_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::hsl::_internal::gray<color::category::hsl_ldouble>( color_parameter );
       }


    }
  }

#endif 

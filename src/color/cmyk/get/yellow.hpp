#ifndef color_cmyk_get_yellow
#define color_cmyk_get_yellow

// ::color::get::yellow( c )



 namespace color
  {
   namespace get
    {
     namespace _internal
      {
       namespace cmyk
        {
         namespace _internal
          {

           template< typename category_name >
            inline
            typename ::color::_internal::model< category_name >::component_const_type
            yellow( ::color::_internal::model< category_name > const& color_parameter  )
             {
              return color_parameter.template get<1>();
             }

          }
        }
      }

      inline
      ::color::_internal::model< color::category::cmyk_uint8 >::component_const_type
      yellow( ::color::_internal::model< color::category::cmyk_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::yellow<color::category::cmyk_uint8>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::cmyk_uint16 >::component_const_type
      yellow( ::color::_internal::model< color::category::cmyk_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::yellow<color::category::cmyk_uint16>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_uint32 >::component_const_type
      yellow( ::color::_internal::model< color::category::cmyk_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::yellow<color::category::cmyk_uint32>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_uint64 >::component_const_type
      yellow( ::color::_internal::model< color::category::cmyk_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::yellow<color::category::cmyk_uint64>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_float >::component_const_type
      yellow( ::color::_internal::model< color::category::cmyk_float > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::yellow<color::category::cmyk_float>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_double >::component_const_type
      yellow( ::color::_internal::model< color::category::cmyk_double > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::yellow<color::category::cmyk_double>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_ldouble >::component_const_type
      yellow( ::color::_internal::model< color::category::cmyk_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::yellow<color::category::cmyk_ldouble>( color_parameter );
       };


    }
  }

#endif

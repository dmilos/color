#ifndef color_cmyk_get_magenta
#define color_cmyk_get_magenta

// ::color::get::magenta( c )



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
            magenta( ::color::_internal::model< category_name > const& color_parameter  )
             {
              typedef ::color::_internal::model< category_name > model_type;
              typedef ::color::_internal::trait< category_name > trait_type;
              typedef typename trait_type::component_type     component_type;

              return color_parameter.template get<2>();
             }

          }
        }
      }

      inline
      ::color::_internal::model< color::category::cmyk_uint8 >::component_const_type
      magenta( ::color::_internal::model< color::category::cmyk_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::magenta<color::category::cmyk_uint8>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::cmyk_uint16 >::component_const_type
      magenta( ::color::_internal::model< color::category::cmyk_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::magenta<color::category::cmyk_uint16>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_uint32 >::component_const_type
      magenta( ::color::_internal::model< color::category::cmyk_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::magenta<color::category::cmyk_uint32>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_uint64 >::component_const_type
      magenta( ::color::_internal::model< color::category::cmyk_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::magenta<color::category::cmyk_uint64>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_float >::component_const_type
      magenta( ::color::_internal::model< color::category::cmyk_float > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::magenta<color::category::cmyk_float>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_double >::component_const_type
      magenta( ::color::_internal::model< color::category::cmyk_double > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::magenta<color::category::cmyk_double>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::cmyk_ldouble >::component_const_type
      magenta( ::color::_internal::model< color::category::cmyk_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::cmyk::_internal::magenta<color::category::cmyk_ldouble>( color_parameter );
       };


    }
  }

#endif

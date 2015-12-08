#ifndef color_rgb_get_magenta
#define color_rgb_get_magenta

// ::color::get::magenta( c )



 namespace color
  {
   namespace get
    {
     namespace _internal
      {
       namespace rgb
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

              return ( trait_type::template range<2>() - ( color_parameter.template get<2>() - trait_type::template minimum<2>() ) ) + trait_type::template  minimum<2>();
             }

          }
        }
      }

      inline
      ::color::_internal::model< color::category::rgb_uint8 >::component_const_type
      magenta( ::color::_internal::model< color::category::rgb_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::magenta<color::category::rgb_uint8>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_uint16 >::component_const_type
      magenta( ::color::_internal::model< color::category::rgb_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::magenta<color::category::rgb_uint16>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_uint32 >::component_const_type
      magenta( ::color::_internal::model< color::category::rgb_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::magenta<color::category::rgb_uint32>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_uint64 >::component_const_type
      magenta( ::color::_internal::model< color::category::rgb_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::magenta<color::category::rgb_uint64>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_float >::component_const_type
      magenta( ::color::_internal::model< color::category::rgb_float > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::magenta<color::category::rgb_float>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_double >::component_const_type
      magenta( ::color::_internal::model< color::category::rgb_double > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::magenta<color::category::rgb_double>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::rgb_ldouble >::component_const_type
      magenta( ::color::_internal::model< color::category::rgb_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::rgb::_internal::magenta<color::category::rgb_ldouble>( color_parameter );
       }


    }
  }

#endif

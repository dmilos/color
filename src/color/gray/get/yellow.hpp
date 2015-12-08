#ifndef color_gray_get_yellow
#define color_gray_get_yellow

// ::color::get::yellow( c )



 namespace color
  {
   namespace get
    {
     namespace _internal
      {
       namespace gray
        {
         namespace _internal
          {

           template< typename category_name >
            inline
            typename ::color::_internal::model< category_name >::component_const_type
            yellow( ::color::_internal::model< category_name > const& color_parameter  )
             {
              typedef ::color::_internal::model< category_name > model_type;
              typedef ::color::_internal::trait< category_name > trait_type;

              return ( trait_type::template range<0>() - ( color_parameter.template get<0>() - trait_type::template minimum<0>() ) ) + trait_type::template  minimum<0>();
             }

          }
        }
      }

      inline
      ::color::_internal::model< color::category::gray_uint8 >::component_const_type
      yellow( ::color::_internal::model< color::category::gray_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::gray::_internal::yellow<color::category::gray_uint8>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::gray_uint16 >::component_const_type
      yellow( ::color::_internal::model< color::category::gray_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::gray::_internal::yellow<color::category::gray_uint16>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::gray_uint32 >::component_const_type
      yellow( ::color::_internal::model< color::category::gray_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::gray::_internal::yellow<color::category::gray_uint32>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::gray_uint64 >::component_const_type
      yellow( ::color::_internal::model< color::category::gray_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::gray::_internal::yellow<color::category::gray_uint64>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::gray_float >::component_const_type
      yellow( ::color::_internal::model< color::category::gray_float > const& color_parameter )
       {
        return ::color::get::_internal::gray::_internal::yellow<color::category::gray_float>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::gray_double >::component_const_type
      yellow( ::color::_internal::model< color::category::gray_double > const& color_parameter )
       {
        return ::color::get::_internal::gray::_internal::yellow<color::category::gray_double>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::gray_ldouble >::component_const_type
      yellow( ::color::_internal::model< color::category::gray_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::gray::_internal::yellow<color::category::gray_ldouble>( color_parameter );
       };


    }
  }

#endif

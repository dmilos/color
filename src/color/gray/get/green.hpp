#ifndef color_gray_get_green
#define color_gray_get_green

// ::color::get::green( c )

#include "../../rgb/akin/gray.hpp"
#include "../../rgb/trait/component.hpp"
#include "../../rgb/trait/index.hpp"

#include "../category.hpp"

#include "../../_internal/reformat.hpp"
#include "../../generic/trait/scalar.hpp"
#include "../../generic/trait/component.hpp"

 namespace color
  {
   namespace get
    {

      inline
      ::color::trait::component< ::color::akin::rgb< ::color::category::gray_uint8 >::akin_type >::return_type
      green( ::color::_internal::model< ::color::category::gray_uint8 > const& color_parameter )
       {
        typedef ::color::category::gray_uint8  category_type;
        typedef ::color::akin::rgb<category_type>::akin_type                   akin_type;
        typedef ::color::trait::scalar<category_type>::instance_type           scalar_type; 
        typedef ::color::_internal::reformat< akin_type, category_type, scalar_type >  reformat_type;

        return reformat_type::template process<1,0>( color_parameter.template get<0>()  );
       }

      inline
      ::color::trait::component< ::color::akin::rgb< ::color::category::gray_uint16 >::akin_type >::return_type
      green( ::color::_internal::model< ::color::category::gray_uint16 > const& color_parameter )
       {
        typedef ::color::category::gray_uint16  category_type;
        typedef ::color::akin::rgb<category_type>::akin_type                   akin_type;
        typedef ::color::trait::scalar<category_type>::instance_type           scalar_type; 
        typedef ::color::_internal::reformat< akin_type, category_type, scalar_type >  reformat_type;

        return reformat_type::template process<1,0>( color_parameter.template get<0>()  );
       }

      inline
      ::color::trait::component< ::color::akin::rgb< ::color::category::gray_uint32 >::akin_type >::return_type
      green( ::color::_internal::model< ::color::category::gray_uint32 > const& color_parameter )
       {
        typedef ::color::category::gray_uint32  category_type;
        typedef ::color::akin::rgb<category_type>::akin_type                   akin_type;
        typedef ::color::trait::scalar<category_type>::instance_type           scalar_type; 
        typedef ::color::_internal::reformat< akin_type, category_type, scalar_type >  reformat_type;

        return reformat_type::template process<1,0>( color_parameter.template get<0>()  );
       }

      inline
      ::color::trait::component< ::color::akin::rgb< ::color::category::gray_uint64 >::akin_type >::return_type
      green( ::color::_internal::model< ::color::category::gray_uint64 > const& color_parameter )
       {
        typedef ::color::category::gray_uint64  category_type;
        typedef ::color::akin::rgb<category_type>::akin_type                   akin_type;
        typedef ::color::trait::scalar<category_type>::instance_type           scalar_type; 
        typedef ::color::_internal::reformat< akin_type, category_type, scalar_type >  reformat_type;

        return reformat_type::template process<1,0>( color_parameter.template get<0>()  );
       }

      inline
      ::color::trait::component< ::color::akin::rgb< ::color::category::gray_float >::akin_type >::return_type
      green( ::color::_internal::model< ::color::category::gray_float > const& color_parameter )
       {
        typedef ::color::category::gray_float  category_type;
        typedef ::color::akin::rgb<category_type>::akin_type                   akin_type;
        typedef ::color::trait::scalar< category_type>::instance_type           scalar_type; 
        typedef ::color::_internal::reformat< akin_type,  category_type, scalar_type >  reformat_type;

        return reformat_type::template process<1,0>( color_parameter.template get<0>()  );
       }

      inline
      ::color::trait::component< ::color::akin::rgb< ::color::category::gray_double >::akin_type >::return_type
      green( ::color::_internal::model< ::color::category::gray_double > const& color_parameter )
       {
        typedef ::color::category::gray_double  category_type;
        typedef ::color::akin::rgb< category_type>::akin_type                   akin_type;
        typedef ::color::trait::scalar< category_type>::instance_type           scalar_type; 
        typedef ::color::_internal::reformat< akin_type,  category_type, scalar_type >  reformat_type;

        return reformat_type::template process<1,0>( color_parameter.template get<0>()  );
       }

      inline
      ::color::trait::component< ::color::akin::rgb< ::color::category::gray_ldouble >::akin_type >::return_type
      green( ::color::_internal::model< ::color::category::gray_ldouble > const& color_parameter )
       {
        typedef ::color::category::gray_ldouble  category_type;
        typedef ::color::akin::rgb< category_type>::akin_type                   akin_type;
        typedef ::color::trait::scalar< category_type>::instance_type           scalar_type; 
        typedef ::color::_internal::reformat< akin_type,  category_type, scalar_type >  reformat_type;

        return reformat_type::template process<1,0>( color_parameter.template get<0>()  );
       }

    }
  }

#endif

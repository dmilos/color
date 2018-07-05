#ifndef color_rgb_operation_normalize
#define color_rgb_operation_normalize

// ::color::operation::normalize< ::color::category::rgb_* >

#include "../../generic/operation/normalize.hpp"
#include "../category.hpp"


namespace color
 {
  namespace operation
   {

     inline
     ::color::trait::scalar< ::color::category::rgb_float >::instance_type
     normalize
      (
        ::color::model< ::color::category::rgb_float >         const& m
       ,::color::trait::index< ::color::category::rgb_float >::model_type index
      )
      { return m.get(index); }


     inline
     ::color::trait::scalar< ::color::category::rgb_double >::instance_type
     normalize
      (
        ::color::model< ::color::category::rgb_double >         const& m
       ,::color::trait::index< ::color::category::rgb_double >::model_type index
      )
      { return m.get(index); }

     inline
     ::color::trait::scalar< ::color::category::rgb_ldouble >::instance_type
     normalize
      (
        ::color::model< ::color::category::rgb_ldouble >         const& m
       ,::color::trait::index< ::color::category::rgb_ldouble >::model_type index
      )
      { return m.get(index); }

    template< unsigned index_size >
     inline
     typename ::color::trait::scalar< ::color::category::rgb_float >::instance_type
     normalize
      (
       ::color::model< ::color::category::rgb_float >                     const& m
      )
     { return  m.template get<index_size>(); }

    template< unsigned index_size >
     inline
     typename ::color::trait::scalar< ::color::category::rgb_double >::instance_type
     normalize
      (
       ::color::model< ::color::category::rgb_double >                     const& m
      )
     { return  m.template get<index_size>(); }

    template< unsigned index_size >
     inline
     typename ::color::trait::scalar< ::color::category::rgb_ldouble >::instance_type
     normalize
      (
       ::color::model< ::color::category::rgb_ldouble >                     const& m
      )
     { return  m.template get<index_size>(); }

   }
 }

#endif

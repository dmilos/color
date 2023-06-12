#ifndef color_xyz_get_temperature
#define color_xyz_get_temperature

// ::color::get::temperature( c )

#include "../../generic/model.hpp"
#include "../category.hpp"

#include "../../generic/trait/scalar.hpp"




 namespace color
  {
   namespace get
    {
     namespace _internal
      {

       template < typename category_name /*, int method*/ >
        struct temperature
         {
          typedef category_name category_type;
          typedef typename ::color::trait::scalar< category_name >::instance_type   scalar_type;

          typedef ::color::model<category_name>   model_type;

          typedef ::color::model< typename ::color::akin::xyz< category_name >::akin_type >  xyz_type;

          static scalar_type process( model_type const& instance )
           {
            scalar_type result=-1;
            return result;
           }
         };
      }

     template< typename category_name >
      inline
      typename ::color::model< category_name >::scalar_instance_type
      temperature( ::color::model< category_name > const& color_parameter )
       {
        typedef  ::color::get::_internal::temperature<category_name>  scalculator_type;
        auto result = scalculator_type::process( color_parameter );
        return result;
       }

    }
  }

#endif


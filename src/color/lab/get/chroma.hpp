#ifndef color_lab_get_chroma
#define color_lab_get_chroma

// ::color::get::chroma( c )

#include "../category.hpp"
#include "../place/place.hpp"




 namespace color
  {
   namespace get
    {

     namespace _internal
      {
       namespace lab
        {

         template< typename unsigned_name, ::color::constant::lab::reference_enum reference_number >
          inline
          typename ::color::model< ::color::category::lab< unsigned_name, reference_number > >::component_const_type
          chroma( ::color::model< ::color::category::lab< unsigned_name, reference_number > > const& c )
           {
            typedef unsigned_name  unsigned_type;

            typedef ::color::category::lab< unsigned_type, reference_number >  category_type;

            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;
            typedef typename ::color::trait::component<category_type>::instance_type     component_type;

            scalar_type const A = static_cast<scalar_type>( c.template get< 1 >() ) - std::numeric_limits<unsigned_type>::max()/2;
            scalar_type const B = static_cast<scalar_type>( c.template get< 2 >() ) - std::numeric_limits<unsigned_type>::max()/2;

            return component_type( sqrt(A*A + B*B) );
           }

        }
      }

     template<::color::constant::lab::reference_enum reference_number >
      inline
      typename ::color::model< ::color::category::lab< std::uint8_t, reference_number > >::component_const_type
      chroma( ::color::model< ::color::category::lab< std::uint8_t, reference_number > > const& c )
       {
        return ::color::get::_internal::lab::chroma( c );
       }

     template<::color::constant::lab::reference_enum reference_number >
      inline
      typename ::color::model< ::color::category::lab< std::uint16_t, reference_number > >::component_const_type
      chroma( ::color::model< ::color::category::lab< std::uint16_t, reference_number > > const& c )
       {
        return ::color::get::_internal::lab::chroma( c );
       }

     template<::color::constant::lab::reference_enum reference_number >
      inline
      typename ::color::model< ::color::category::lab< std::uint32_t, reference_number > >::component_const_type
      chroma( ::color::model< ::color::category::lab< std::uint32_t, reference_number > > const& c )
       {
        return ::color::get::_internal::lab::chroma( c );
       }

     template<::color::constant::lab::reference_enum reference_number >
      inline
      typename ::color::model< ::color::category::lab< std::uint64_t, reference_number > >::component_const_type
      chroma( ::color::model< ::color::category::lab< std::uint64_t, reference_number > > const& c )
       {
        return ::color::get::_internal::lab::chroma( c );
       }

     template< typename tag_name, ::color::constant::lab::reference_enum reference_number >
      inline
      typename ::color::model< ::color::category::lab< tag_name, reference_number > >::component_const_type
      chroma( ::color::model< ::color::category::lab< tag_name, reference_number > > const& c )
       {
        typedef ::color::category::lab< tag_name, reference_number >  category_type;

        typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

        typedef typename ::color::trait::component<category_type>::instance_type     component_type;

        //typedef ::color::_internal::normalize< category_type > normalize_type;

        scalar_type const A = static_cast<scalar_type>( c.template get< 1 >() );
        scalar_type const B = static_cast<scalar_type>( c.template get< 2 >() );

        return component_type( sqrt(A*A + B*B) );
       }





/*
     template< ::color::constant::lab::reference_enum reference_number >
      inline
      typename ::color::model< ::color::category::lab< std::uint8_t, reference_number > >::component_const_type
      chroma( ::color::model< ::color::category::lab< std::uint8_t, reference_number > > const& c )
       {
        typedef ::color::category::lab< std::uint8_t, reference_number >  category_type;

        typedef typename ::color::trait::scalar<category_type>     scalar_trait_type;
        typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

        typedef typename ::color::trait::component<category_type>::instance_type     component_type;

        scalar_type const A = static_cast<scalar_type>( c.template get< 1 >() - scalar_type(128) );
        scalar_type const B = static_cast<scalar_type>( c.template get< 2 >() - scalar_type(128) );

        return component_type( sqrt(A*A + B*B) );
       }

     template< ::color::constant::lab::reference_enum reference_number >
      inline
      typename ::color::model< ::color::category::lab< std::uint16_t, reference_number > >::component_const_type
      chroma( ::color::model< ::color::category::lab< std::uint16_t, reference_number > > const& c )
       {
        typedef ::color::category::lab< std::uint16_t, reference_number >  category_type;

        typedef typename ::color::trait::scalar<category_type>     scalar_trait_type;
        typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

        typedef typename ::color::trait::component<category_type>::instance_type     component_type;

        scalar_type const A = static_cast<scalar_type>( c.template get< 1 >() - scalar_type(65536) );
        scalar_type const B = static_cast<scalar_type>( c.template get< 2 >() - scalar_type(128) );

        return component_type( sqrt(A*A + B*B) );
       }

     template< ::color::constant::lab::reference_enum reference_number >
      inline
      typename ::color::model< ::color::category::lab< std::uint32_t, reference_number > >::component_const_type
      chroma( ::color::model< ::color::category::lab< std::uint32_t, reference_number > > const& c )
       {
        typedef ::color::category::lab< std::uint32_t, reference_number >  category_type;

        typedef typename ::color::trait::scalar<category_type>     scalar_trait_type;
        typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

        typedef typename ::color::trait::component<category_type>::instance_type     component_type;

        scalar_type const A = static_cast<scalar_type>( c.template get< 1 >() - scalar_type(128) );
        scalar_type const B = static_cast<scalar_type>( c.template get< 2 >() - scalar_type(128) );

        return component_type( sqrt(A*A + B*B) );
       }
 */
    }
  }

#endif
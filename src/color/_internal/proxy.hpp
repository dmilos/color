#ifndef color__internal_proxy
#define color__internal_proxy

// ::color::_internal::proxy< category >

#include "../generic/trait/container.hpp"
#include "../generic/trait/index.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename category_name >
     class proxy
      {
       public:
         typedef ::color::trait::component< category_name >  component_trait_type;
         typedef ::color::trait::container< category_name >  container_trait_type;
         typedef ::color::trait::scalar< category_name >     scalar_trait_type;

         typedef typename ::color::trait::container< category_name >::instance_type constainer_type;
         typedef typename ::color::trait::index< category_name >::instance_type          index_type;

         typedef typename component_trait_type::instance_type       component_type;
         typedef typename component_trait_type::model_type    component_input_const_type;
         typedef typename scalar_trait_type::model_type          scalar_input_const_type;

         typedef ::color::_internal::proxy<category_name> this_type;

       public:
         proxy( constainer_type & container, index_type const& index )
          : m_container( container ), m_index( index )
          {
          }

         proxy( this_type const& that )
          : m_container( that.m_container ), m_index( that.m_index )
          {
          }

         proxy & operator=( this_type const& that )
          {
           container_trait_type::set( this->m_container, this->m_index, container_trait_type::get( that.m_container, that.m_index ) );
           return *this;
          }

         operator component_type()const
          {
           return container_trait_type::get( this->m_container, this->m_index );
          }

         this_type & operator=( component_input_const_type component )
          {
           container_trait_type::set( this->m_container, this->m_index, component );
           return *this;
          }

         this_type & operator+=( component_input_const_type component )
          {
           container_trait_type::set( this->m_container, this->m_index, container_trait_type::get( this->m_container, this->m_index ) + component );
           return *this;
          }

         this_type & operator-=( component_input_const_type component )
          {
           container_trait_type::set( this->m_container, this->m_index, container_trait_type::get( this->m_container, this->m_index ) - component );
           return *this;
          }

         this_type & operator*=( scalar_input_const_type scalar )
          {
           container_trait_type::set( this->m_container, this->m_index, component_type( container_trait_type::get( this->m_container, this->m_index ) * scalar ) );
           return *this;
          }

         this_type & operator/=( scalar_input_const_type scalar )
          {
           container_trait_type::set( this->m_container, this->m_index, component_type( container_trait_type::get( this->m_container, this->m_index ) / scalar ) );
           return *this;
          }

         this_type & operator++(  )
          {
           container_trait_type::set( this->m_container, this->m_index, container_trait_type::get( this->m_container, this->m_index ) + component_type(1) );
           return *this;
          }

         component_type operator++( int k )
          {
           component_type value = container_trait_type::get( this->m_container, this->m_index );
           container_trait_type::set( this->m_container, this->m_index, value + component_type(1) );
           return value;
          }

         this_type & operator--()
          {
           container_trait_type::set( this->m_container, this->m_index, container_trait_type::get( this->m_container, this->m_index ) - component_type(1) );
           return *this;
          }

         component_type operator--( int k )
          {
           component_type value = container_trait_type::get( this->m_container, this->m_index );
           container_trait_type::set( this->m_container, this->m_index, value - component_type(1) );
           return value;
          }

       private:
         constainer_type & m_container;
         index_type        m_index;
      };

   }
 }

#endif

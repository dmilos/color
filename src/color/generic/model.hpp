#ifndef color__internal_model_87845cb9_e99c_4016_b1e9_148e6e094f40
#define color__internal_model_87845cb9_e99c_4016_b1e9_148e6e094f40

// ::color::model< category >


#include "./trait/index.hpp"
#include "./trait/size.hpp"
#include "./trait/component.hpp"
#include "./trait/container.hpp"
#include "./trait/bound.hpp"
#include "./trait/scalar.hpp"

#include "../_internal/convert.hpp"
#include "../_internal/init.hpp"
#include "../_internal/proxy.hpp"
#include "./constant/base.hpp"
#include "./constant/make.hpp"

/**
 * @namespace color
 * Main namespace for this library
 */
namespace color
 {

  /**
   * @class model
   * Model for all color models.
   */
  template< typename category_name >
   class model
    {
     public:
       typedef category_name category_type;

       typedef ::color::trait::index< category_name >      index_trait_type;
       typedef ::color::trait::size< category_name >       size_trait_type;
       typedef ::color::trait::component< category_name >  component_trait_type;
       typedef ::color::trait::container< category_name >  container_trait_type;
       typedef ::color::trait::bound< category_name >      bound_trait_type, bound_type;
       typedef ::color::trait::scalar< category_name >     scalar_trait_type;

       typedef ::color::model<category_type>  this_type, model_type;

       typedef typename index_trait_type::instance_type          index_type;
       typedef typename index_trait_type::const_type             index_const_type;
       typedef typename index_trait_type::model_type             index_input_const_type;
       typedef typename index_trait_type::return_image_type      index_return_image_type;

       typedef typename size_trait_type::instance_type          size_type;
       typedef typename size_trait_type::return_image_type      size_return_image_type;

       typedef typename component_trait_type::instance_type       component_type;
       typedef typename component_trait_type::const_type          component_const_type;
       typedef typename component_trait_type::return_image_type   component_return_const_type;
       typedef typename component_trait_type::return_type         component_return_type;
       typedef typename component_trait_type::model_type          component_input_const_type;
       typedef typename component_trait_type::input_type          component_input_type;

       typedef typename container_trait_type::instance_type          container_type;
       typedef typename container_trait_type::const_type             container_const_type;
       typedef typename container_trait_type::return_image_type      container_return_const_type;
       typedef typename container_trait_type::return_original_type   container_return_original_type;
       typedef typename container_trait_type::model_type             container_input_const_type;
       typedef typename container_trait_type::input_type             container_input_type;

       typedef typename container_trait_type::set_return_type        set_return_type;

       typedef typename scalar_trait_type::model_type          scalar_input_const_type;
       typedef typename scalar_trait_type::instance_type       scalar_instance_type;

               model( )
               {
                // Do NOTHING is must!!!
                // Allow using of memset instead this default initialization
               }

       explicit model( container_input_const_type container )//!< NO explicit. Type conversion!!!
        :m_container( container )
        {
         // Do NOTHING is must!!!
        }

       template< typename tag_name >
        model( ::color::constant::base< tag_name > const& constant )  //!< Constant is color too. No need for explicit
         {
          *this = constant;
         }

       explicit model( std::initializer_list<component_type> const& ilist ) //!< NO explicit. Type conversion!!!
        {
         //TODO C++14 static_assert( container_trait_type::size_entity != ilist.size(), "Initializer list size do not match model/format length." );
         ::color::_internal::init<category_name>( this->m_container, ilist );
        }

       /*template < typename that_component_type >
        explicit model( std::initializer_list<that_component_type> const& ilist )
         {
          //TODO C++14 static_assert( container_trait_type::size_entity != ilist.size(), "Initializer list size do not match model/format length." );
          ::color::_internal::init<category_name,that_component_type>( this->m_container, ilist );
         }*/

       model( ::color::model<category_type> const& that )
        {
         *this = that;
        }

       template< typename other_category_name >
        explicit model( ::color::model<other_category_name> const& that ) //!< NO explicit. Heavy calculation involved!!!
         {
          *this = that;
         }


       template< typename tag_name >
        model &  operator=( ::color::constant::base< tag_name > const& )
         {
          ::color::constant::make< ::color::constant::base< tag_name >, category_name >::process( this->m_container );
          return *this;
         }

        model & operator=( ::color::model<category_type> const& that )
         {
          this->m_container = that.container();
          return *this;
         }

       template< typename other_category_name >
        model & operator=( ::color::model<other_category_name> const& that )
         {
          ::color::_internal::convert< category_name, other_category_name>::process( this->m_container, that.container() );
          return *this;
         }

       component_return_const_type
       get( index_input_const_type index )const
        {
         return container_trait_type::get( this->m_container, index );
        }

       template< index_type index >
        component_return_const_type
        get()const
         {
          return container_trait_type::template get<index>( this->m_container );
         }

       set_return_type
       set( index_input_const_type index, component_input_const_type component )
        {
         return container_trait_type::set( this->m_container, index, component );
        }

       template< index_type index >
       set_return_type
       set( component_input_const_type component )
        {
         /*return*/ container_trait_type::template set<index>( this->m_container, component );
        }

       void
       set( std::initializer_list<component_type> const& ilist )
        {
         return ::color::_internal::init<category_name>( this->m_container, ilist );
        }

       component_return_const_type operator[]( index_input_const_type index )const
        {
         return this->get( index );
        }

     private:
       typedef typename ::color::_internal::proxy< category_name > proxy_type;

     public:
       proxy_type       operator[]( index_input_const_type index )
        {
         return proxy_type{ this->m_container, index };
        }

       container_return_const_type      container()const
        {
         return this->m_container;
        }

       container_return_original_type   container()
        {
         return this->m_container;
        }

       void container( container_input_const_type container )
        {
         this->m_container = container;
        }

       static /*constexpr*/ size_return_image_type       size()
        {
         return container_trait_type::size();
        }

     private:
       container_type m_container;
    };

 }

#endif

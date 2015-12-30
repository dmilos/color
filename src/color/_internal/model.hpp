#ifndef color__internal_model_87845cb9_e99c_4016_b1e9_148e6e094f40
#define color__internal_model_87845cb9_e99c_4016_b1e9_148e6e094f40
// color::_internal::model< category >


#include "./trait.hpp"
#include "./convert.hpp"
#include "./init.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename category_name >
     class model
      {
       public:
        typedef category_name category_type;

        typedef ::color::_internal::trait<category_type> trait_type;
      //typedef ::color::_internal::model<category_type>  this_type;

        typedef typename trait_type::index_type                   index_type;
      // TODO typedef typename trait_type::index_const_type             index_const_type;
        typedef typename trait_type::index_input_const_type       index_input_const_type;
        typedef typename trait_type::index_return_image_type      index_return_image_type;

        typedef typename trait_type::component_type               component_type;
        typedef typename trait_type::component_const_type         component_const_type;
        typedef typename trait_type::component_return_const_type  component_return_const_type;
        typedef typename trait_type::component_return_type        component_return_type;
        typedef typename trait_type::component_input_const_type   component_input_const_type;
        typedef typename trait_type::component_input_type         component_input_type;

        typedef typename trait_type::container_type                   container_type;
        typedef typename trait_type::container_const_type             container_const_type;
        typedef typename trait_type::container_return_const_type  container_return_const_type;
        typedef typename trait_type::container_input_const_type       container_input_const_type;
        typedef typename trait_type::container_return_type            container_return_type;

        typedef typename trait_type::set_return_type              set_return_type;

        typedef ::color::_internal::bound<category_type> bound_type;

                 model( )
                 {
                  // do nothing.
                  // Allow using of memset instead this default initialization
                 }

        explicit model( container_input_const_type container )
         :m_container(container)
         {
         }

        explicit model( std::initializer_list<component_type > const& ilist )
         {
          ::color::_internal::init<category_name>( this->m_container, ilist );
         }

        template< typename other_category_name >
         explicit model( ::color::_internal::model<other_category_name> const& that )
          {
           ::color::_internal::convert<category_name, other_category_name>::process( this->m_container, that.container() );
          }

        template< typename other_category_name >
         model operator=( ::color::_internal::model<other_category_name> const& that )
          {
          ::color::_internal::convert<category_name, other_category_name>::process( this->m_container, that.container() );
           return *this;
          }

        component_return_const_type
        get( index_input_const_type index )const
         {
          return trait_type::get( this->m_container, index );
         }

        template< index_type index >
         component_return_const_type
         get()const
          {
           return trait_type::template get<index>( this->m_container );
          }

        //component_return_type
        //get( index_input_const_type index )
        // {
        //  return trait_type::get( m_container, index );
        // }

        //template< index_type index >
        // component_return_type
        // get()
        //  {
        //   return trait_type::get<index>( m_container );
        //  }

        set_return_type
        set( index_input_const_type index, component_input_const_type component )
         {
          return trait_type::set( this->m_container, index, component );
         }

        template< index_type index >
        set_return_type
        set( component_input_const_type component )
         {
          /*return*/ trait_type::template set<index>( this->m_container, component );
         }

        component_return_const_type operator[]( index_input_const_type index )const
         {
          return this->get( index );
         }

        //component_return_type       operator[]( index_input_const_type index )
        // {
        //  return this->get( index );
        // }

        container_return_const_type container()const
         {
          return this->m_container;
         }
        container_return_type       container()
         {
          return this->m_container;
         }

        static index_return_image_type       size()
         {
          return trait_type::size();
         }

        private:
          container_type m_container;
    };

   }
 }

#endif

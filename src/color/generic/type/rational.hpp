#ifndef color_type_rational
#define color_type_rational

// ::color::type::uint48_t

namespace color
 {
  namespace type
   {

#if !defined( color_use_custom_rational )

   class rational
    {
     public:
       typedef  double underlying_type; //!< Does not metter

       rational()
        {
        }

       rational( underlying_type const& underlying )
        {
         this->m_underlying = underlying;
        }

       rational( this_type const& that )
        {
         *this = that;
        }

       ~rational()
        {
        }

       this_type & operator=( this_type const& that )
        {
         this->set( that.get() );
         return *this;
        }

       this_type & operator=( underlying_type const& that )
        {
         this->get() = that;
         return *this;
        }

       operator  underlying_type const&()const
        {
         return m_underlying;
        }

       underlying_type const& get()const
        {
         return m_underlying;
        }

     private:
       underlying_type & get()
        {
         return m_underlying;
        }

       void set( underlying_type const& that )
        {
         m_underlying = that;
        }

      underlying_type m_underlying;
    };

#endif

   }
 }

#endif




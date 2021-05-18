#ifndef color__internal_utility_type_bound
#define color__internal_utility_type_bound

// ::color::_internal::utility::type::bound< number_name, number_const_return_name >

namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace type
       {

        template < typename number_name, typename image_name = number_name const& >
         struct bound
          {
           public:
           typedef number_name      number_type;
           typedef image_name       image_type;

           static /*constexpr*/ image_type  maximum() //!< maximal number that this component can have, Any over is over-burn.
            { // Purposely set to ZERO to force specialization
             static const number_type value=0;
             return value;
            }

           static /*constexpr*/ image_type  minimum() //!< minimal number that this component can have, Any under is over-burn.
            { // Purposely set to ZERO to force specialization
             static const number_type value=0;
             return value;
            }

           static /*constexpr*/ image_type range() //!< maximum() - minimum()
            { // Purposely set to ZERO to force specialization
             static const number_type value =  0;
             return value;
            }
          };

        template <>
         struct bound<bool, bool const& >
         {
          typedef bool           number_type;
          typedef bool const&    image_type;

          typedef bound<number_type,image_type> this_type;

          static /*constexpr*/ image_type  maximum()
           {
            static const number_type value = true;
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static const number_type value = false;
            return value;
           }

          static /*constexpr*/ image_type range()
           {
            static const number_type value = true/*this_type::maximum() - this_type::minimum()*/;
            return value;
           }
         };


        template <>
         struct bound< std::int8_t, std::int8_t const& >
         {
          typedef std::int8_t           number_type;
          typedef std::int8_t const&    image_type;
          typedef std::uint8_t          range_type;

          typedef bound<number_type,image_type> this_type;

          static /*constexpr*/ image_type  maximum()
           {
            static const number_type value = std::numeric_limits< number_type >::max();
            return value; // ==  0 plus 127
           }

          static /*constexpr*/ image_type  minimum()
           {
            static const number_type value = std::numeric_limits< number_type >::min();
            return value; // == 0 minus 128
           }

          static /*constexpr*/ range_type range()
           {
            static const number_type value = this_type::maximum() - this_type::minimum();
            return value;  // == 255
           }
         };

        template <>
         struct bound<std::int16_t, std::int16_t const& >
         {
          typedef std::int16_t           number_type;
          typedef std::int16_t const&    image_type;
          typedef std::uint16_t           range_type;

          typedef bound<number_type,image_type> this_type;

          static /*constexpr*/ image_type  maximum()
           {
            static const number_type value = std::numeric_limits< number_type >::max();
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static const number_type value = std::numeric_limits< number_type >::min();
            return value;
           }

          static /*constexpr*/ image_type range()
           {
            static const number_type value = number_type( this_type::maximum() ) - number_type( this_type::minimum() );
            return value;
           }
         };

        template <>
         struct bound<std::int32_t, std::int32_t const& >
         {
          typedef std::int32_t           number_type;
          typedef std::int32_t const&    image_type;
          typedef std::uint32_t          range_type;

          typedef bound<number_type,image_type> this_type;

          static /*constexpr*/ image_type  maximum()
           {
            static const number_type value = std::numeric_limits< number_type >::max();
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static const number_type value = std::numeric_limits< number_type>::min();
            return value;
           }

          static /*constexpr*/ range_type range()
           {
            static const range_type value = number_type( this_type::maximum() ) - number_type( this_type::minimum() );
            return value;
           }
         };

        template <>
         struct bound<std::int64_t, std::int64_t const& >
         {
          typedef std::int64_t           number_type;
          typedef std::int64_t const&    image_type;
          typedef std::uint64_t          range_type;

          typedef bound<number_type,image_type> this_type;

          static /*constexpr*/ image_type  maximum()
           {
            static const number_type value = std::numeric_limits< number_type >::max();
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static const number_type value = std::numeric_limits< number_type >::min();
            return value;
           }

          static /*constexpr*/ range_type range()
           {
            static const range_type value = number_type( this_type::maximum() ) - number_type( this_type::minimum() );
            return value;
           }
         };


        template <>
         struct bound< std::uint8_t, std::uint8_t const& >
         {
          typedef std::uint8_t           number_type;
          typedef std::uint8_t const&    image_type;

          typedef bound<number_type,image_type> this_type;

          static /*constexpr*/ image_type  maximum()
           {
            static const number_type value = 255;
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static const number_type value = 0;
            return value;
           }

          static /*constexpr*/ image_type range()
           {
            static const number_type value = this_type::maximum() - this_type::minimum();
            return value;
           }
         };

        template <>
         struct bound<std::uint16_t, std::uint16_t const& >
         {
          typedef std::uint16_t           number_type;
          typedef std::uint16_t const&    image_type;

          typedef bound<number_type,image_type> this_type;

          static /*constexpr*/ image_type  maximum()
           {
            static const number_type value = 0xFFFF;
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static const number_type value = 0;
            return value;
           }

          static /*constexpr*/ image_type range()
           {
            static const number_type value = this_type::maximum() - this_type::minimum();
            return value;
           }
         };

        template <>
         struct bound<std::uint32_t, std::uint32_t const& >
         {
          typedef std::uint32_t           number_type;
          typedef std::uint32_t const&    image_type;

          typedef bound<number_type,image_type> this_type;

          static /*constexpr*/ image_type  maximum()
           {
            static const number_type value = 0xFFFFFFFF;
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static const number_type value = 0;
            return value;
           }

          static /*constexpr*/ image_type range()
           {
            static const number_type value = this_type::maximum() - this_type::minimum();
            return value;
           }
         };

        template <>
         struct bound<std::uint64_t, std::uint64_t const& >
         {
          typedef std::uint64_t           number_type;
          typedef std::uint64_t const&    image_type;

          typedef bound<number_type,image_type> this_type;

          static /*constexpr*/ image_type  maximum()
           {
            static const number_type value = 0xFFFFFFFFFFFFFFFFu;
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static const number_type value = 0;
            return value;
           }

          static /*constexpr*/ image_type range()
           {
            static const number_type value = this_type::maximum() - this_type::minimum();
            return value;
           }
         };


        template <>
         struct bound<float, float const& >
         {
          typedef float           number_type;
          typedef float const&    image_type;

          typedef bound<number_type,image_type> this_type;

          static /*constexpr*/ image_type  maximum()
           {
            static const number_type value=1;
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static const number_type value=0;
            return value;
           }

          static /*constexpr*/ image_type range()
           {
            static const number_type value = this_type::maximum() - this_type::minimum();
            return value;
           }
         };

        template <>
         struct bound<double, double const& >
         {
          typedef double           number_type;
          typedef double const&    image_type;

          typedef bound<number_type,image_type> this_type;

          static /*constexpr*/ image_type  maximum()
           {
            static const number_type value=1;
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static const number_type value=0;
            return value;
           }

          static /*constexpr*/ image_type range()
           {
            static const number_type value = this_type::maximum() - this_type::minimum();
            return value;
           }
         };

        template <>
         struct bound<long double, long double const& >
         {
          typedef long double           number_type;
          typedef long double const&    image_type;

          typedef bound<number_type,image_type> this_type;

          static /*constexpr*/ image_type  maximum()
           {
            static const number_type value = 1;
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static const number_type value = 0;
            return value;
           }

          static /*constexpr*/ image_type range()
           {
            static const number_type value = this_type::maximum() - this_type::minimum();
            return value;
           }

         };

       }
     }
   }
 }

#endif




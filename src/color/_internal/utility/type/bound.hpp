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

           // Having this typedef is bad idea
           typedef bound<number_type,image_type> this_type;

           static /*constexpr*/ image_type  maximum()
            { // Purposely set to ZERO to force specialization
             static number_type value=0;
             return value;
            }

           static /*constexpr*/ image_type  minimum()
            { // Purposely set to ZERO to force specialization
             static number_type value=0;
             return value;
            }

           static /*constexpr*/ image_type range()
            {
             static number_type value =  this_type::maximum() - this_type::minimum();
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
            static number_type value = true;
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static number_type value = false;
            return value;
           }

          static /*constexpr*/ image_type range()
           {
            static number_type value = this_type::maximum() - this_type::minimum();
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
            static number_type value = 255;
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static number_type value = 0;
            return value;
           }

          static /*constexpr*/ image_type range()
           {
            static number_type value = this_type::maximum() - this_type::minimum();
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
            static number_type value = 0xFFFF;
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static number_type value = 0;
            return value;
           }

          static /*constexpr*/ image_type range()
           {
            static number_type value = this_type::maximum() - this_type::minimum();
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
            static number_type value = 0xFFFFFFFF;
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static number_type value = 0;
            return value;
           }

          static /*constexpr*/ image_type range()
           {
            static number_type value = this_type::maximum() - this_type::minimum();
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
            static number_type value = 0xFFFFFFFFFFFFFFFFu;
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static number_type value = 0;
            return value;
           }

          static /*constexpr*/ image_type range()
           {
            static number_type value = this_type::maximum() - this_type::minimum();
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
            static number_type value=1;
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static number_type value=0;
            return value;
           }

          static /*constexpr*/ image_type range()
           {
            static number_type value = this_type::maximum() - this_type::minimum();
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
            static number_type value=1;
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static number_type value=0;
            return value;
           }

          static /*constexpr*/ image_type range()
           {
            static number_type value = this_type::maximum() - this_type::minimum();
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
            static number_type value = 1;
            return value;
           }

          static /*constexpr*/ image_type  minimum()
           {
            static number_type value = 0;
            return value;
           }

          static /*constexpr*/ image_type range()
           {
            static number_type value = this_type::maximum() - this_type::minimum();
            return value;
           }

         };

       }
     }
   }
 }

#endif

#ifndef color_rgb_category_
#define color_rgb_category_

// ::color::category::rgb_ABC;

namespace color
 {
  namespace category
   {

    namespace _internal
     {
      struct rgb_uint8   {};
      struct rgb_uint16  {};
      struct rgb_uint24  {};
      struct rgb_uint32  {};
      struct rgb_uint48  {};
      struct rgb_uint64  {};
      struct rgb_float   {};
      struct rgb_double  {};
      struct rgb_ldouble {};
     }

    template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position >
     struct rgb_scramble{};

    template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position, unsigned alpha_position >
      struct rgba_scramble{};

    template< typename tag_name >
     struct rgb
      {
       // typedef void category_name;
      };

    using rgb_uint8   = rgb< ::color::category::_internal::rgb_uint8   >;
    using rgb_uint16  = rgb< ::color::category::_internal::rgb_uint16  >;
    using rgb_uint24  = rgb< ::color::category::_internal::rgb_uint24  >;
    using rgb_uint32  = rgb< ::color::category::_internal::rgb_uint32  >;
    using rgb_uint48  = rgb< ::color::category::_internal::rgb_uint48  >;
    using rgb_uint64  = rgb< ::color::category::_internal::rgb_uint64  >;
    using rgb_float   = rgb< ::color::category::_internal::rgb_float   >;
    using rgb_double  = rgb< ::color::category::_internal::rgb_double  >;
    using rgb_ldouble = rgb< ::color::category::_internal::rgb_ldouble >;

    /*
    template<> struct rgb< 9> { typedef ::color::category::rgb_scramble<  float, 0, 1, 2 >    category_name; };
    template<> struct rgb<10> { typedef ::color::category::rgb_scramble<  float, 2, 1, 0 >    category_name; };
    template<> struct rgb<11> { typedef ::color::category::rgba_scramble< float, 2, 1, 0, 3 > category_name; };
    template<> struct rgb<12> { typedef ::color::category::rgba_scramble< float, 3, 2, 1, 0 > category_name; };
    template<> struct rgb<13> { typedef ::color::category::rgba_scramble< float, 0, 1, 2, 3 > category_name; };
    template<> struct rgb<14> { typedef ::color::category::rgba_scramble< float, 1, 2, 3, 0 > category_name; };

    template<> struct rgb<15 > { typedef ::color::category::rgb_scramble<  double, 0, 1, 2 >    category_name; };
    template<> struct rgb<16> { typedef ::color::category::rgb_scramble<  double, 2, 1, 0 >    category_name; };
    template<> struct rgb<17> { typedef ::color::category::rgba_scramble< double, 2, 1, 0, 3 > category_name; };
    template<> struct rgb<18> { typedef ::color::category::rgba_scramble< double, 3, 2, 1, 0 > category_name; };
    template<> struct rgb<19> { typedef ::color::category::rgba_scramble< double, 0, 1, 2, 3 > category_name; };
    template<> struct rgb<20> { typedef ::color::category::rgba_scramble< double, 1, 2, 3, 0 > category_name; };

    template<> struct rgb<21> { typedef ::color::category::rgb_scramble<  long double, 0, 1, 2 >    category_name; };
    template<> struct rgb<22> { typedef ::color::category::rgb_scramble<  long double, 2, 1, 0 >    category_name; };
    template<> struct rgb<23> { typedef ::color::category::rgba_scramble< long double, 2, 1, 0, 3 > category_name; };
    template<> struct rgb<24> { typedef ::color::category::rgba_scramble< long double, 3, 2, 1, 0 > category_name; };
    template<> struct rgb<25> { typedef ::color::category::rgba_scramble< long double, 0, 1, 2, 3 > category_name; };
    template<> struct rgb<26> { typedef ::color::category::rgba_scramble< long double, 1, 2, 3, 0 > category_name; };
    */
   }
 }

#endif

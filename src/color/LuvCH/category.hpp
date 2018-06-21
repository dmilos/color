#ifndef color_LuvCH_category
#define color_LuvCH_category
// ::color::category::LuvCH<tag>




namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct LuvCH
      {
       typedef void tag_type;
      };

  //using LuvCH_bool    = ::color::category::LuvCH< bool    >;
    using LuvCH_uint8   = ::color::category::LuvCH< std::uint8_t   >;
    using LuvCH_uint16  = ::color::category::LuvCH< std::uint16_t  >;
  //using LuvCH_uint24  = ::color::category::LuvCH< uint24  >;
    using LuvCH_uint32  = ::color::category::LuvCH< std::uint32_t  >;
  //using LuvCH_uint48  = ::color::category::LuvCH< LuvCH_uint48  >;
    using LuvCH_uint64  = ::color::category::LuvCH< std::uint64_t  >;
    using LuvCH_float   = ::color::category::LuvCH< float   >;
    using LuvCH_double  = ::color::category::LuvCH< double  >;
    using LuvCH_ldouble = ::color::category::LuvCH< long double >;

   }
 }

#endif

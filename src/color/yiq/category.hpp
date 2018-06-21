#ifndef color_yiq_category
#define color_yiq_category
// ::color::category::yiq<tag>




namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct yiq
      {
       typedef void tag_type;
      };

    using yiq_bool    = ::color::category::yiq< bool    >;
    using yiq_uint8   = ::color::category::yiq< std::uint8_t   >;
    using yiq_uint16  = ::color::category::yiq< std::uint16_t  >;
  //using yiq_uint24  = ::color::category::yiq< uint24  >;
    using yiq_uint32  = ::color::category::yiq< std::uint32_t  >;
  //using yiq_uint48  = ::color::category::yiq< yiq_uint48  >;
    using yiq_uint64  = ::color::category::yiq< std::uint64_t  >;
    using yiq_float   = ::color::category::yiq< float   >;
    using yiq_double  = ::color::category::yiq< double  >;
    using yiq_ldouble = ::color::category::yiq< long double >;

   }
 }

#endif

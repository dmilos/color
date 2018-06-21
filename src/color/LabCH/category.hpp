#ifndef color_LabCH_category
#define color_LabCH_category
// ::color::category::LabCH<tag>




namespace color
 {
  namespace category
   {

    template< typename tag_name >
     struct LabCH
      {
       typedef void tag_type;
      };

  //using LabCH_bool    = ::color::category::LabCH< bool    >;
    using LabCH_uint8   = ::color::category::LabCH< std::uint8_t   >;
    using LabCH_uint16  = ::color::category::LabCH< std::uint16_t  >;
  //using LabCH_uint24  = ::color::category::LabCH< uint24  >;
    using LabCH_uint32  = ::color::category::LabCH< std::uint32_t  >;
  //using LabCH_uint48  = ::color::category::LabCH< LabCH_uint48  >;
    using LabCH_uint64  = ::color::category::LabCH< std::uint64_t  >;
    using LabCH_float   = ::color::category::LabCH< float   >;
    using LabCH_double  = ::color::category::LabCH< double  >;
    using LabCH_ldouble = ::color::category::LabCH< long double >;

   }
 }

#endif

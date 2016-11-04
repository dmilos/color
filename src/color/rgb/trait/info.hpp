#ifndef color_rgb_trait_info
#define color_rgb_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

    template <> struct info< ::color::category::rgb_error   >  {  public: enum { implemented_enum = false }; enum {  meaningful_enum = false }; };
    template <> struct info< ::color::category::rgb_uint8   >  {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgb_uint16  >  {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgb_uint32  >  {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgb_uint64  >  {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgb_float   >  {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgb_double  >  {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgb_ldouble >  {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgb_split233 > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgb_split323 > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgb_split332 > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgb_split422 > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgb_split556 > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgb_split565 > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgb_split655 > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };

    template <> struct info< ::color::category::rgba_error      > {  public: enum { implemented_enum = false }; enum {  meaningful_enum = false }; };
    template <> struct info< ::color::category::rgba_uint8      > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgba_uint16     > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgba_uint32     > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgba_uint64     > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgba_float      > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgba_double     > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgba_ldouble    > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgba_split2222  > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgba_split4444  > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgba_split8888  > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgba_split5551  > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgba_splitAAA2  > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::rgba_splitGGGG  > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };

    template <> struct info< ::color::category::argb_error      > {  public: enum { implemented_enum = false }; enum {  meaningful_enum = false }; };
    template <> struct info< ::color::category::argb_uint8      > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::argb_uint16     > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::argb_uint32     > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::argb_uint64     > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::argb_float      > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::argb_double     > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::argb_ldouble    > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::argb_split2222  > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::argb_split4444  > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::argb_split8888  > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::argb_split1555  > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::argb_split2AAA  > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::argb_splitGGGG  > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };

    template <> struct info< ::color::category::bgr_error      > {  public: enum { implemented_enum = false }; enum {  meaningful_enum = false }; };
    template <> struct info< ::color::category::bgr_uint8      > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::bgr_uint16     > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::bgr_uint32     > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::bgr_uint64     > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::bgr_float      > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::bgr_double     > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::bgr_ldouble    > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::bgr_split233   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::bgr_split323   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::bgr_split332   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::bgr_split422   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::bgr_split556   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::bgr_split565   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::bgr_split655   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum = true }; };

    template <> struct info< ::color::category::bgra_error       > {  public: enum { implemented_enum = false }; enum {  meaningful_enum = false }; };
    template <> struct info< ::color::category::bgra_uint8       > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::bgra_uint16      > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::bgra_uint32      > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::bgra_uint64      > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::bgra_float       > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::bgra_double      > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::bgra_ldouble     > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::bgra_split2222   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::bgra_split4444   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::bgra_split5551   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::bgra_split8888   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::bgra_splitAAA2   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::bgra_splitGGGG   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };

    template <> struct info< ::color::category::abgr_error       > {  public: enum { implemented_enum = false }; enum {  meaningful_enum = false }; };
    template <> struct info< ::color::category::abgr_uint8       > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::abgr_uint16      > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::abgr_uint32      > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::abgr_uint64      > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::abgr_float       > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::abgr_double      > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::abgr_ldouble     > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::abgr_split2222   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::abgr_split4444   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::abgr_split1555   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::abgr_split8888   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::abgr_split2AAA   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };
    template <> struct info< ::color::category::abgr_splitGGGG   > {  public: enum { implemented_enum =  true }; enum {  meaningful_enum =  true }; };

   }
 }

#endif

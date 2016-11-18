#ifndef color_rgb_trait_info
#define color_rgb_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

    // RGB
    template <> struct info< ::color::category::rgb_error   >  {  public: enum { implemented_entity = false }; enum {  meaningful_entity = false }; };
    template <> struct info< ::color::category::rgb_uint8   >  {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::rgb_uint16  >  {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::rgb_uint32  >  {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::rgb_uint64  >  {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::rgb_float   >  {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::rgb_double  >  {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::rgb_ldouble >  {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };

    template< unsigned first_size, unsigned second_size, unsigned third_size >
     struct info< ::color::category::rgb_pack< first_size, second_size, third_size > >
      {
       public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; 
      };

    // RGBA
    template <> struct info< ::color::category::rgba_error      > {  public: enum { implemented_entity = false }; enum {  meaningful_entity = false }; };
    template <> struct info< ::color::category::rgba_uint8      > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::rgba_uint16     > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::rgba_uint32     > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::rgba_uint64     > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::rgba_float      > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::rgba_double     > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::rgba_ldouble    > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };

    template< unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size >
     struct info< ::color::category::rgba_pack< first_size, second_size, third_size, fourth_size > >
      {
       public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; 
      };

    // ARGB
    template <> struct info< ::color::category::argb_error      > {  public: enum { implemented_entity = false }; enum {  meaningful_entity = false }; };
    template <> struct info< ::color::category::argb_uint8      > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::argb_uint16     > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::argb_uint32     > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::argb_uint64     > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::argb_float      > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::argb_double     > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::argb_ldouble    > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };

    template< unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size >
     struct info< ::color::category::argb_pack< first_size, second_size, third_size, fourth_size > >
      {
       public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; 
      };

    // BGR
    template <> struct info< ::color::category::bgr_error      > {  public: enum { implemented_entity = false }; enum {  meaningful_entity = false }; };
    template <> struct info< ::color::category::bgr_uint8      > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::bgr_uint16     > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::bgr_uint32     > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::bgr_uint64     > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::bgr_float      > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::bgr_double     > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity = true }; };
    template <> struct info< ::color::category::bgr_ldouble    > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity = true }; };

    template< unsigned first_size, unsigned second_size, unsigned third_size >
     struct info< ::color::category::bgr_pack< first_size, second_size, third_size > >
      {
       public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; 
      };

    // BGRA
    template <> struct info< ::color::category::bgra_error       > {  public: enum { implemented_entity = false }; enum {  meaningful_entity = false }; };
    template <> struct info< ::color::category::bgra_uint8       > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::bgra_uint16      > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::bgra_uint32      > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::bgra_uint64      > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::bgra_float       > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::bgra_double      > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::bgra_ldouble     > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };

    template< unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size >
     struct info< ::color::category::bgra_pack< first_size, second_size, third_size, fourth_size > >
      {
       public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; 
      };

    // ABGR
    template <> struct info< ::color::category::abgr_error       > {  public: enum { implemented_entity = false }; enum {  meaningful_entity = false }; };
    template <> struct info< ::color::category::abgr_uint8       > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::abgr_uint16      > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::abgr_uint32      > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::abgr_uint64      > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::abgr_float       > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::abgr_double      > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };
    template <> struct info< ::color::category::abgr_ldouble     > {  public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; };

    template< unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size >
     struct info< ::color::category::abgr_pack< first_size, second_size, third_size, fourth_size > >
      {
       public: enum { implemented_entity =  true }; enum {  meaningful_entity =  true }; 
      };

   }
 }

#endif

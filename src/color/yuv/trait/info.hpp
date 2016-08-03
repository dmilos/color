#ifndef color_yuv_trait_info
#define color_yuv_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

    template <> struct info< ::color::category::yuv_uint8 >    {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::yuv_uint16 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::yuv_uint32 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::yuv_uint64 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::yuv_float >    {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::yuv_double >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::yuv_ldouble >  {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };

   }
 }

#endif

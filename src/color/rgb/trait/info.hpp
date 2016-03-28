#ifndef color_rgb_trait_info
#define color_rgb_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

    template <>  struct info< ::color::category::rgb_uint8 >    {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::rgb_uint16 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::rgb_uint32 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::rgb_uint64 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::rgb_float >    {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::rgb_double >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::rgb_ldouble >  {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };

    template <>  struct info< ::color::category::rgb_split233 > {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::rgb_split323 > {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::rgb_split332 > {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::rgb_split422 > {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::rgb_split556 > {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::rgb_split565 > {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::rgb_split655 > {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };

   }
 }

#endif

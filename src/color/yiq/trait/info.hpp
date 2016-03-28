#ifndef color_yiq_trait_info
#define color_yiq_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

    template <>  struct info< ::color::category::yiq_uint8 >    {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::yiq_uint16 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::yiq_uint32 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::yiq_uint64 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::yiq_float >    {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::yiq_double >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <>  struct info< ::color::category::yiq_ldouble >  {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };

   }
 }

#endif

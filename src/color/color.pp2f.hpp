/*
   Copyright 2016 Dejan D. M. Milosavljevic

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
namespace color {
namespace akin {

template< typename category_name >
struct cmy {
	typedef category_name category_type;
	typedef void akin_type;
};

}
}

namespace color {
namespace akin {

template< typename category_name >
struct cmyk {
	typedef category_name category_type;
	typedef void akin_type;
};

}
}

namespace color {
namespace akin {

template< typename category_name >
struct gray {
	typedef category_name category_type;
	typedef void akin_type;
};

}
}

namespace color {
namespace akin {

template< typename category_name >
struct hsl {
	typedef category_name category_type;
	typedef void akin_type;
};

}
}

namespace color {
namespace akin {

template< typename category_name >
struct hsv {
	typedef category_name category_type;
	typedef void akin_type;
};

}
}

namespace color {
namespace akin {

template< typename category_name >
struct rgb {
	typedef void akin_type;

};

}
}

namespace color {
namespace akin {

template< typename category_name >
struct yiq {
	typedef category_name category_type;
	typedef void akin_type;
};

}
}

namespace color {
namespace akin {

template< typename category_name >
struct yuv {
	typedef category_name category_type;
	typedef void akin_type;
};

}
}

namespace color {
namespace _internal {
namespace utility {
namespace type {

template< typename index_name >
struct index {
public:
	typedef index_name instance_type;

	typedef instance_type const const_type;

	typedef instance_type const& return_image_type;
	typedef instance_type return_type;
	typedef instance_type & return_original_type;

	typedef instance_type const& input_const_type, param_const_input_type;
	typedef instance_type input_type, param_input_type;
	typedef instance_type & output_type, param_output_type;
	typedef instance_type & transmit_type, param_transmit_type;
};

}
}
}
}

namespace color {
namespace trait {

template< typename category_name >
struct index
	: public ::color::_internal::utility::type::index< unsigned > {
public:

	typedef ::color::_internal::utility::type::index< unsigned > utility_type;

	typedef typename utility_type::instance_type instance_type;

	typedef typename utility_type::const_type const_type;

	typedef typename utility_type::return_image_type return_image_type;
	typedef typename utility_type::return_original_type return_original_type;

	typedef typename utility_type::input_const_type input_const_type;
	typedef typename utility_type::input_type input_type;
	typedef typename utility_type::output_type output_type;
};

}
}

namespace color {
namespace trait {

template< typename category_name , unsigned index_size = 0 >
struct component {
public:
	typedef unsigned char instance_type;
	typedef instance_type const const_type;

	typedef instance_type const return_image_type;
	typedef instance_type return_type;
	typedef instance_type return_original_type;

	typedef instance_type const& input_const_type;
	typedef instance_type & input_type;

};

}
}

namespace color {
namespace _internal {
namespace utility {
namespace type {

template < typename number_name, typename image_name = number_name const& >
struct bound {
public:
	typedef number_name number_type;
	typedef image_name image_type;

	typedef bound<number_type,image_type> this_type;

	static image_type maximum() {
		static number_type value=0;
		return value;
	}

	static image_type minimum() {
		static number_type value=0;
		return value;
	}

	static image_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}
};

template <>
struct bound<bool, bool const& > {
	typedef bool number_type;
	typedef bool const& image_type;

	typedef bound<number_type,image_type> this_type;

	static image_type maximum() {
		static number_type value = true;
		return value;
	}

	static image_type minimum() {
		static number_type value = false;
		return value;
	}

	static image_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}
};

template <>
struct bound<std::uint8_t, std::uint8_t const& > {
	typedef std::uint8_t number_type;
	typedef std::uint8_t const& image_type;

	typedef bound<number_type,image_type> this_type;

	static image_type maximum() {
		static number_type value = 255;
		return value;
	}

	static image_type minimum() {
		static number_type value = 0;
		return value;
	}

	static image_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}
};

template <>
struct bound<std::uint16_t, std::uint16_t const& > {
	typedef std::uint16_t number_type;
	typedef std::uint16_t const& image_type;

	typedef bound<number_type,image_type> this_type;

	static image_type maximum() {
		static number_type value = 0xFFFF;
		return value;
	}

	static image_type minimum() {
		static number_type value = 0;
		return value;
	}

	static image_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}
};

template <>
struct bound<std::uint32_t, std::uint32_t const& > {
	typedef std::uint32_t number_type;
	typedef std::uint32_t const& image_type;

	typedef bound<number_type,image_type> this_type;

	static image_type maximum() {
		static number_type value = 0xFFFFFFFF;
		return value;
	}

	static image_type minimum() {
		static number_type value = 0;
		return value;
	}

	static image_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}
};

template <>
struct bound<std::uint64_t, std::uint64_t const& > {
	typedef std::uint64_t number_type;
	typedef std::uint64_t const& image_type;

	typedef bound<number_type,image_type> this_type;

	static image_type maximum() {
		static number_type value = 0xFFFFFFFFFFFFFFFFu;
		return value;
	}

	static image_type minimum() {
		static number_type value = 0;
		return value;
	}

	static image_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}
};

template <>
struct bound<float, float const& > {
	typedef float number_type;
	typedef float const& image_type;

	typedef bound<number_type,image_type> this_type;

	static image_type maximum() {
		static number_type value=1;
		return value;
	}

	static image_type minimum() {
		static number_type value=0;
		return value;
	}

	static image_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}
};

template <>
struct bound<double, double const& > {
	typedef double number_type;
	typedef double const& image_type;

	typedef bound<number_type,image_type> this_type;

	static image_type maximum() {
		static number_type value=1;
		return value;
	}

	static image_type minimum() {
		static number_type value=0;
		return value;
	}

	static image_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}
};

template <>
struct bound<long double, long double const& > {
	typedef long double number_type;
	typedef long double const& image_type;

	typedef bound<number_type,image_type> this_type;

	static image_type maximum() {
		static number_type value = 1;
		return value;
	}

	static image_type minimum() {
		static number_type value = 0;
		return value;
	}

	static image_type range() {
		static number_type value = this_type::maximum() - this_type::minimum();
		return value;
	}

};

}
}
}
}

namespace color {
namespace _internal {
namespace utility {
namespace type {

template < typename type_name >
struct traitC {
public:
	typedef type_name instance_type;

	typedef instance_type const const_type;

	typedef instance_type const& return_image_type;
	typedef instance_type return_type;

	typedef instance_type const& input_const_type;
	typedef instance_type & input_type;

};

}
}
}
}

namespace color {
namespace _internal {
namespace utility {
namespace bound {

template< typename value_name, typename index_name >
struct general {
public:
	typedef value_name value_type;
	typedef index_name index_type;

	typedef ::color::_internal::utility::type::traitC< value_name > component_trait_type;
	typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

	typedef typename component_trait_type::instance_type component_instance_type;
	typedef typename component_trait_type::return_image_type component_return_const_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;

	typedef ::color::_internal::utility::type::bound< component_instance_type, component_return_const_type > bound_type;

	template< index_instance_type index >
	static component_return_const_type maximum() {
		static const component_instance_type component = bound_type::maximum();
		return component;
	}

	static component_return_const_type maximum(index_input_const_type index) {
		static const component_instance_type component = bound_type::maximum();
		return component;
	}

	template< index_instance_type index >
	static component_return_const_type minimum() {
		static const component_instance_type component = bound_type::minimum();
		return component;
	}

	static component_return_const_type minimum(index_input_const_type index) {
		static const component_instance_type component = bound_type::minimum();
		return component;
	}

	template< index_instance_type index >
	static component_return_const_type range() {
		static const component_instance_type component = bound_type::range();
		return component;
	}

	static component_return_const_type range(index_input_const_type index) {
		static const component_instance_type component = bound_type::range();
		return component;
	}
};

}
}
}
}

namespace color {

namespace trait {
template< typename category_name >
struct bound
	: public ::color::_internal::utility::bound::general
	  <
	  typename ::color::trait::component< category_name >::instance_type
	,typename ::color::trait::index< category_name >::instance_type
	  > {
public:
	typedef category_name category_type;

	typedef ::color::trait::component< category_name > component_trait_type;
	typedef ::color::trait::index< category_name > index_trait_type;

	typedef typename component_trait_type::instance_type component_instance_type;
	typedef typename index_trait_type::instance_type index_instance_type;

	typedef ::color::_internal::utility::bound::general<component_instance_type, index_instance_type > general_type;

	using general_type::minimum;
	using general_type::maximum;
	using general_type::range;
};

}
}

namespace color {
namespace trait {

template< typename category_name >
struct scalar
	: public ::color::_internal::utility::type::traitC< double > {
public:
	typedef double instance_type;

	static bool is_small(instance_type const& value) {
		return (-1e-6 < value) && (value < 1e-6);
	}
};

}
}

namespace color {
namespace _internal {

template< typename category_name >
struct diverse {
public:
	typedef typename ::color::trait::scalar<category_name>::instance_type scalar_type;
	typedef ::color::trait::bound< category_name > bound_trait_type;
	typedef ::color::trait::component< category_name > component_trait_type;
	typedef ::color::trait::index< category_name > index_trait_type;

	typedef typename component_trait_type::instance_type component_instance_type;
	typedef typename component_trait_type::return_type component_return_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;

	static
	component_return_type
	process(scalar_type const& normal, index_input_const_type index) {
		scalar_type divergent = normal;
		divergent *= bound_trait_type::range(index);
		divergent += bound_trait_type::minimum(index);
		return component_instance_type(divergent);
	}

	template< index_instance_type index_size >
	static
	component_return_type
	process(scalar_type const& normal) {
		scalar_type divergent = normal;
		divergent *= bound_trait_type::template range<index_size>();
		divergent += bound_trait_type::template minimum<index_size>();
		return component_instance_type(divergent);
	}
};

}
}
namespace color {
namespace _internal {

template< typename category_name >
struct normalize {
public:
	typedef typename ::color::trait::scalar<category_name>::instance_type scalar_type;
	typedef ::color::trait::bound< category_name > bound_trait_type;
	typedef ::color::trait::component< category_name > component_trait_type;
	typedef ::color::trait::index< category_name > index_trait_type;

	typedef typename component_trait_type::instance_type component_instance_type;
	typedef typename component_trait_type::input_const_type component_input_const_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;

	static
	scalar_type
	process(component_input_const_type divergent, index_input_const_type index) {
		scalar_type normal = static_cast<component_instance_type>(divergent);
		normal -= bound_trait_type::minimum(index);
		normal /= bound_trait_type::range(index);
		return normal;
	}

	template< index_instance_type index_size >
	static
	scalar_type
	process(component_input_const_type divergent) {
		scalar_type normal = static_cast<component_instance_type>(divergent);
		normal -= bound_trait_type::template minimum<index_size>();
		normal /= bound_trait_type::template range<index_size>();
		return normal;
	}

};

}
}

namespace color {
namespace _internal {

template
<
	typename category_left_name
	,typename category_right_name
	,typename scalar_name
	>
struct reformat {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef scalar_name scalar_type;

	typedef ::color::_internal::diverse< category_left_type > diverse_type;
	typedef ::color::_internal::normalize< category_right_type > normalize_type;

	typedef typename ::color::trait::component< category_left_name >::return_type left_component_return_type;
	typedef typename ::color::trait::index< category_left_name >::input_const_type left_index_const_input_type;
	typedef typename ::color::trait::index< category_left_name >::instance_type left_index_instance_type;

	typedef typename ::color::trait::component< category_right_name >::input_const_type right_component_const_input_type;
	typedef typename ::color::trait::index< category_right_name >::input_const_type right_index_const_input_type;
	typedef typename ::color::trait::index< category_right_name >::instance_type right_index_instance_type;

	static
	left_component_return_type
	process
	(
		left_index_const_input_type left_index
		,right_component_const_input_type right_component
		,right_index_const_input_type right_index
	) {
		return diverse_type::process
			   (
				   normalize_type::process
				   (
					   right_component
					   ,right_index
				   )
				   , left_index
			   );
	}

	template
	<
		left_index_instance_type left_index_size
		>
	static
	left_component_return_type
	process
	(
		right_component_const_input_type right_component
		,right_index_const_input_type right_index
	) {
		return diverse_type::template process< left_index_size >
		(
			normalize_type::process
			(
				right_component
				,right_index
			)
		);
	}

	template
	<
		left_index_instance_type left_index_size
		,right_index_instance_type right_index_size
		>
	static
	left_component_return_type
	process
	(
		right_component_const_input_type right_component
	) {
		return diverse_type::template process< left_index_size >
		(
			normalize_type::template process< right_index_size >
			(
				right_component
			)
											);
	}
};

template
<
	typename category_name
	>
struct reformat< category_name, category_name, typename ::color::trait::scalar<category_name>::instance_type > {
public:
	typedef category_name category_type;

	typedef typename ::color::trait::scalar<category_name>::instance_type scalar_type;

	typedef typename ::color::trait::component< category_type >::return_type component_return_type;
	typedef typename ::color::trait::index< category_type >::input_const_type index_const_input_type;
	typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

	typedef typename ::color::trait::component< category_type >::input_const_type component_const_input_type;

	static
	component_return_type
	process
	(
		index_const_input_type left_index
		,component_const_input_type right_component
		,index_const_input_type right_index
	) {
		return right_component;
	}

	template
	<
		index_instance_type left_index_size
		>
	static
	component_return_type
	process
	(
		component_const_input_type right_component
		,index_const_input_type right_index
	) {
		return right_component;
	}

	template
	<
		index_instance_type left_index_size
		,index_instance_type right_index_size
		>
	static
	component_return_type
	process
	(
		component_const_input_type right_component
	) {
		return right_component;
	}
};

}
}

namespace color {
namespace trait {

template< typename category_name >
struct container {
public:
	typedef unsigned int instance_type;

	typedef instance_type const const_type;

	typedef instance_type const return_image_type;
	typedef instance_type & return_type;
	typedef instance_type & return_original_type;

	typedef instance_type const& input_const_type;
	typedef instance_type & input_type;
	typedef instance_type & output_type, param_output_type;

	typedef ::color::trait::index< category_name > index_trait_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::const_type index_const_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;
	typedef typename index_trait_type::return_image_type index_return_image_type;

	typedef ::color::trait::component< category_name > component_trait_type;
	typedef typename component_trait_type::const_type component_const_type;
	typedef typename component_trait_type::return_image_type component_return_const_type;
	typedef typename component_trait_type::input_const_type component_input_const_type;
	typedef typename component_trait_type::instance_type component_type;

	typedef void set_return_type;

	enum { size_enum = 4 };

	static component_return_const_type get(input_const_type container, index_input_const_type index) {
		return (component_type)((container >> (index << 3)) & 0xFF);
	}

	template< index_instance_type index >
	static component_return_const_type get(input_const_type container) {
		return (component_type)((container >> (index << 3)) & 0xFF);
	}

	static set_return_type set(input_type container, index_input_const_type index, component_input_const_type value) {
		container = (container & ~(0xFF << (index << 3))) | (((instance_type)value) << (index << 3));
	}

	template< index_instance_type index >
	static set_return_type set(input_type container, component_input_const_type value) {
		container = (container & ~(0xFF << (index << 3))) | (((instance_type)value) << (index << 3));
	}

	static index_return_image_type size() {
		static index_instance_type length = 4;
		return length;
	}
};

}
}

namespace color {
namespace _internal {

template< typename category_left_name, typename category_right_name >
struct convert {
public:
	typedef category_left_name category_left_type;
	typedef category_right_name category_right_type;
	typedef double scalar_type;

	typedef ::color::trait::index<category_left_type> index_trait_type;
	typedef typename index_trait_type::instance_type index_type;

	typedef ::color::trait::container< category_left_type > container_left_trait_type;
	typedef ::color::trait::container< category_right_type > container_right_trait_type;

	typedef ::color::trait::component<category_left_type> component_trait_type;
	typedef typename component_trait_type::instance_type component_left_type;

	typedef typename container_left_trait_type::input_type container_left_input_type;
	typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

	static
	void
	process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		static const index_type min_common_size = std::min< index_type >(container_left_trait_type::size(), container_right_trait_type::size());
		component_left_type value;
		for(index_type index=0; index < min_common_size; ++index) {
			value = reformat_type::process(index, container_right_trait_type::get(right, index), index);
			container_left_trait_type::set(left, index, value);
		}
	}
};

template< typename category_name >
struct convert< category_name,category_name > {
public:

	typedef ::color::trait::container< category_name > container_trait_type;

	typedef typename container_trait_type::input_type container_input_type;
	typedef typename container_trait_type::input_const_type container_const_input_type;

	static
	void
	process
	(
		container_input_type left
		,container_const_input_type right
	) {
		left = right;
	}

};

}
}
namespace color {
namespace _internal {

template< typename category_name >
void init
(
	typename ::color::trait::container< category_name >::output_type container
	, std::initializer_list< typename ::color::trait::component< category_name >::instance_type > const& ilist
) {
	typedef ::color::trait::container< category_name > container_trait_type;
	typedef typename ::color::trait::index< category_name >::instance_type index_type;
	auto ili = ilist.begin();
	index_type index=0;
	for(; index < std::min<index_type>(container_trait_type::size(), ilist.size()) ; ++index, ++ili) {
		container_trait_type::set(container, index, *ili);
	}
};

}
}

namespace color {
namespace constant {

template < typename tag_name >
struct base {
};

}
}

namespace color {
namespace constant {

template< typename color_name, typename category_name >
struct make {
	typedef category_name category_type;
	typedef color_name color_type;

	typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	static void process(container_output_type & m) {
	}
};

}
}

namespace color {

template< typename category_name >
class model {
public:
	typedef category_name category_type;

	typedef ::color::trait::index< category_name > index_trait_type;
	typedef ::color::trait::component< category_name > component_trait_type;
	typedef ::color::trait::container< category_name > container_trait_type;
	typedef ::color::trait::bound< category_name > bound_trait_type, bound_type;

	typedef ::color::model<category_type> this_type, model_type;

	typedef typename index_trait_type::instance_type index_type;
	typedef typename index_trait_type::const_type index_const_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;
	typedef typename index_trait_type::return_image_type index_return_image_type;

	typedef typename component_trait_type::instance_type component_type;
	typedef typename component_trait_type::const_type component_const_type;
	typedef typename component_trait_type::return_image_type component_return_const_type;
	typedef typename component_trait_type::return_type component_return_type;
	typedef typename component_trait_type::input_const_type component_input_const_type;
	typedef typename component_trait_type::input_type component_input_type;

	typedef typename container_trait_type::instance_type container_type;
	typedef typename container_trait_type::const_type container_const_type;
	typedef typename container_trait_type::return_image_type container_return_const_type;
	typedef typename container_trait_type::return_original_type container_return_original_type;
	typedef typename container_trait_type::input_const_type container_input_const_type;
	typedef typename container_trait_type::input_type container_input_type;

	typedef typename container_trait_type::set_return_type set_return_type;

	model() {
	}

	explicit model(container_input_const_type container)
		:m_container(container) {
	}

	template< typename tag_name >
	explicit model(::color::constant::base< tag_name > const& constant) {
		*this = constant;
	}

	explicit model(std::initializer_list<component_type> const& ilist) {
		::color::_internal::init<category_name>(this->m_container, ilist);
	}

	model(::color::model<category_type> const& that) {
		this->m_container = that.container();
	}

	template< typename other_category_name >
	explicit model(::color::model<other_category_name> const& that) {
		*this = that;
	}

	template< typename tag_name >
	model operator=(::color::constant::base< tag_name > const& constant) {
		::color::constant::make<::color::constant::base< tag_name >,category_name>::process(this->m_container);
		return *this;
	}

	template< typename other_category_name >
	model operator=(::color::model<other_category_name> const& that) {
		::color::_internal::convert< category_name, other_category_name>::process(this->m_container, that.container());
		return *this;
	}

	component_return_const_type
	get(index_input_const_type index)const {
		return container_trait_type::get(this->m_container, index);
	}

	template< index_type index >
	component_return_const_type
	get()const {
		return container_trait_type::template get<index>(this->m_container);
	}

	set_return_type
	set(index_input_const_type index, component_input_const_type component) {
		return container_trait_type::set(this->m_container, index, component);
	}

	template< index_type index >
	set_return_type
	set(component_input_const_type component) {
		container_trait_type::template set<index>(this->m_container, component);
	}

	component_return_const_type operator[](index_input_const_type index)const {
		return this->get(index);
	}

private:
	class proxy {
	public:
		proxy(model_type & model, index_type const& index)
			: m_model(model), m_index(index) {
		}
		proxy & operator=(component_type const& component) {
			m_model.set(m_index, component);
			return *this;
		}
		operator component_type()const {
			return m_model.get(m_index);
		}
	private:
		model_type & m_model;
		index_type const& m_index;
	};
	typedef typename ::color::model< category_name >::proxy proxy_type;
public:

	proxy_type operator[](index_input_const_type index) {
		return proxy{ *this, index };
	}

	container_return_const_type container()const {
		return this->m_container;
	}
	container_return_original_type container() {
		return this->m_container;
	}

	static unsigned size() {
		return container_trait_type::size();
	}

private:
	container_type m_container;
};

}

namespace color {
namespace check {
namespace _internal {

template< typename category_name >
struct integrity {
public:
	typedef category_name category_type;

	typedef ::color::model<category_type> model_type;

	static bool process(model_type const& m) {
		return true;
	}

};
}

template< typename category_name >
inline
bool integrity(::color::model<category_name> const& m) {
	return ::color::check::_internal::integrity<category_name>::process(m);
}

}
}

namespace color {
namespace check {
namespace _internal {

template< typename category_name >
struct overburn {
public:
	typedef category_name category_type;

	typedef ::color::model<category_type> model_type;
	typedef ::color::trait::bound<category_type> bound_type;
	typedef ::color::trait::container< category_name > container_trait_type;
	typedef ::color::trait::index<category_type> index_trait_type;

	typedef typename index_trait_type::instance_type index_type;

	static bool process(model_type const& m) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			if(m.get(index) < bound_type::minimum(index)) {
				return true;
				continue;
			}
			if(bound_type::maximum(index) < m.get(index)) {
				return true;
				continue;
			}
		}
		return container_trait_type::size();
	}

};
}

template< typename category_name >
inline
bool
overburn(::color::model<category_name> const& m) {
	return ::color::check::_internal::overburn<category_name>::process(m);
}

}
}

namespace color {
namespace compare {

template < typename category_name >
bool equal
(
	::color::model< category_name > const& left
	,::color::model< category_name > const& right
) {
	return left.container() == right.container();
}

namespace operators {

template< typename category_name >
inline
bool
operator ==(::color::model< category_name > const& left, ::color::model< category_name > const& right) {
	return ::color::compare::equal(left, right);
}

}
}
}
namespace color {
namespace compare {

template < typename category_name >
bool different
(
	::color::model< category_name > const& left
	,::color::model< category_name > const& right
) {
	return left.container() != right.container();
}

namespace operators {

template< typename category_name >
inline
bool
operator !=(::color::model< category_name > const& left, ::color::model< category_name > const& right) {
	return ::color::compare::different(left, right);
}

}
}
}

namespace color {
namespace compare {

template < typename category_name >
bool great_or_equal
(
	::color::model< category_name > const& left
	,::color::model< category_name > const& right
) {
	return left.container() >= right.container();
}

namespace operators {

template< typename category_name >
inline
bool
operator >=(::color::model< category_name > const& left, ::color::model< category_name > const& right) {
	return ::color::compare::great_or_equal(left, right);
}
}

}
}
namespace color {
namespace compare {

template < typename category_name >
bool great_strict
(
	::color::model< category_name > const& left
	,::color::model< category_name > const& right
) {
	return left.container() > right.container();
}

namespace operators {

template< typename category_name >
inline
bool
operator >(::color::model< category_name > const& left, ::color::model< category_name > const& right) {
	return ::color::compare::great_strict(left, right);
}

}
}
}
namespace color {
namespace compare {

template < typename category_name >
bool less_or_equal
(
	::color::model< category_name > const& left
	,::color::model< category_name > const& right
) {
	return left.container() <= right.container();
}

namespace operators {

template< typename category_name >
inline
bool
operator <=(::color::model< category_name > const& left, ::color::model< category_name > const& right) {
	return ::color::compare::less_or_equal(left, right);
}

}
}
}
namespace color {
namespace compare {

template < typename category_name >
bool less_strict
(
	::color::model< category_name > const& left
	,::color::model< category_name > const& right
) {
	return left.container() < right.container();
}

namespace operators {

template< typename category_name >
inline
bool
operator <(::color::model< category_name > const& left, ::color::model< category_name > const& right) {
	return ::color::compare::less_strict(left, right);
}

}
}
}

namespace color {
namespace type {

struct divert_t {};

}
}

namespace color {
namespace type {

struct normal_t {};

}
}

namespace color {
namespace type {

template< unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size, unsigned fifth_size >
struct split5_t {};

}
}

namespace color {
namespace type {

template< unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size >
struct split4_t {};

typedef ::color::type::split4_t< 2, 2, 2, 2 > split2222_t, split2222_type;

typedef ::color::type::split4_t< 4, 4, 4, 4 > split4444_t, split4444_type;

typedef ::color::type::split4_t< 5, 5, 5, 1 > split5551_t, split5551_type;
typedef ::color::type::split4_t< 1, 5, 5, 5 > split1555_t, split1555_type;

typedef ::color::type::split4_t< 6, 6, 6, 6 > split6666_t, split6666_type;

typedef ::color::type::split4_t< 8, 8, 8, 8 > split8888_t, split8888_type;

typedef ::color::type::split4_t< 2, 10, 10, 10 > split2AAA_t, split2AAA_type;
typedef ::color::type::split4_t< 10, 10, 10, 2 > splitAAA2_t, splitAAA2_type;

typedef ::color::type::split4_t< 16, 16, 16, 16 > splitGGGG_t, splitGGGG_type;

}
}

namespace color {
namespace type {

template< unsigned first_size, unsigned second_size, unsigned third_size >
struct split3_t {};

typedef ::color::type::split3_t< 2, 3, 3 > split233_t, split233_type;
typedef ::color::type::split3_t< 3, 2, 3 > split323_t, split323_type;
typedef ::color::type::split3_t< 3, 3, 2 > split332_t, split332_type;

typedef ::color::type::split3_t< 4, 2, 2 > split422_t, split422_type;
typedef ::color::type::split3_t< 2, 4, 2 > split242_t, split242_type;
typedef ::color::type::split3_t< 2, 2, 4 > split224_t, split224_type;

typedef ::color::type::split3_t< 5, 5, 5 > split555_t, split555_type;

typedef ::color::type::split3_t< 6, 5, 5 > split655_t, split655_type;
typedef ::color::type::split3_t< 5, 6, 5 > split565_t, split565_type;
typedef ::color::type::split3_t< 5, 5, 6 > split556_t, split556_type;

typedef ::color::type::split3_t< 8, 8, 8 > split888_t, split888_type;

typedef ::color::type::split3_t< 12, 10, 10 > splitCAA_t, splitCAA_type;
typedef ::color::type::split3_t< 10, 12, 10 > splitACA_t, splitACA_type;
typedef ::color::type::split3_t< 10, 10, 12 > splitAAC_t, splitAAC_type;

}
}

namespace color {
namespace type {

template< unsigned first_size, unsigned second_size >
struct split2_t {};

}
}

namespace color {
namespace type {

typedef std::array< std::uint8_t, 3 > uint24_t, uint24_type;

}
}

namespace color {
namespace type {

typedef std::array< std::uint8_t, 6 > uint48_t, uint48c_t;

typedef std::array< std::uint16_t, 3 > uint48s_t, uint48s_type;

}
}

namespace color {
namespace category {

namespace _internal {
struct gray_bool {};
struct gray_uint8 {};
struct gray_uint16 {};
struct gray_uint24 {};
struct gray_uint32 {};
struct gray_uint48 {};
struct gray_uint64 {};
struct gray_float {};
struct gray_double {};
struct gray_ldouble {};
}

template< typename tag_name >
struct gray {
	typedef void category_name;
};

using gray_bool = ::color::category::gray< ::color::category::_internal::gray_bool >;
using gray_uint8 = ::color::category::gray< ::color::category::_internal::gray_uint8 >;
using gray_uint16 = ::color::category::gray< ::color::category::_internal::gray_uint16 >;
using gray_uint24 = ::color::category::gray< ::color::category::_internal::gray_uint24 >;
using gray_uint32 = ::color::category::gray< ::color::category::_internal::gray_uint32 >;
using gray_uint48 = ::color::category::gray< ::color::category::_internal::gray_uint48 >;
using gray_uint64 = ::color::category::gray< ::color::category::_internal::gray_uint64 >;
using gray_float = ::color::category::gray< ::color::category::_internal::gray_float >;
using gray_double = ::color::category::gray< ::color::category::_internal::gray_double >;
using gray_ldouble = ::color::category::gray< ::color::category::_internal::gray_ldouble >;

}
}

namespace color {
namespace category {

namespace _internal {
struct cmy_bool {};
struct cmy_uint8 {};
struct cmy_uint16 {};
struct cmy_uint24 {};
struct cmy_uint32 {};
struct cmy_uint48 {};
struct cmy_uint64 {};
struct cmy_float {};
struct cmy_double {};
struct cmy_ldouble {};
}

template< typename tag_name >
struct cmy {
	typedef void category_name;
};

using cmy_bool = ::color::category::cmy< ::color::category::_internal::cmy_bool >;
using cmy_uint8 = ::color::category::cmy< ::color::category::_internal::cmy_uint8 >;
using cmy_uint16 = ::color::category::cmy< ::color::category::_internal::cmy_uint16 >;
using cmy_uint24 = ::color::category::cmy< ::color::category::_internal::cmy_uint24 >;
using cmy_uint32 = ::color::category::cmy< ::color::category::_internal::cmy_uint32 >;
using cmy_uint48 = ::color::category::cmy< ::color::category::_internal::cmy_uint48 >;
using cmy_uint64 = ::color::category::cmy< ::color::category::_internal::cmy_uint64 >;
using cmy_float = ::color::category::cmy< ::color::category::_internal::cmy_float >;
using cmy_double = ::color::category::cmy< ::color::category::_internal::cmy_double >;
using cmy_ldouble = ::color::category::cmy< ::color::category::_internal::cmy_ldouble >;

}
}

namespace color {
namespace akin {

template< >struct gray< ::color::category::cmy_uint8 > {
	typedef ::color::category::gray_uint8 akin_type;
};
template< >struct gray< ::color::category::cmy_uint16 > {
	typedef ::color::category::gray_uint16 akin_type;
};
template< >struct gray< ::color::category::cmy_uint32 > {
	typedef ::color::category::gray_uint32 akin_type;
};
template< >struct gray< ::color::category::cmy_uint64 > {
	typedef ::color::category::gray_uint64 akin_type;
};
template< >struct gray< ::color::category::cmy_float > {
	typedef ::color::category::gray_float akin_type;
};
template< >struct gray< ::color::category::cmy_double > {
	typedef ::color::category::gray_double akin_type;
};
template< >struct gray< ::color::category::cmy_ldouble > {
	typedef ::color::category::gray_ldouble akin_type;
};

}
}

namespace color {
namespace category {

namespace _internal {

struct cmyk_uint8 {};
struct cmyk_uint16 {};
struct cmyk_uint24 {};
struct cmyk_uint32 {};
struct cmyk_uint48 {};
struct cmyk_uint64 {};
struct cmyk_float {};
struct cmyk_double {};
struct cmyk_ldouble {};
}

template< typename tag_name >
struct cmyk {
	typedef void category_name;
};

using cmyk_uint8 = ::color::category::cmyk< ::color::category::_internal::cmyk_uint8 >;
using cmyk_uint16 = ::color::category::cmyk< ::color::category::_internal::cmyk_uint16 >;
using cmyk_uint24 = ::color::category::cmyk< ::color::category::_internal::cmyk_uint24 >;
using cmyk_uint32 = ::color::category::cmyk< ::color::category::_internal::cmyk_uint32 >;
using cmyk_uint48 = ::color::category::cmyk< ::color::category::_internal::cmyk_uint48 >;
using cmyk_uint64 = ::color::category::cmyk< ::color::category::_internal::cmyk_uint64 >;
using cmyk_float = ::color::category::cmyk< ::color::category::_internal::cmyk_float >;
using cmyk_double = ::color::category::cmyk< ::color::category::_internal::cmyk_double >;
using cmyk_ldouble = ::color::category::cmyk< ::color::category::_internal::cmyk_ldouble >;

}
}

namespace color {
namespace akin {

template< >struct gray< ::color::category::cmyk_uint8 > {
	typedef ::color::category::gray_uint8 akin_type;
};
template< >struct gray< ::color::category::cmyk_uint16 > {
	typedef ::color::category::gray_uint16 akin_type;
};
template< >struct gray< ::color::category::cmyk_uint32 > {
	typedef ::color::category::gray_uint32 akin_type;
};
template< >struct gray< ::color::category::cmyk_uint64 > {
	typedef ::color::category::gray_uint64 akin_type;
};
template< >struct gray< ::color::category::cmyk_float > {
	typedef ::color::category::gray_float akin_type;
};
template< >struct gray< ::color::category::cmyk_double > {
	typedef ::color::category::gray_double akin_type;
};
template< >struct gray< ::color::category::cmyk_ldouble > {
	typedef ::color::category::gray_ldouble akin_type;
};

}
}

namespace color {
namespace akin {

template< typename tag_name >
struct gray< ::color::category::gray< tag_name > > {
public:
	typedef ::color::category::gray< tag_name > akin_type;
};

}
}

namespace color {
namespace category {

namespace _internal {
struct hsl_bool {};
struct hsl_uint8 {};
struct hsl_uint16 {};
struct hsl_uint24 {};
struct hsl_uint32 {};
struct hsl_uint48 {};
struct hsl_uint64 {};
struct hsl_float {};
struct hsl_double {};
struct hsl_ldouble {};
}

template< typename tag_name >
struct hsl {
	typedef void category_name;
};

using hsl_bool = ::color::category::hsl< ::color::category::_internal::hsl_bool >;
using hsl_uint8 = ::color::category::hsl< ::color::category::_internal::hsl_uint8 >;
using hsl_uint16 = ::color::category::hsl< ::color::category::_internal::hsl_uint16 >;
using hsl_uint24 = ::color::category::hsl< ::color::category::_internal::hsl_uint24 >;
using hsl_uint32 = ::color::category::hsl< ::color::category::_internal::hsl_uint32 >;
using hsl_uint48 = ::color::category::hsl< ::color::category::_internal::hsl_uint48 >;
using hsl_uint64 = ::color::category::hsl< ::color::category::_internal::hsl_uint64 >;
using hsl_float = ::color::category::hsl< ::color::category::_internal::hsl_float >;
using hsl_double = ::color::category::hsl< ::color::category::_internal::hsl_double >;
using hsl_ldouble = ::color::category::hsl< ::color::category::_internal::hsl_ldouble >;

}
}

namespace color {
namespace akin {

template< >struct gray< ::color::category::hsl_uint8 > {
	typedef ::color::category::gray_uint8 akin_type;
};
template< >struct gray< ::color::category::hsl_uint16 > {
	typedef ::color::category::gray_uint16 akin_type;
};
template< >struct gray< ::color::category::hsl_uint32 > {
	typedef ::color::category::gray_uint32 akin_type;
};
template< >struct gray< ::color::category::hsl_uint64 > {
	typedef ::color::category::gray_uint64 akin_type;
};
template< >struct gray< ::color::category::hsl_float > {
	typedef ::color::category::gray_float akin_type;
};
template< >struct gray< ::color::category::hsl_double > {
	typedef ::color::category::gray_double akin_type;
};
template< >struct gray< ::color::category::hsl_ldouble > {
	typedef ::color::category::gray_ldouble akin_type;
};

}
}

namespace color {
namespace category {

namespace _internal {

struct hsv_uint8 {};
struct hsv_uint16 {};
struct hsv_uint24 {};
struct hsv_uint32 {};
struct hsv_uint48 {};
struct hsv_uint64 {};
struct hsv_float {};
struct hsv_double {};
struct hsv_ldouble {};
}

template< typename tag_name >
struct hsv {
	typedef void category_name;
};

using hsv_uint8 = ::color::category::hsv< ::color::category::_internal::hsv_uint8 >;
using hsv_uint16 = ::color::category::hsv< ::color::category::_internal::hsv_uint16 >;
using hsv_uint24 = ::color::category::hsv< ::color::category::_internal::hsv_uint24 >;
using hsv_uint32 = ::color::category::hsv< ::color::category::_internal::hsv_uint32 >;
using hsv_uint48 = ::color::category::hsv< ::color::category::_internal::hsv_uint48 >;
using hsv_uint64 = ::color::category::hsv< ::color::category::_internal::hsv_uint64 >;
using hsv_float = ::color::category::hsv< ::color::category::_internal::hsv_float >;
using hsv_double = ::color::category::hsv< ::color::category::_internal::hsv_double >;
using hsv_ldouble = ::color::category::hsv< ::color::category::_internal::hsv_ldouble >;

}
}

namespace color {
namespace akin {

template< >struct gray< ::color::category::hsv_uint8 > {
	typedef ::color::category::gray_uint8 akin_type;
};
template< >struct gray< ::color::category::hsv_uint16 > {
	typedef ::color::category::gray_uint16 akin_type;
};
template< >struct gray< ::color::category::hsv_uint32 > {
	typedef ::color::category::gray_uint32 akin_type;
};
template< >struct gray< ::color::category::hsv_uint64 > {
	typedef ::color::category::gray_uint64 akin_type;
};
template< >struct gray< ::color::category::hsv_float > {
	typedef ::color::category::gray_float akin_type;
};
template< >struct gray< ::color::category::hsv_double > {
	typedef ::color::category::gray_double akin_type;
};
template< >struct gray< ::color::category::hsv_ldouble > {
	typedef ::color::category::gray_ldouble akin_type;
};

}
}

namespace color {

namespace category {

}
}

namespace color {

namespace category {
namespace _internal {

template< unsigned first_position, unsigned second_position>
struct scramble2 {

};

template< unsigned first_position, unsigned second_position, unsigned third_position >
struct scramble3 {

};

template< unsigned first_position, unsigned second_position, unsigned third_position , unsigned fourth_position >
struct scramble4 {
};

}
}
}

namespace color {
namespace category {

template< typename tag_name >
struct rgb {
	typedef tag_name tag_type;
};

template< typename tag_name >
struct rgba
	: public ::color::category::rgb< tag_name > {
	typedef tag_name tag_type;
};

namespace _internal {
template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position >
struct rgb_scramble : public ::color::category::_internal::scramble3< red_position, green_position, blue_position > {};

template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position, unsigned alpha_position >
struct rgba_scramble : public ::color::category::_internal::scramble4< red_position, green_position, blue_position, alpha_position > {};
}

namespace _internal {
using rgb_uint8 = ::color::category::_internal::rgb_scramble< std::uint8_t , 0, 1, 2 >;
using rgb_uint16 = ::color::category::_internal::rgb_scramble< std::uint16_t , 0, 1, 2 >;
using rgb_uint32 = ::color::category::_internal::rgb_scramble< std::uint32_t , 0, 1, 2 >;
using rgb_uint64 = ::color::category::_internal::rgb_scramble< std::uint64_t , 0, 1, 2 >;
using rgb_float = ::color::category::_internal::rgb_scramble< float , 0, 1, 2 >;
using rgb_double = ::color::category::_internal::rgb_scramble< double , 0, 1, 2 >;
using rgb_ldouble = ::color::category::_internal::rgb_scramble< long double, 0, 1, 2 >;

using rgb_split233 = ::color::category::_internal::rgb_scramble< ::color::type::split233_t , 0, 1, 2 >;
using rgb_split323 = ::color::category::_internal::rgb_scramble< ::color::type::split323_t , 0, 1, 2 >;
using rgb_split332 = ::color::category::_internal::rgb_scramble< ::color::type::split332_t , 0, 1, 2 >;
using rgb_split422 = ::color::category::_internal::rgb_scramble< ::color::type::split422_t , 0, 1, 2 >;
using rgb_split556 = ::color::category::_internal::rgb_scramble< ::color::type::split556_t , 0, 1, 2 >;
using rgb_split565 = ::color::category::_internal::rgb_scramble< ::color::type::split565_t , 0, 1, 2 >;
using rgb_split655 = ::color::category::_internal::rgb_scramble< ::color::type::split655_t , 0, 1, 2 >;
}

using rgb_uint8 = ::color::category::rgb< ::color::category::_internal::rgb_uint8 >;
using rgb_uint16 = ::color::category::rgb< ::color::category::_internal::rgb_uint16 >;
using rgb_uint32 = ::color::category::rgb< ::color::category::_internal::rgb_uint32 >;
using rgb_uint64 = ::color::category::rgb< ::color::category::_internal::rgb_uint64 >;
using rgb_float = ::color::category::rgb< ::color::category::_internal::rgb_float >;
using rgb_double = ::color::category::rgb< ::color::category::_internal::rgb_double >;
using rgb_ldouble = ::color::category::rgb< ::color::category::_internal::rgb_ldouble >;
using rgb_split233 = ::color::category::rgb< ::color::category::_internal::rgb_split233 >;
using rgb_split323 = ::color::category::rgb< ::color::category::_internal::rgb_split323 >;
using rgb_split332 = ::color::category::rgb< ::color::category::_internal::rgb_split332 >;
using rgb_split422 = ::color::category::rgb< ::color::category::_internal::rgb_split422 >;
using rgb_split556 = ::color::category::rgb< ::color::category::_internal::rgb_split556 >;
using rgb_split565 = ::color::category::rgb< ::color::category::_internal::rgb_split565 >;
using rgb_split655 = ::color::category::rgb< ::color::category::_internal::rgb_split655 >;

namespace _internal {
using rgba_uint8 = ::color::category::_internal::rgba_scramble< std::uint8_t , 0, 1, 2, 3 >;
using rgba_uint16 = ::color::category::_internal::rgba_scramble< std::uint16_t , 0, 1, 2, 3 >;
using rgba_uint32 = ::color::category::_internal::rgba_scramble< std::uint32_t , 0, 1, 2, 3 >;
using rgba_uint64 = ::color::category::_internal::rgba_scramble< std::uint64_t , 0, 1, 2, 3 >;
using rgba_float = ::color::category::_internal::rgba_scramble< float , 0, 1, 2, 3 >;
using rgba_double = ::color::category::_internal::rgba_scramble< double , 0, 1, 2, 3 >;
using rgba_ldouble = ::color::category::_internal::rgba_scramble< long double, 0, 1, 2, 3 >;

using rgba_split2222 = ::color::category::_internal::rgba_scramble< ::color::type::split2222_t, 0, 1, 2, 3 >;
using rgba_split4444 = ::color::category::_internal::rgba_scramble< ::color::type::split4444_t, 0, 1, 2, 3 >;
using rgba_split8888 = ::color::category::_internal::rgba_scramble< ::color::type::split8888_t, 0, 1, 2, 3 >;

using rgba_split5551 = ::color::category::_internal::rgba_scramble< ::color::type::split5551_t, 0, 1, 2, 3 >;
using rgba_splitAAA2 = ::color::category::_internal::rgba_scramble< ::color::type::splitAAA2_t, 0, 1, 2, 3 >;
using rgba_splitGGGG = ::color::category::_internal::rgba_scramble< ::color::type::splitGGGG_t, 0, 1, 2, 3 >;
}

using rgba_uint8 = ::color::category::rgb< ::color::category::_internal::rgba_uint8 >;
using rgba_uint16 = ::color::category::rgb< ::color::category::_internal::rgba_uint16 >;
using rgba_uint32 = ::color::category::rgb< ::color::category::_internal::rgba_uint32 >;
using rgba_uint64 = ::color::category::rgb< ::color::category::_internal::rgba_uint64 >;
using rgba_float = ::color::category::rgb< ::color::category::_internal::rgba_float >;
using rgba_double = ::color::category::rgb< ::color::category::_internal::rgba_double >;
using rgba_ldouble = ::color::category::rgb< ::color::category::_internal::rgba_ldouble >;
using rgba_split2222 = ::color::category::rgb< ::color::category::_internal::rgba_split2222 >;
using rgba_split4444 = ::color::category::rgb< ::color::category::_internal::rgba_split4444 >;
using rgba_split8888 = ::color::category::rgb< ::color::category::_internal::rgba_split8888 >;
using rgba_split5551 = ::color::category::rgb< ::color::category::_internal::rgba_split5551 >;
using rgba_splitAAA2 = ::color::category::rgb< ::color::category::_internal::rgba_splitAAA2 >;
using rgba_splitGGGG = ::color::category::rgb< ::color::category::_internal::rgba_splitGGGG >;

namespace _internal {
using argb_uint8 = ::color::category::_internal::rgba_scramble< std::uint8_t , 3, 0, 1, 2 >;
using argb_uint16 = ::color::category::_internal::rgba_scramble< std::uint16_t , 3, 0, 1, 2 >;
using argb_uint32 = ::color::category::_internal::rgba_scramble< std::uint32_t , 3, 0, 1, 2 >;
using argb_uint64 = ::color::category::_internal::rgba_scramble< std::uint64_t , 3, 0, 1, 2 >;
using argb_float = ::color::category::_internal::rgba_scramble< float , 3, 0, 1, 2 >;
using argb_double = ::color::category::_internal::rgba_scramble< double , 3, 0, 1, 2 >;
using argb_ldouble = ::color::category::_internal::rgba_scramble< long double, 3, 0, 1, 2 >;

using argb_split2222 = ::color::category::_internal::rgba_scramble< ::color::type::split2222_t, 3, 0, 1, 2 >;
using argb_split4444 = ::color::category::_internal::rgba_scramble< ::color::type::split4444_t, 3, 0, 1, 2 >;
using argb_split8888 = ::color::category::_internal::rgba_scramble< ::color::type::split8888_t, 3, 0, 1, 2 >;

using argb_split1555 = ::color::category::_internal::rgba_scramble< ::color::type::split1555_t, 3, 0, 1, 2 >;
using argb_split2AAA = ::color::category::_internal::rgba_scramble< ::color::type::split2AAA_t, 3, 0, 1, 2 >;
using argb_splitGGGG = ::color::category::_internal::rgba_scramble< ::color::type::splitGGGG_t, 3, 0, 1, 2 >;
}

using argb_uint8 = ::color::category::rgb< ::color::category::_internal::argb_uint8 >;
using argb_uint16 = ::color::category::rgb< ::color::category::_internal::argb_uint16 >;
using argb_uint32 = ::color::category::rgb< ::color::category::_internal::argb_uint32 >;
using argb_uint64 = ::color::category::rgb< ::color::category::_internal::argb_uint64 >;
using argb_float = ::color::category::rgb< ::color::category::_internal::argb_float >;
using argb_double = ::color::category::rgb< ::color::category::_internal::argb_double >;
using argb_ldouble = ::color::category::rgb< ::color::category::_internal::argb_ldouble >;
using argb_split2222 = ::color::category::rgb< ::color::category::_internal::argb_split2222 >;
using argb_split4444 = ::color::category::rgb< ::color::category::_internal::argb_split4444 >;
using argb_split8888 = ::color::category::rgb< ::color::category::_internal::argb_split8888 >;
using argb_split1555 = ::color::category::rgb< ::color::category::_internal::argb_split1555 >;
using argb_split2AAA = ::color::category::rgb< ::color::category::_internal::argb_split2AAA >;
using argb_splitGGGG = ::color::category::rgb< ::color::category::_internal::argb_splitGGGG >;

namespace _internal {
using bgr_uint8 = ::color::category::_internal::rgb_scramble< std::uint8_t , 2, 0, 1 >;
using bgr_uint16 = ::color::category::_internal::rgb_scramble< std::uint16_t , 2, 0, 1 >;
using bgr_uint32 = ::color::category::_internal::rgb_scramble< std::uint32_t , 2, 0, 1 >;
using bgr_uint64 = ::color::category::_internal::rgb_scramble< std::uint64_t , 2, 0, 1 >;
using bgr_float = ::color::category::_internal::rgb_scramble< float , 2, 0, 1 >;
using bgr_double = ::color::category::_internal::rgb_scramble< double , 2, 0, 1 >;
using bgr_ldouble = ::color::category::_internal::rgb_scramble< long double, 2, 0, 1 >;

using bgr_split233 = ::color::category::_internal::rgb_scramble< ::color::type::split233_t , 2, 0, 1 >;
using bgr_split323 = ::color::category::_internal::rgb_scramble< ::color::type::split323_t , 2, 0, 1 >;
using bgr_split332 = ::color::category::_internal::rgb_scramble< ::color::type::split332_t , 2, 0, 1 >;
using bgr_split422 = ::color::category::_internal::rgb_scramble< ::color::type::split422_t , 2, 0, 1 >;
using bgr_split556 = ::color::category::_internal::rgb_scramble< ::color::type::split556_t , 2, 0, 1 >;
using bgr_split565 = ::color::category::_internal::rgb_scramble< ::color::type::split565_t , 2, 0, 1 >;
using bgr_split655 = ::color::category::_internal::rgb_scramble< ::color::type::split655_t , 2, 0, 1 >;
}

using bgr_uint8 = ::color::category::rgb< ::color::category::_internal::bgr_uint8 >;
using bgr_uint16 = ::color::category::rgb< ::color::category::_internal::bgr_uint16 >;
using bgr_uint32 = ::color::category::rgb< ::color::category::_internal::bgr_uint32 >;
using bgr_uint64 = ::color::category::rgb< ::color::category::_internal::bgr_uint64 >;
using bgr_float = ::color::category::rgb< ::color::category::_internal::bgr_float >;
using bgr_double = ::color::category::rgb< ::color::category::_internal::bgr_double >;
using bgr_ldouble = ::color::category::rgb< ::color::category::_internal::bgr_ldouble >;
using bgr_split233 = ::color::category::rgb< ::color::category::_internal::bgr_split233 >;
using bgr_split323 = ::color::category::rgb< ::color::category::_internal::bgr_split323 >;
using bgr_split332 = ::color::category::rgb< ::color::category::_internal::bgr_split332 >;
using bgr_split422 = ::color::category::rgb< ::color::category::_internal::bgr_split422 >;
using bgr_split556 = ::color::category::rgb< ::color::category::_internal::bgr_split556 >;
using bgr_split565 = ::color::category::rgb< ::color::category::_internal::bgr_split565 >;
using bgr_split655 = ::color::category::rgb< ::color::category::_internal::bgr_split655 >;

namespace _internal {
using bgra_uint8 = ::color::category::_internal::rgba_scramble< std::uint8_t , 2, 1, 0, 3 >;
using bgra_uint16 = ::color::category::_internal::rgba_scramble< std::uint16_t , 2, 1, 0, 3 >;
using bgra_uint32 = ::color::category::_internal::rgba_scramble< std::uint32_t , 2, 1, 0, 3 >;
using bgra_uint64 = ::color::category::_internal::rgba_scramble< std::uint64_t , 2, 1, 0, 3 >;
using bgra_float = ::color::category::_internal::rgba_scramble< float , 2, 1, 0, 3 >;
using bgra_double = ::color::category::_internal::rgba_scramble< double , 2, 1, 0, 3 >;
using bgra_ldouble = ::color::category::_internal::rgba_scramble< long double, 2, 1, 0, 3 >;
using bgra_split2222 = ::color::category::_internal::rgba_scramble< ::color::type::split2222_t, 2, 1, 0, 3 >;
using bgra_split4444 = ::color::category::_internal::rgba_scramble< ::color::type::split4444_t, 2, 1, 0, 3 >;
using bgra_split5551 = ::color::category::_internal::rgba_scramble< ::color::type::split5551_t, 2, 1, 0, 3 >;
using bgra_split8888 = ::color::category::_internal::rgba_scramble< ::color::type::split8888_t, 2, 1, 0, 3 >;
using bgra_splitAAA2 = ::color::category::_internal::rgba_scramble< ::color::type::splitAAA2_t, 2, 1, 0, 3 >;
using bgra_splitGGGG = ::color::category::_internal::rgba_scramble< ::color::type::splitGGGG_t, 2, 1, 0, 3 >;
}

using bgra_uint8 = ::color::category::rgb< ::color::category::_internal::bgra_uint8 >;
using bgra_uint16 = ::color::category::rgb< ::color::category::_internal::bgra_uint16 >;
using bgra_uint32 = ::color::category::rgb< ::color::category::_internal::bgra_uint32 >;
using bgra_uint64 = ::color::category::rgb< ::color::category::_internal::bgra_uint64 >;
using bgra_float = ::color::category::rgb< ::color::category::_internal::bgra_float >;
using bgra_double = ::color::category::rgb< ::color::category::_internal::bgra_double >;
using bgra_ldouble = ::color::category::rgb< ::color::category::_internal::bgra_ldouble >;
using bgra_split2222 = ::color::category::rgb< ::color::category::_internal::bgra_split2222 >;
using bgra_split4444 = ::color::category::rgb< ::color::category::_internal::bgra_split4444 >;
using bgra_split5551 = ::color::category::rgb< ::color::category::_internal::bgra_split5551 >;
using bgra_split8888 = ::color::category::rgb< ::color::category::_internal::bgra_split8888 >;
using bgra_splitAAA2 = ::color::category::rgb< ::color::category::_internal::bgra_splitAAA2 >;
using bgra_splitGGGG = ::color::category::rgb< ::color::category::_internal::bgra_splitGGGG >;

namespace _internal {
using abgr_uint8 = ::color::category::_internal::rgba_scramble< std::uint8_t , 3, 2, 1, 0 >;
using abgr_uint16 = ::color::category::_internal::rgba_scramble< std::uint16_t , 3, 2, 1, 0 >;
using abgr_uint32 = ::color::category::_internal::rgba_scramble< std::uint32_t , 3, 2, 1, 0 >;
using abgr_uint64 = ::color::category::_internal::rgba_scramble< std::uint64_t , 3, 2, 1, 0 >;
using abgr_float = ::color::category::_internal::rgba_scramble< float , 3, 2, 1, 0 >;
using abgr_double = ::color::category::_internal::rgba_scramble< double , 3, 2, 1, 0 >;
using abgr_ldouble = ::color::category::_internal::rgba_scramble< long double, 3, 2, 1, 0 >;

using abgr_split2222 = ::color::category::_internal::rgba_scramble< ::color::type::split2222_t, 3, 2, 1, 0 >;
using abgr_split4444 = ::color::category::_internal::rgba_scramble< ::color::type::split4444_t, 3, 2, 1, 0 >;
using abgr_split1555 = ::color::category::_internal::rgba_scramble< ::color::type::split1555_t, 3, 2, 1, 0 >;
using abgr_split8888 = ::color::category::_internal::rgba_scramble< ::color::type::split8888_t, 3, 2, 1, 0 >;
using abgr_split2AAA = ::color::category::_internal::rgba_scramble< ::color::type::split2AAA_t, 3, 2, 1, 0 >;
using abgr_splitGGGG = ::color::category::_internal::rgba_scramble< ::color::type::splitGGGG_t, 3, 2, 1, 0 >;
}

using abgr_uint8 = ::color::category::rgb< ::color::category::_internal::abgr_uint8 >;
using abgr_uint16 = ::color::category::rgb< ::color::category::_internal::abgr_uint16 >;
using abgr_uint32 = ::color::category::rgb< ::color::category::_internal::abgr_uint32 >;
using abgr_uint64 = ::color::category::rgb< ::color::category::_internal::abgr_uint64 >;
using abgr_float = ::color::category::rgb< ::color::category::_internal::abgr_float >;
using abgr_double = ::color::category::rgb< ::color::category::_internal::abgr_double >;
using abgr_ldouble = ::color::category::rgb< ::color::category::_internal::abgr_ldouble >;
using abgr_split2222 = ::color::category::rgb< ::color::category::_internal::abgr_split2222 >;
using abgr_split4444 = ::color::category::rgb< ::color::category::_internal::abgr_split4444 >;
using abgr_split1555 = ::color::category::rgb< ::color::category::_internal::abgr_split1555 >;
using abgr_split8888 = ::color::category::rgb< ::color::category::_internal::abgr_split8888 >;
using abgr_split2AAA = ::color::category::rgb< ::color::category::_internal::abgr_split2AAA >;
using abgr_splitGGGG = ::color::category::rgb< ::color::category::_internal::abgr_splitGGGG >;

}
}

namespace color {
namespace akin {

template< >struct gray< ::color::category::rgb_uint8 > {
	typedef ::color::category::gray_uint8 akin_type;
};
template< >struct gray< ::color::category::rgb_uint16 > {
	typedef ::color::category::gray_uint8 akin_type;
};
template< >struct gray< ::color::category::rgb_uint32 > {
	typedef ::color::category::gray_uint8 akin_type;
};
template< >struct gray< ::color::category::rgb_uint64 > {
	typedef ::color::category::gray_uint16 akin_type;
};
template< >struct gray< ::color::category::rgb_float > {
	typedef ::color::category::gray_float akin_type;
};
template< >struct gray< ::color::category::rgb_double > {
	typedef ::color::category::gray_double akin_type;
};
template< >struct gray< ::color::category::rgb_ldouble > {
	typedef ::color::category::gray_ldouble akin_type;
};

}
}

namespace color {
namespace category {

namespace _internal {
struct yiq_bool {};
struct yiq_uint8 {};
struct yiq_uint16 {};
struct yiq_uint24 {};
struct yiq_uint32 {};
struct yiq_uint48 {};
struct yiq_uint64 {};
struct yiq_float {};
struct yiq_double {};
struct yiq_ldouble {};
}

template< typename tag_name >
struct yiq {
	typedef void category_name;
};

using yiq_bool = ::color::category::yiq< ::color::category::_internal::yiq_bool >;
using yiq_uint8 = ::color::category::yiq< ::color::category::_internal::yiq_uint8 >;
using yiq_uint16 = ::color::category::yiq< ::color::category::_internal::yiq_uint16 >;
using yiq_uint24 = ::color::category::yiq< ::color::category::_internal::yiq_uint24 >;
using yiq_uint32 = ::color::category::yiq< ::color::category::_internal::yiq_uint32 >;
using yiq_uint48 = ::color::category::yiq< ::color::category::_internal::yiq_uint48 >;
using yiq_uint64 = ::color::category::yiq< ::color::category::_internal::yiq_uint64 >;
using yiq_float = ::color::category::yiq< ::color::category::_internal::yiq_float >;
using yiq_double = ::color::category::yiq< ::color::category::_internal::yiq_double >;
using yiq_ldouble = ::color::category::yiq< ::color::category::_internal::yiq_ldouble >;

}
}

namespace color {
namespace akin {

template< >struct gray< ::color::category::yiq_uint8 > {
	typedef ::color::category::gray_uint8 akin_type;
};
template< >struct gray< ::color::category::yiq_uint16 > {
	typedef ::color::category::gray_uint16 akin_type;
};
template< >struct gray< ::color::category::yiq_uint32 > {
	typedef ::color::category::gray_uint32 akin_type;
};
template< >struct gray< ::color::category::yiq_uint64 > {
	typedef ::color::category::gray_uint64 akin_type;
};
template< >struct gray< ::color::category::yiq_float > {
	typedef ::color::category::gray_float akin_type;
};
template< >struct gray< ::color::category::yiq_double > {
	typedef ::color::category::gray_double akin_type;
};
template< >struct gray< ::color::category::yiq_ldouble > {
	typedef ::color::category::gray_ldouble akin_type;
};

}
}

namespace color {
namespace category {

namespace _internal {

template< typename tag_name >
struct yuv__type {
	typedef tag_name tag_type;
};

using yuv_void = color::category::_internal::yuv__type< void >;
using yuv_bool = color::category::_internal::yuv__type< bool >;
using yuv_uint8 = color::category::_internal::yuv__type< std::uint8_t >;
using yuv_uint16 = color::category::_internal::yuv__type< std::uint16_t >;

using yuv_uint32 = color::category::_internal::yuv__type< std::uint32_t >;

using yuv_uint64 = color::category::_internal::yuv__type< std::uint64_t >;
using yuv_float = color::category::_internal::yuv__type< float >;
using yuv_double = color::category::_internal::yuv__type< double >;
using yuv_ldouble = color::category::_internal::yuv__type< long double >;

}

template< typename tag_name >
struct yuv {
	typedef void category_name;
};

using yuv_void = ::color::category::yuv< ::color::category::_internal::yuv_void >;
using yuv_bool = ::color::category::yuv< ::color::category::_internal::yuv_bool >;
using yuv_uint8 = ::color::category::yuv< ::color::category::_internal::yuv_uint8 >;
using yuv_uint16 = ::color::category::yuv< ::color::category::_internal::yuv_uint16 >;

using yuv_uint32 = ::color::category::yuv< ::color::category::_internal::yuv_uint32 >;

using yuv_uint64 = ::color::category::yuv< ::color::category::_internal::yuv_uint64 >;
using yuv_float = ::color::category::yuv< ::color::category::_internal::yuv_float >;
using yuv_double = ::color::category::yuv< ::color::category::_internal::yuv_double >;
using yuv_ldouble = ::color::category::yuv< ::color::category::_internal::yuv_ldouble >;

}
}

namespace color {
namespace akin {

template< >struct gray< ::color::category::yuv_uint8 > {
	typedef ::color::category::gray_uint8 akin_type;
};
template< >struct gray< ::color::category::yuv_uint16 > {
	typedef ::color::category::gray_uint16 akin_type;
};
template< >struct gray< ::color::category::yuv_uint32 > {
	typedef ::color::category::gray_uint32 akin_type;
};
template< >struct gray< ::color::category::yuv_uint64 > {
	typedef ::color::category::gray_uint64 akin_type;
};
template< >struct gray< ::color::category::yuv_float > {
	typedef ::color::category::gray_float akin_type;
};
template< >struct gray< ::color::category::yuv_double > {
	typedef ::color::category::gray_double akin_type;
};
template< >struct gray< ::color::category::yuv_ldouble > {
	typedef ::color::category::gray_ldouble akin_type;
};

}
}

namespace color {
namespace trait {

template< typename category_name >
struct info {
public:

	enum { implemented_enum = false };
	enum { meaningful_enum = false };

};

}
}

namespace color {
namespace trait {

template <> struct info< ::color::category::gray_bool > {
public:
	enum { implemented_enum = true };
	enum { meaningful_enum = true };
};
template <> struct info< ::color::category::gray_uint8 > {
public:
	enum { implemented_enum = true };
	enum { meaningful_enum = true };
};
template <> struct info< ::color::category::gray_uint16 > {
public:
	enum { implemented_enum = true };
	enum { meaningful_enum = true };
};
template <> struct info< ::color::category::gray_uint32 > {
public:
	enum { implemented_enum = true };
	enum { meaningful_enum = true };
};
template <> struct info< ::color::category::gray_uint64 > {
public:
	enum { implemented_enum = true };
	enum { meaningful_enum = true };
};
template <> struct info< ::color::category::gray_float > {
public:
	enum { implemented_enum = true };
	enum { meaningful_enum = true };
};
template <> struct info< ::color::category::gray_double > {
public:
	enum { implemented_enum = true };
	enum { meaningful_enum = true };
};
template <> struct info< ::color::category::gray_ldouble > {
public:
	enum { implemented_enum = true };
	enum { meaningful_enum = true };
};

}
}

namespace color {
namespace trait {

template< >
struct bound< ::color::category::gray_double >
	: public ::color::_internal::utility::bound::general< double, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct bound< ::color::category::gray_float >
	: public ::color::_internal::utility::bound::general< float, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct bound< ::color::category::gray_ldouble >
	: public ::color::_internal::utility::bound::general< long double, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct bound< ::color::category::gray_uint16 >
	: public ::color::_internal::utility::bound::general< std::uint16_t, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct bound< ::color::category::gray_uint32 >
	: public ::color::_internal::utility::bound::general< std::uint32_t, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct bound< ::color::category::gray_uint64 >
	: public ::color::_internal::utility::bound::general< std::uint64_t, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct bound< ::color::category::gray_uint8 >
	: public ::color::_internal::utility::bound::general< std::uint8_t, unsigned > {
};

}
}

namespace color {
namespace _internal {
namespace utility {
namespace component {

template< typename value_name, typename index_name >
struct array {
public:
	typedef value_name value_type;
	typedef index_name index_type;

	typedef ::color::_internal::utility::type::traitC< value_name > utility_trait_type;

	typedef typename utility_trait_type::instance_type instance_type;
	typedef typename utility_trait_type::const_type const_type;
	typedef typename utility_trait_type::return_image_type return_image_type;
	typedef typename utility_trait_type::return_type return_type;
	typedef typename utility_trait_type::input_const_type input_const_type;
	typedef typename utility_trait_type::input_type input_type;

	typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;
};

}
}
}
}

namespace color {
namespace trait {

template< >
struct component< ::color::category::gray_bool >
	: public ::color::_internal::utility::component::array< bool, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::gray_double >
	: public ::color::_internal::utility::component::array< double, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::gray_float >
	: public ::color::_internal::utility::component::array< float, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::gray_ldouble >
	: public ::color::_internal::utility::component::array< long double, unsigned > {
};

}
}

namespace color {
namespace _internal {
namespace utility {
namespace type {

template < typename type_name >
struct traitP {
public:
	typedef type_name instance_type;

	typedef instance_type const const_type;

	typedef instance_type const return_image_type;
	typedef instance_type return_type;

	typedef instance_type const& input_const_type;
	typedef instance_type input_type;

};

}
}
}
}

namespace color {
namespace _internal {
namespace utility {
namespace component {

template< typename unsigned_name, typename index_name >
struct Unsigned {
public:
	typedef unsigned_name unsigned_type;
	typedef index_name index_type;

	typedef ::color::_internal::utility::type::traitP< unsigned_type > utility_trait_type;

	typedef typename utility_trait_type::instance_type instance_type;
	typedef typename utility_trait_type::const_type const_type;
	typedef typename utility_trait_type::return_image_type return_image_type;
	typedef typename utility_trait_type::return_type return_type;
	typedef typename utility_trait_type::input_const_type input_const_type;
	typedef typename utility_trait_type::input_type input_type;

	typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;
};

}
}
}
}

namespace color {
namespace trait {

template< >
struct component< ::color::category::gray_uint16 >
	: public ::color::_internal::utility::component::Unsigned< std::uint16_t, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::gray_uint32 >
	: public ::color::_internal::utility::component::Unsigned< std::uint32_t, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::gray_uint64 >
	: public ::color::_internal::utility::component::Unsigned< std::uint64_t, unsigned> {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::gray_uint8 >
	: public ::color::_internal::utility::component::Unsigned< std::uint8_t, unsigned > {
};

}
}

namespace color {
namespace _internal {
namespace utility {
namespace container {

template< typename index_name >
struct boolean {
public:
	typedef index_name index_type;
	typedef bool value_type;

	typedef bool instance_type;

	typedef instance_type const const_type;
	typedef instance_type const& return_image_type;
	typedef instance_type & return_type;
	typedef instance_type & return_original_type;
	typedef instance_type const& input_const_type;
	typedef instance_type & input_type;
	typedef instance_type & output_type;

	typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

	typedef typename index_trait_type::instance_type index_instance_type;

	typedef typename index_trait_type::input_const_type index_input_const_type;
	typedef typename index_trait_type::return_image_type index_return_image_type;

	typedef ::color::_internal::utility::type::traitC< value_type > component_trait_type;

	typedef typename component_trait_type::instance_type component_type;

	typedef typename component_trait_type::return_image_type component_return_const_type;
	typedef typename component_trait_type::input_const_type component_input_const_type;

	typedef void set_return_type;

	enum { size_enum = 1 };

	static component_return_const_type get(input_const_type container, index_input_const_type index) {
		return container;
	}

	template< index_instance_type index >
	static component_return_const_type get(input_const_type container) {
		return container;
	}

	static set_return_type set(input_type container, index_input_const_type index, component_input_const_type value) {
		container = value;
	}

	template< index_instance_type index >
	static set_return_type set(input_type container, component_input_const_type value) {
		container = value;
	}

	static index_return_image_type size() {
		static const index_instance_type local_length = 1;
		return local_length;
	}
};
}
}
}
}

namespace color {
namespace trait {

template< >
struct container< ::color::category::gray_bool >
	: public ::color::_internal::utility::container::boolean< unsigned > {
};

}
}

namespace color {
namespace _internal {
namespace utility {
namespace container {

template< typename value_name, unsigned length >
struct array {
public:
	typedef value_name value_type;

	typedef std::array< value_name, length> instance_type;

	typedef instance_type const const_type;
	typedef instance_type const& return_image_type;
	typedef instance_type & return_type;
	typedef instance_type & return_original_type;
	typedef instance_type const& input_const_type;
	typedef instance_type & input_type;
	typedef instance_type & output_type;

	typedef ::color::_internal::utility::type::index< typename instance_type::size_type > index_trait_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::const_type index_const_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;
	typedef typename index_trait_type::return_image_type index_return_image_type;

	typedef ::color::_internal::utility::type::traitC< value_name > component_trait_type;

	typedef typename component_trait_type::instance_type component_type;
	typedef typename component_trait_type::const_type component_const_type;
	typedef typename component_trait_type::return_image_type component_return_const_type;
	typedef typename component_trait_type::input_const_type component_input_const_type;

	typedef void set_return_type;

	enum { size_enum = length };

	static component_return_const_type get(input_const_type container, index_input_const_type index) {
		return container[index];
	}

	template< index_instance_type index >
	static component_return_const_type get(input_const_type container) {
		return container[index];
	}

	static set_return_type set(input_type container, index_input_const_type index, component_input_const_type value) {
		container[index] = value;
	}

	template< index_instance_type index >
	static set_return_type set(input_type container, component_input_const_type value) {
		container[index] = value;
	}

	static index_return_image_type size() {
		static const index_instance_type local_length = length;
		return local_length;
	}
};
}
}
}
}

namespace color {
namespace trait {

template< >
struct container< ::color::category::gray_double >
	: public ::color::_internal::utility::container::array< double, 1 > {
};

}
}
namespace color {
namespace trait {

template< >
struct container< ::color::category::gray_float >
	: public ::color::_internal::utility::container::array< float, 1 > {
};

}
}
namespace color {
namespace trait {

template< >
struct container< ::color::category::gray_ldouble >
	: public ::color::_internal::utility::container::array< long double, 1 > {
};

}
}

namespace color {
namespace _internal {
namespace utility {
namespace container {

template< typename unsigned_name, typename value_name, typename index_name, unsigned length, unsigned width >
struct Unsigned {
public:
	typedef unsigned_name unsigned_type;
	typedef value_name value_type;
	typedef index_name index_type;
	typedef unsigned_name instance_type;

	typedef ::color::_internal::utility::container::Unsigned<unsigned_name,value_name,index_name,length,width> this_type;

	typedef instance_type const const_type;
	typedef instance_type const& return_image_type;
	typedef instance_type & return_type;
	typedef instance_type & return_original_type;
	typedef instance_type const& input_const_type;
	typedef instance_type & input_type;
	typedef instance_type & output_type;

	typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

	typedef typename index_trait_type::instance_type index_instance_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;

	typedef typename index_trait_type::return_image_type index_return_image_type;

	typedef ::color::_internal::utility::type::traitP< value_name > component_trait_type;

	typedef typename component_trait_type::instance_type component_type;
	typedef typename component_trait_type::const_type component_const_type;
	typedef typename component_trait_type::return_image_type component_return_const_type;
	typedef typename component_trait_type::input_const_type component_input_const_type;

	typedef void set_return_type;

	enum { size_enum = length };

	static component_return_const_type get(input_const_type container, index_input_const_type index) {
		return (component_type)((container >> (index * width)) & mask());
	}

	template< index_instance_type index >
	static component_return_const_type get(input_const_type container) {
		return (component_type)((container >> (index * width)) & mask());
	}

	static set_return_type set(input_type container, index_input_const_type index, component_input_const_type value) {
		container = (container & ~(this_type::mask() << (index * width))) | ((instance_type(value) << (index * width)));
	}

	template< index_instance_type index >
	static set_return_type set(input_type container, component_input_const_type value) {
		container = (container & ~(this_type::mask() << (index * width))) | ((instance_type(value)) << (index * width));
	}

	static index_return_image_type size() {
		static const index_instance_type local_length = length;
		return local_length;
	}
private:
	static return_image_type mask() {
		static instance_type local_mask = (((instance_type(1) << (width-1)) - instance_type(1))<< 1) + instance_type(1);
		return local_mask;
	}
};

}
}
}
}

namespace color {
namespace trait {

template< >
struct container< ::color::category::gray_uint16 >
	: public ::color::_internal::utility::container::Unsigned< std::uint16_t, std::uint16_t, unsigned, 1, 16 > {
};

}
}
namespace color {
namespace trait {

template< >
struct container< ::color::category::gray_uint32 >
	: public ::color::_internal::utility::container::Unsigned< std::uint32_t, std::uint32_t, unsigned, 1, 32 > {
};

}
}
namespace color {
namespace trait {

template< >
struct container< ::color::category::gray_uint64 >
	: public ::color::_internal::utility::container::Unsigned< std::uint64_t, std::uint64_t, unsigned, 1, 64 > {
};

}
}
namespace color {
namespace trait {

template< >
struct container< ::color::category::gray_uint8 >
	: public ::color::_internal::utility::container::Unsigned< std::uint8_t, std::uint8_t, unsigned, 1, 8 > {
};

}
}

namespace color {
namespace trait {

template< >
struct index< ::color::category::gray_bool >
	: public ::color::_internal::utility::type::index< unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct index< ::color::category::gray_double >
	: public ::color::_internal::utility::type::index< unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct index< ::color::category::gray_float >
	: public ::color::_internal::utility::type::index< unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct index< ::color::category::gray_ldouble >
	: public ::color::_internal::utility::type::index< unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct index< ::color::category::gray_uint16 >
	: public ::color::_internal::utility::type::index< unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct index< ::color::category::gray_uint32 >
	: public ::color::_internal::utility::type::index< unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct index< ::color::category::gray_uint64 >
	: public ::color::_internal::utility::type::index< unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct index< ::color::category::gray_uint8 >
	: public ::color::_internal::utility::type::index< unsigned > {
};

}
}

namespace color {
namespace _internal {

template< typename type_name >
struct pick_gray {
	typedef ::color::category::gray_uint8 category_type;
};

template<> struct pick_gray< bool > {
	typedef ::color::category::gray_bool category_type;
};
template<> struct pick_gray< std::uint8_t > {
	typedef ::color::category::gray_uint8 category_type;
};
template<> struct pick_gray< std::uint16_t > {
	typedef ::color::category::gray_uint16 category_type;
};
template<> struct pick_gray< std::uint32_t > {
	typedef ::color::category::gray_uint32 category_type;
};
template<> struct pick_gray< std::uint64_t > {
	typedef ::color::category::gray_uint64 category_type;
};
template<> struct pick_gray< float > {
	typedef ::color::category::gray_float category_type;
};
template<> struct pick_gray< double > {
	typedef ::color::category::gray_double category_type;
};
template<> struct pick_gray< long double > {
	typedef ::color::category::gray_ldouble category_type;
};
}

template< typename type_name >
using gray = ::color::model< typename ::color::_internal::pick_gray< type_name >::category_type >;

}

namespace color {
namespace place {
namespace _internal {

template< typename category_name >
struct gray {
public:
	typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

	enum { position_enum = -9 };
	enum { has_enum = false };

	static index_instance_type position() {
		return position_enum;
	}
};

}

template< typename category_name >
inline

typename ::color::trait::index< category_name >::instance_type
gray() {
	return ::color::place::_internal::gray<category_name>::position();
}

}
}

namespace color {
namespace place {
namespace _internal {

template< typename tag_name >
struct gray< ::color::category::gray< tag_name > > {
public:
	typedef ::color::category::gray< tag_name > category_type;
	typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

	enum { position_enum = 0 };
	enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
};

}
}
}

namespace color {
namespace place {
namespace _internal {

template< typename category_name >
struct red {
public:
	typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

	enum { position_enum = -1 };
	enum { has_enum = false };

	static index_instance_type position() {
		return position_enum;
	}
};

}

template< typename category_name >
inline

typename ::color::trait::index< category_name >::instance_type
red() {
	return ::color::place::_internal::red<category_name>::position();
}

}
}

namespace color {
namespace trait {

template< typename tag_name >
struct index< ::color::category::rgb< tag_name> >
	: public ::color::_internal::utility::type::index< unsigned > {
};

}
}

namespace color {
namespace place {
namespace _internal {

template< typename tag_name >
struct red< ::color::category::rgb< tag_name > > {
public:
	typedef ::color::category::rgb< tag_name > category_type;
	typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

	enum { position_enum = 0 };
	enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
};

template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position >
struct red< ::color::category::rgb< ::color::category::_internal::rgb_scramble< value_name, red_position, green_position, blue_position > > > {
public:
	typedef ::color::category::_internal::rgb_scramble< value_name, red_position, green_position, blue_position > scramble_type;
	typedef ::color::category::rgb< scramble_type > category_type;
	typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

	enum { position_enum = red_position };

	static index_instance_type position() {
		return position_enum;
	}
};

template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position, unsigned alpha_position >
struct red< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, red_position, green_position, blue_position, alpha_position > > > {
public:
	typedef ::color::category::_internal::rgba_scramble< value_name, red_position, green_position, blue_position, alpha_position > scramble_type;
	typedef ::color::category::rgb< scramble_type > category_type;
	typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

	enum { position_enum = red_position };

	static index_instance_type position() {
		return position_enum;
	}
};

}
}
}

namespace color {
namespace place {
namespace _internal {

template< typename category_name >
struct green {
public:
	typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

	enum { position_enum = -8 };
	enum { has_enum = false };

	static index_instance_type position() {
		return position_enum;
	}
};

}

template< typename category_name >
inline

typename ::color::trait::index< category_name >::instance_type
green() {
	return ::color::place::_internal::green<category_name>::position();
}

}
}

namespace color {
namespace place {
namespace _internal {

template< typename tag_name >
struct green< ::color::category::rgb< tag_name > > {
public:
	typedef ::color::category::rgb< tag_name > category_type;
	typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

	enum { position_enum = 1 };
	enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
};

template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position >
struct green< ::color::category::rgb< ::color::category::_internal::rgb_scramble< value_name, red_position, green_position, blue_position > > > {
public:
	typedef ::color::category::_internal::rgb_scramble< value_name, red_position, green_position, blue_position > scramble_type;
	typedef ::color::category::rgb< scramble_type > category_type;
	typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

	enum { position_enum = green_position };

	static index_instance_type position() {
		return position_enum;
	}
};

template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position, unsigned alpha_position >
struct green< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, red_position, green_position, blue_position, alpha_position > > > {
public:
	typedef ::color::category::_internal::rgba_scramble< value_name, red_position, green_position, blue_position, alpha_position > scramble_type;
	typedef ::color::category::rgb< scramble_type > category_type;
	typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

	enum { position_enum = green_position };

	static index_instance_type position() {
		return position_enum;
	}
};

}
}
}

namespace color {
namespace place {
namespace _internal {

template< typename category_name >
struct blue {
public:
	typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

	enum { position_enum = -11 };
	enum { has_enum = false };

	static index_instance_type position() {
		return position_enum;
	}
};

}

template< typename category_name >
inline

typename ::color::trait::index< category_name >::instance_type
blue() {
	return ::color::place::_internal::blue<category_name>::position();
}

}
}

namespace color {
namespace place {
namespace _internal {

template< typename tag_name >
struct blue< ::color::category::rgb< tag_name > > {
public:
	typedef ::color::category::rgb< tag_name > category_type;
	typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

	enum { position_enum = 2 };
	enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
};

template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position >
struct blue< ::color::category::rgb< ::color::category::_internal::rgb_scramble< value_name, red_position, green_position, blue_position > > > {
public:
	typedef ::color::category::_internal::rgb_scramble< value_name, red_position, green_position, blue_position > scramble_type;
	typedef ::color::category::rgb< scramble_type > category_type;
	typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

	enum { position_enum = blue_position };

	static index_instance_type position() {
		return position_enum;
	}
};

template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position, unsigned alpha_position >
struct blue< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, red_position, green_position, blue_position, alpha_position > > > {
public:
	typedef ::color::category::_internal::rgba_scramble< value_name, red_position, green_position, blue_position, alpha_position > scramble_type;
	typedef ::color::category::rgb< scramble_type > category_type;
	typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

	enum { position_enum = blue_position };

	static index_instance_type position() {
		return position_enum;
	}
};

}
}
}

namespace color {
namespace place {
namespace _internal {

template< typename category_name >
struct alpha {
public:
	typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

	enum { position_enum = -10 };
	enum { has_enum = false };

	static index_instance_type position() {
		return position_enum;
	}
};

}

template< typename category_name >
inline

typename ::color::trait::index< category_name >::instance_type
alpha() {
	return ::color::place::_internal::alpha<category_name>::position();
}

}
}

namespace color {
namespace place {
namespace _internal {

template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position, unsigned alpha_position >
struct alpha< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, red_position, green_position, blue_position, alpha_position > > > {
public:
	typedef ::color::category::_internal::rgba_scramble< value_name, red_position, green_position, blue_position, alpha_position > scramble_type;
	typedef ::color::category::rgb< scramble_type > category_type;
	typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

	enum { position_enum = alpha_position };
	enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
};

}
}
}

namespace color {
namespace akin {

template< >struct rgb< ::color::category::gray_uint8 > {
	typedef ::color::category::rgb_uint8 akin_type;
};
template< >struct rgb< ::color::category::gray_uint16 > {
	typedef ::color::category::rgb_uint16 akin_type;
};
template< >struct rgb< ::color::category::gray_uint32 > {
	typedef ::color::category::rgb_uint32 akin_type;
};
template< >struct rgb< ::color::category::gray_uint64 > {
	typedef ::color::category::rgb_uint64 akin_type;
};
template< >struct rgb< ::color::category::gray_float > {
	typedef ::color::category::rgb_float akin_type;
};
template< >struct rgb< ::color::category::gray_double > {
	typedef ::color::category::rgb_double akin_type;
};
template< >struct rgb< ::color::category::gray_ldouble > {
	typedef ::color::category::rgb_ldouble akin_type;
};

}
}

namespace color {
namespace trait {

template< >
struct component< ::color::category::rgb_float >
	: public ::color::_internal::utility::component::array< float, unsigned> {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::rgb_double >
	: public ::color::_internal::utility::component::array< double, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::rgb_ldouble >
	: public ::color::_internal::utility::component::array< long double, unsigned> {
};

}
}

namespace color {
namespace trait {

template< >
struct component< ::color::category::rgb_uint8 >
	: public ::color::_internal::utility::component::array< std::uint8_t, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::rgb_uint16 >
	: public ::color::_internal::utility::component::array< std::uint16_t, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::rgb_uint32 >
	: public ::color::_internal::utility::component::array< std::uint32_t, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::rgb_uint64 >
	: public ::color::_internal::utility::component::array< std::uint64_t, unsigned > {
};

}
}

namespace color {
namespace trait {

template< typename value_name, unsigned first_position, unsigned second_position, unsigned third_position >
struct component< ::color::category::rgb< ::color::category::_internal::rgb_scramble< value_name, first_position, second_position, third_position > > >
	: public ::color::_internal::utility::component::array< value_name, unsigned > {
};

}
}
namespace color {
namespace trait {

template< typename value_name, unsigned first_position, unsigned second_position, unsigned third_position , unsigned forth_position >
struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, first_position, second_position, third_position, forth_position > > >
	: public ::color::_internal::utility::component::array< value_name, unsigned > {
};

}
}

namespace color {
namespace _internal {
namespace utility {
namespace component {

template< typename index_name >
struct pack_8
	: public ::color::_internal::utility::component::Unsigned< std::uint8_t, index_name > {
};

template< typename index_name > using cnent2222 = ::color::_internal::utility::component::pack_8<index_name>;

template< typename index_name > using cnent233 = ::color::_internal::utility::component::pack_8<index_name>;
template< typename index_name > using cnent323 = ::color::_internal::utility::component::pack_8<index_name>;
template< typename index_name > using cnent332 = ::color::_internal::utility::component::pack_8<index_name>;

template< typename index_name > using cnent224 = ::color::_internal::utility::component::pack_8<index_name>;
template< typename index_name > using cnent242 = ::color::_internal::utility::component::pack_8<index_name>;
template< typename index_name > using cnent422 = ::color::_internal::utility::component::pack_8<index_name>;

}
}
}
}

namespace color {
namespace trait {

template< unsigned first_position, unsigned second_position, unsigned third_position >
struct component< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split233_t, first_position, second_position, third_position > > >
	: public ::color::_internal::utility::component::cnent233< unsigned > {
};

template< unsigned first_position, unsigned second_position, unsigned third_position >
struct component< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split332_t, first_position, second_position, third_position > > >
	: public ::color::_internal::utility::component::cnent332< unsigned > {
};

}
}

namespace color {
namespace trait {

template< unsigned first_position, unsigned second_position, unsigned third_position >
struct component< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split422_t, first_position, second_position, third_position > > >
	: public ::color::_internal::utility::component::cnent422< unsigned > {
};

template< unsigned first_position, unsigned second_position, unsigned third_position >
struct component< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split242_t, first_position, second_position, third_position > > >
	: public ::color::_internal::utility::component::cnent242< unsigned > {
};

template< unsigned first_position, unsigned second_position, unsigned third_position >
struct component< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split224_t, first_position, second_position, third_position > > >
	: public ::color::_internal::utility::component::cnent224< unsigned > {
};

}
}

namespace color {
namespace _internal {
namespace utility {
namespace component {

template< typename index_name >
struct pack_16
	: public ::color::_internal::utility::component::Unsigned< std::uint8_t, index_name > {
};

template< typename index_name > using cnent556 = ::color::_internal::utility::component::pack_16<index_name>;
template< typename index_name > using cnent565 = ::color::_internal::utility::component::pack_16<index_name>;
template< typename index_name > using cnent655 = ::color::_internal::utility::component::pack_16<index_name>;

template< typename index_name > using cnent4444 = ::color::_internal::utility::component::pack_16<index_name>;

template< typename index_name > using cnent5551 = ::color::_internal::utility::component::pack_16<index_name>;
template< typename index_name > using cnent1555 = ::color::_internal::utility::component::pack_16<index_name>;

}
}
}
}

namespace color {
namespace trait {

template< unsigned first_position, unsigned second_position, unsigned third_position >
struct component< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split655_t, first_position, second_position, third_position > > >
	: public ::color::_internal::utility::component::cnent655< unsigned > {
};

template< unsigned first_position, unsigned second_position, unsigned third_position >
struct component< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split565_t, first_position, second_position, third_position > > >
	: public ::color::_internal::utility::component::cnent565< unsigned > {
};

template< unsigned first_position, unsigned second_position, unsigned third_position >
struct component< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split556_t, first_position, second_position, third_position > > >
	: public ::color::_internal::utility::component::cnent556< unsigned > {
};

}
}

namespace color {
namespace _internal {
namespace utility {
namespace component {

template< typename index_name >
struct pack_32
	: public ::color::_internal::utility::component::Unsigned< std::uint16_t, index_name > {
};

template< typename index_name > using cnent8888 = ::color::_internal::utility::component::pack_32<index_name>;

template< typename index_name > using cnentAAA2 = ::color::_internal::utility::component::pack_32<index_name>;
template< typename index_name > using cnent2AAA = ::color::_internal::utility::component::pack_32<index_name>;

}
}
}
}

namespace color {
namespace trait {

template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitAAA2_t, first_position, second_position, third_position, fourth_position > > >
	: public ::color::_internal::utility::component::cnentAAA2< unsigned > {
};

template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2AAA_t, first_position, second_position, third_position, fourth_position > > >
	: public ::color::_internal::utility::component::cnent2AAA< unsigned > {
};

}
}

namespace color {
namespace trait {

template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2222_t, first_position, second_position, third_position, fourth_position > > >
	: public ::color::_internal::utility::component::cnent2222< unsigned > {
};

}
}
namespace color {
namespace trait {

template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split4444_t, first_position, second_position, third_position, fourth_position > > >
	: public ::color::_internal::utility::component::cnent4444< unsigned > {
};

}
}
namespace color {
namespace trait {

template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split8888_t, first_position, second_position, third_position, fourth_position > > >
	: public ::color::_internal::utility::component::cnent8888< unsigned > {
};

}
}

namespace color {
namespace _internal {
namespace utility {
namespace component {

template< typename index_name >
struct pack_64
	: public ::color::_internal::utility::component::Unsigned< std::uint32_t, index_name > {
};

template< typename index_name > using cnentGGGG = ::color::_internal::utility::component::pack_64<index_name>;
}
}
}
}

namespace color {
namespace trait {

template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
struct component< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitGGGG_t, first_position, second_position, third_position, fourth_position > > >
	: public ::color::_internal::utility::component::cnentGGGG< unsigned > {
};

}
}

namespace color {
namespace get {

template< typename tag_name >
inline
typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::gray<tag_name> >::akin_type >::return_type
red(::color::model< ::color::category::gray<tag_name> > const& color_parameter) {
	typedef ::color::category::gray<tag_name> category_type;
	typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
	enum { red_p = ::color::place::_internal::red<akin_type>::position_enum };
	typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
	typedef ::color::_internal::reformat< akin_type, category_type, scalar_type > reformat_type;
	return reformat_type::template process<red_p,0>(color_parameter.template get<0>());
}

}
}

namespace color {
namespace get {

template< typename tag_name >
inline
typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::gray<tag_name> >::akin_type >::return_type
green(::color::model< ::color::category::gray<tag_name> > const& color_parameter) {
	typedef ::color::category::gray<tag_name> category_type;
	typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
	enum { green_p = ::color::place::_internal::green<akin_type>::position_enum };
	typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
	typedef ::color::_internal::reformat< akin_type, category_type, scalar_type > reformat_type;
	return reformat_type::template process<green_p,0>(color_parameter.template get<0>());
}

}
}

namespace color {
namespace get {

template< typename tag_name >
inline
typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::gray<tag_name> >::akin_type >::return_type
blue(::color::model< ::color::category::gray<tag_name> > const& color_parameter) {
	typedef ::color::category::gray<tag_name> category_type;
	typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
	enum { blue_p = ::color::place::_internal::blue<akin_type>::position_enum };
	typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
	typedef ::color::_internal::reformat< akin_type, category_type, scalar_type > reformat_type;
	return reformat_type::template process<blue_p,0>(color_parameter.template get<0>());
}

}
}

namespace color {
namespace get {

template< typename tag_name >
typename ::color::trait::component< ::color::category::gray<tag_name> >::return_type
gray(::color::model< ::color::category::gray<tag_name> > const& color_parameter) {
	return color_parameter.template get<0>();
}

}
}

namespace color {
namespace set {

template< typename tag_name >
inline
void
red
(
	::color::model< ::color::category::gray< tag_name > > & color_parameter
	,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::gray< tag_name > >::akin_type >::input_const_type component_parameter
) {
	typedef ::color::category::gray<tag_name > category_type;
	typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
	typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
	typedef ::color::_internal::reformat<category_type, akin_type, scalar_type > reformat_type;
	enum { red_p = ::color::place::_internal::red<akin_type>::position_enum };
	enum { gray_p = ::color::place::_internal::gray<category_type>::position_enum };
	color_parameter.template set<gray_p>(reformat_type::template process<gray_p,red_p>(component_parameter));
}

}
}

namespace color {
namespace set {

template< typename tag_name >
inline
void
green
(
	::color::model< ::color::category::gray< tag_name > > & color_parameter
	,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::gray< tag_name > >::akin_type >::input_const_type component_parameter
) {
	typedef ::color::category::gray<tag_name > category_type;
	typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
	typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
	typedef ::color::_internal::reformat<category_type, akin_type, scalar_type > reformat_type;
	enum { green_p = ::color::place::_internal::green<akin_type>::position_enum };
	enum { gray_p = ::color::place::_internal::gray<category_type>::position_enum };
	color_parameter.template set<gray_p>(reformat_type::template process<gray_p,green_p>(component_parameter));
}

}
}

namespace color {
namespace set {

template< typename tag_name >
inline
void
blue
(
	::color::model< ::color::category::gray< tag_name > > & color_parameter
	,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::gray< tag_name > >::akin_type >::input_const_type component_parameter
) {
	typedef ::color::category::gray<tag_name > category_type;
	typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
	typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
	typedef ::color::_internal::reformat<category_type, akin_type, scalar_type > reformat_type;
	enum { blue_p = ::color::place::_internal::blue<akin_type>::position_enum };
	enum { gray_p = ::color::place::_internal::gray<category_type>::position_enum };
	color_parameter.template set<gray_p>(reformat_type::template process<gray_p,blue_p>(component_parameter));
}

}
}

namespace color {
namespace set {
template< typename tag_name >
inline
void
gray
(
	::color::model< ::color::category::gray< tag_name > > & color_parameter,
	typename ::color::model< ::color::category::gray< tag_name > >::component_input_const_type component_parameter
) {
	typedef ::color::category::gray< tag_name > category_type;
	enum { gray_p = ::color::place::_internal::gray< category_type >::position_enum };
	color_parameter.template set<gray_p>(component_parameter);
}

}
}

namespace color {
namespace akin {

template< typename tag_name >
struct cmy< ::color::category::cmy< tag_name > > {
public:
	typedef ::color::category::cmy< tag_name > akin_type;
};

}
}

namespace color {
namespace akin {

template< >struct cmy< ::color::category::cmyk_uint8 > {
	typedef ::color::category::cmy_uint8 akin_type;
};
template< >struct cmy< ::color::category::cmyk_uint16 > {
	typedef ::color::category::cmy_uint16 akin_type;
};
template< >struct cmy< ::color::category::cmyk_uint32 > {
	typedef ::color::category::cmy_uint32 akin_type;
};
template< >struct cmy< ::color::category::cmyk_uint64 > {
	typedef ::color::category::cmy_uint64 akin_type;
};
template< >struct cmy< ::color::category::cmyk_float > {
	typedef ::color::category::cmy_float akin_type;
};
template< >struct cmy< ::color::category::cmyk_double > {
	typedef ::color::category::cmy_double akin_type;
};
template< >struct cmy< ::color::category::cmyk_ldouble > {
	typedef ::color::category::cmy_ldouble akin_type;
};

}
}

namespace color {
namespace akin {

template< >struct cmy< ::color::category::gray_uint8 > {
	typedef ::color::category::cmy_uint8 akin_type;
};
template< >struct cmy< ::color::category::gray_uint16 > {
	typedef ::color::category::cmy_uint16 akin_type;
};
template< >struct cmy< ::color::category::gray_uint32 > {
	typedef ::color::category::cmy_uint32 akin_type;
};
template< >struct cmy< ::color::category::gray_uint64 > {
	typedef ::color::category::cmy_uint64 akin_type;
};
template< >struct cmy< ::color::category::gray_float > {
	typedef ::color::category::cmy_float akin_type;
};
template< >struct cmy< ::color::category::gray_double > {
	typedef ::color::category::cmy_double akin_type;
};
template< >struct cmy< ::color::category::gray_ldouble > {
	typedef ::color::category::cmy_ldouble akin_type;
};

}
}

namespace color {
namespace akin {

template< >struct cmy< ::color::category::hsl_uint8 > {
	typedef ::color::category::cmy_uint8 akin_type;
};
template< >struct cmy< ::color::category::hsl_uint16 > {
	typedef ::color::category::cmy_uint16 akin_type;
};
template< >struct cmy< ::color::category::hsl_uint32 > {
	typedef ::color::category::cmy_uint32 akin_type;
};
template< >struct cmy< ::color::category::hsl_uint64 > {
	typedef ::color::category::cmy_uint64 akin_type;
};
template< >struct cmy< ::color::category::hsl_float > {
	typedef ::color::category::cmy_float akin_type;
};
template< >struct cmy< ::color::category::hsl_double > {
	typedef ::color::category::cmy_double akin_type;
};
template< >struct cmy< ::color::category::hsl_ldouble > {
	typedef ::color::category::cmy_ldouble akin_type;
};

}
}

namespace color {
namespace akin {

template< >struct cmy< ::color::category::hsv_uint8 > {
	typedef ::color::category::cmy_uint8 akin_type;
};
template< >struct cmy< ::color::category::hsv_uint16 > {
	typedef ::color::category::cmy_uint16 akin_type;
};
template< >struct cmy< ::color::category::hsv_uint32 > {
	typedef ::color::category::cmy_uint32 akin_type;
};
template< >struct cmy< ::color::category::hsv_uint64 > {
	typedef ::color::category::cmy_uint64 akin_type;
};
template< >struct cmy< ::color::category::hsv_float > {
	typedef ::color::category::cmy_float akin_type;
};
template< >struct cmy< ::color::category::hsv_double > {
	typedef ::color::category::cmy_double akin_type;
};
template< >struct cmy< ::color::category::hsv_ldouble > {
	typedef ::color::category::cmy_ldouble akin_type;
};

}
}

namespace color {
namespace akin {

template< >struct cmy< ::color::category::rgb_uint8 > {
	typedef ::color::category::cmy_uint8 akin_type;
};
template< >struct cmy< ::color::category::rgb_uint16 > {
	typedef ::color::category::cmy_uint16 akin_type;
};
template< >struct cmy< ::color::category::rgb_uint32 > {
	typedef ::color::category::cmy_uint32 akin_type;
};
template< >struct cmy< ::color::category::rgb_uint64 > {
	typedef ::color::category::cmy_uint64 akin_type;
};
template< >struct cmy< ::color::category::rgb_float > {
	typedef ::color::category::cmy_float akin_type;
};
template< >struct cmy< ::color::category::rgb_double > {
	typedef ::color::category::cmy_double akin_type;
};
template< >struct cmy< ::color::category::rgb_ldouble > {
	typedef ::color::category::cmy_ldouble akin_type;
};

}
}

namespace color {
namespace akin {

template< >struct cmy< ::color::category::yiq_uint8 > {
	typedef ::color::category::cmy_uint8 akin_type;
};
template< >struct cmy< ::color::category::yiq_uint16 > {
	typedef ::color::category::cmy_uint16 akin_type;
};
template< >struct cmy< ::color::category::yiq_uint32 > {
	typedef ::color::category::cmy_uint32 akin_type;
};
template< >struct cmy< ::color::category::yiq_uint64 > {
	typedef ::color::category::cmy_uint64 akin_type;
};
template< >struct cmy< ::color::category::yiq_float > {
	typedef ::color::category::cmy_float akin_type;
};
template< >struct cmy< ::color::category::yiq_double > {
	typedef ::color::category::cmy_double akin_type;
};
template< >struct cmy< ::color::category::yiq_ldouble > {
	typedef ::color::category::cmy_ldouble akin_type;
};

}
}

namespace color {
namespace akin {

template< >struct cmy< ::color::category::yuv_uint8 > {
	typedef ::color::category::cmy_uint8 akin_type;
};
template< >struct cmy< ::color::category::yuv_uint16 > {
	typedef ::color::category::cmy_uint16 akin_type;
};
template< >struct cmy< ::color::category::yuv_uint32 > {
	typedef ::color::category::cmy_uint32 akin_type;
};
template< >struct cmy< ::color::category::yuv_uint64 > {
	typedef ::color::category::cmy_uint64 akin_type;
};
template< >struct cmy< ::color::category::yuv_float > {
	typedef ::color::category::cmy_float akin_type;
};
template< >struct cmy< ::color::category::yuv_double > {
	typedef ::color::category::cmy_double akin_type;
};
template< >struct cmy< ::color::category::yuv_ldouble > {
	typedef ::color::category::cmy_ldouble akin_type;
};

}
}

namespace color {
namespace trait {

template <> struct info< ::color::category::cmy_bool > {
public:
	enum { implemented_enum = false};
	enum { meaningful_enum = true };
};
template <> struct info< ::color::category::cmy_uint8 > {
public:
	enum { implemented_enum = true };
	enum { meaningful_enum = true };
};
template <> struct info< ::color::category::cmy_uint16 > {
public:
	enum { implemented_enum = true };
	enum { meaningful_enum = true };
};
template <> struct info< ::color::category::cmy_uint32 > {
public:
	enum { implemented_enum = true };
	enum { meaningful_enum = true };
};
template <> struct info< ::color::category::cmy_uint64 > {
public:
	enum { implemented_enum = true };
	enum { meaningful_enum = true };
};
template <> struct info< ::color::category::cmy_float > {
public:
	enum { implemented_enum = true };
	enum { meaningful_enum = true };
};
template <> struct info< ::color::category::cmy_double > {
public:
	enum { implemented_enum = true };
	enum { meaningful_enum = true };
};
template <> struct info< ::color::category::cmy_ldouble > {
public:
	enum { implemented_enum = true };
	enum { meaningful_enum = true };
};

}
}

namespace color {
namespace trait {

template< >
struct bound< ::color::category::cmy_double >
	: public ::color::_internal::utility::bound::general< double, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct bound< ::color::category::cmy_float >
	: public ::color::_internal::utility::bound::general< float, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct bound< ::color::category::cmy_ldouble >
	: public ::color::_internal::utility::bound::general< long double, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct bound< ::color::category::cmy_uint16 >
	: public ::color::_internal::utility::bound::general< std::uint16_t, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct bound< ::color::category::cmy_uint32 >
	: public ::color::_internal::utility::bound::general< std::uint32_t, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct bound< ::color::category::cmy_uint64 >
	: public ::color::_internal::utility::bound::general< std::uint64_t, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct bound< ::color::category::cmy_uint8 >
	: public ::color::_internal::utility::bound::general< std::uint8_t, unsigned > {
};

}
}

namespace color {
namespace trait {

template< >
struct component< ::color::category::cmy_double >
	: public ::color::_internal::utility::component::array< double, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::cmy_float >
	: public ::color::_internal::utility::component::array< float, unsigned> {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::cmy_ldouble >
	: public ::color::_internal::utility::component::array< long double, unsigned> {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::cmy_uint16 >
	: public ::color::_internal::utility::component::array< std::uint16_t, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::cmy_uint32 >
	: public ::color::_internal::utility::component::array< std::uint32_t, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::cmy_uint64 >
	: public ::color::_internal::utility::component::array< std::uint64_t, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::cmy_uint8 >
	: public ::color::_internal::utility::component::array< std::uint8_t, unsigned > {
};

}
}

namespace color {
namespace trait {

template< >
struct container< ::color::category::cmy_double >
	: public ::color::_internal::utility::container::array< double, 3 > {
};

}
}
namespace color {
namespace trait {

template< >
struct container< ::color::category::cmy_float >
	: public ::color::_internal::utility::container::array< float, 3 > {
};

}
}
namespace color {
namespace trait {

template< >
struct container< ::color::category::cmy_ldouble >
	: public ::color::_internal::utility::container::array< long double, 3 > {
};

}
}
namespace color {
namespace trait {

template< >
struct container< ::color::category::cmy_uint16 >
	: public ::color::_internal::utility::container::array< std::uint16_t, 3 > {
};

}
}
namespace color {
namespace trait {

template< >
struct container< ::color::category::cmy_uint32 >
	: public ::color::_internal::utility::container::array< std::uint32_t, 3 > {
};

}
}
namespace color {
namespace trait {

template< >
struct container< ::color::category::cmy_uint64 >
	: public ::color::_internal::utility::container::array< std::uint64_t, 3 > {
};

}
}
namespace color {
namespace trait {

template< >
struct container< ::color::category::cmy_uint8 >
	: public ::color::_internal::utility::container::array< std::uint8_t, 3 > {
};

}
}

namespace color {
namespace trait {

template< >
struct index< ::color::category::cmy_double >
	: public ::color::_internal::utility::type::index< unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct index< ::color::category::cmy_float >
	: public ::color::_internal::utility::type::index< unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct index< ::color::category::cmy_ldouble >
	: public ::color::_internal::utility::type::index< unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct index< ::color::category::cmy_uint16 >
	: public ::color::_internal::utility::type::index< unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct index< ::color::category::cmy_uint32 >
	: public ::color::_internal::utility::type::index< unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct index< ::color::category::cmy_uint64 >
	: public ::color::_internal::utility::type::index< unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct index< ::color::category::cmy_uint8 >
	: public ::color::_internal::utility::type::index< unsigned > {
};

}
}

namespace color {
namespace _internal {

template< typename type_name >
struct pick_cmy {
	typedef ::color::category::cmy_uint8 category_type;
};

template<> struct pick_cmy< std::uint8_t > {
	typedef ::color::category::cmy_uint8 category_type;
};
template<> struct pick_cmy< std::uint16_t > {
	typedef ::color::category::cmy_uint16 category_type;
};
template<> struct pick_cmy< std::uint32_t > {
	typedef ::color::category::cmy_uint32 category_type;
};
template<> struct pick_cmy< std::uint64_t > {
	typedef ::color::category::cmy_uint64 category_type;
};
template<> struct pick_cmy< float > {
	typedef ::color::category::cmy_float category_type;
};
template<> struct pick_cmy< double > {
	typedef ::color::category::cmy_double category_type;
};
template<> struct pick_cmy< long double > {
	typedef ::color::category::cmy_ldouble category_type;
};
}

template< typename type_name >
using cmy = ::color::model< typename ::color::_internal::pick_cmy< type_name >::category_type >;

}

namespace color {
namespace place {
namespace _internal {

template< typename category_name >
struct cyan {
public:
	typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

	enum { position_enum = -1 };
	enum { has_enum = false };

	static index_instance_type position() {
		return position_enum;
	}
};

}

template< typename category_name >
inline

typename ::color::trait::index< category_name >::instance_type
cyan() {
	return ::color::place::_internal::cyan<category_name>::position();
}

}
}

namespace color {
namespace place {
namespace _internal {

template< typename tag_name >
struct cyan< ::color::category::cmy< tag_name > > {
public:
	typedef ::color::category::cmy< tag_name > category_type;
	typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

	enum { position_enum = 0 };
	enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
};

}
}
}

namespace color {
namespace place {
namespace _internal {

template< typename category_name >
struct yellow {
public:
	typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

	enum { position_enum = -1 };
	enum { has_enum = false };

	static index_instance_type position() {
		return position_enum;
	}
};

}

template< typename category_name >
inline

typename ::color::trait::index< category_name >::instance_type
yellow() {
	return ::color::place::_internal::yellow<category_name>::position();
}

}
}

namespace color {
namespace place {
namespace _internal {

template< typename tag_name >
struct yellow< ::color::category::cmy< tag_name > > {
public:
	typedef ::color::category::cmy< tag_name > category_type;
	typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

	enum { position_enum = 2 };
	enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
};

}
}
}

namespace color {
namespace place {
namespace _internal {

template< typename category_name >
struct magenta {
public:
	typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

	enum { position_enum = -1 };
	enum { has_enum = false };

	static index_instance_type position() {
		return position_enum;
	}
};

}

template< typename category_name >
inline

typename ::color::trait::index< category_name >::instance_type
magenta() {
	return ::color::place::_internal::magenta<category_name>::position();
}

}
}

namespace color {
namespace place {
namespace _internal {

template< typename tag_name >
struct magenta< ::color::category::cmy< tag_name > > {
public:
	typedef ::color::category::cmy< tag_name > category_type;
	typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

	enum { position_enum = 1 };
	enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
};

}
}
}

namespace color {
namespace akin {

template< >struct rgb< ::color::category::cmy_uint8 > {
	typedef ::color::category::rgb_uint8 akin_type;
};
template< >struct rgb< ::color::category::cmy_uint16 > {
	typedef ::color::category::rgb_uint16 akin_type;
};
template< >struct rgb< ::color::category::cmy_uint32 > {
	typedef ::color::category::rgb_uint32 akin_type;
};
template< >struct rgb< ::color::category::cmy_uint64 > {
	typedef ::color::category::rgb_uint64 akin_type;
};
template< >struct rgb< ::color::category::cmy_float > {
	typedef ::color::category::rgb_float akin_type;
};
template< >struct rgb< ::color::category::cmy_double > {
	typedef ::color::category::rgb_double akin_type;
};
template< >struct rgb< ::color::category::cmy_ldouble > {
	typedef ::color::category::rgb_ldouble akin_type;
};

}
}

namespace color {
namespace operation {
namespace _internal {

template< typename category_name>
struct invert {
public:
	typedef category_name category_type;

	typedef ::color::trait::index<category_type> index_trait_type;
	typedef ::color::trait::bound<category_type> bound_type;
	typedef ::color::trait::component< category_name > component_trait_type;
	typedef ::color::trait::container< category_name > container_trait_type;

	typedef typename ::color::model<category_type> model_type;

	typedef typename component_trait_type::input_const_type component_input_const_type;
	typedef typename component_trait_type::return_type component_return_type;

	typedef typename index_trait_type::instance_type index_type;
	typedef typename index_trait_type::input_const_type index_input_const_type;

	static component_return_type
	component
	(
		component_input_const_type component
		,index_input_const_type index
	) {
		return bound_type::range(index) - component;
	}

	template< index_type index_size >
	static
	component_return_type
	component(component_input_const_type component) {
		return bound_type::template range<index_size>() - component;
	}

	static void process(model_type &result) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			result.set(index, component(result.get(index), index));
		}
	}

	static void process(model_type &result, model_type const& right) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			result.set(index, component(right.get(index), index));
		}
	}

};
}

template< typename category_name >
void invert
(
	::color::model<category_name> & result
) {
	::color::operation::_internal::invert<category_name>::process(result);
}

template< typename category_name >
void invert
(
	::color::model<category_name> & result
	,::color::model<category_name> const& right
) {
	::color::operation::_internal::invert<category_name>::process(result, right);
}

}
}

namespace color {
namespace get {

template< typename tag_name >
inline
typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::cmy< tag_name > >::akin_type >::return_type
red(::color::model< ::color::category::cmy<tag_name> > const& color_parameter) {
	typedef ::color::category::cmy<tag_name> category_type;
	typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
	typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
	enum { red_p = ::color::place::_internal::red<akin_type>::position_enum };
	enum { cyan_p = ::color::place::_internal::cyan<category_type>::position_enum };
	typedef ::color::operation::_internal::invert< category_type > invert_type;
	typedef ::color::_internal::reformat< akin_type, category_type, scalar_type > reformat_type;
	return reformat_type::template process<red_p,cyan_p>(invert_type::template component<cyan_p>(color_parameter.template get<cyan_p>()));
}

}
}

namespace color {
namespace get {

template< typename tag_name >
inline
typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::cmy< tag_name > >::akin_type >::return_type
green(::color::model< ::color::category::cmy<tag_name> > const& color_parameter) {
	typedef ::color::category::cmy<tag_name> category_type;
	typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
	typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
	enum { green_p = ::color::place::_internal::green<akin_type>::position_enum };
	enum { yellow_p = ::color::place::_internal::yellow<category_type>::position_enum };
	typedef ::color::operation::_internal::invert< category_type > invert_type;
	typedef ::color::_internal::reformat< akin_type, category_type, scalar_type > reformat_type;
	return reformat_type::template process<green_p,yellow_p>(invert_type::template component<yellow_p>(color_parameter.template get<yellow_p>()));
}

}
}

namespace color {
namespace get {

template< typename tag_name >
inline
typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::cmy< tag_name > >::akin_type >::return_type
blue(::color::model< ::color::category::cmy<tag_name> > const& color_parameter) {
	typedef ::color::category::cmy<tag_name> category_type;
	typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
	typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
	enum { blue_p = ::color::place::_internal::blue<akin_type>::position_enum };
	enum { magenta_p = ::color::place::_internal::magenta<category_type>::position_enum };
	typedef ::color::operation::_internal::invert< category_type > invert_type;
	typedef ::color::_internal::reformat< akin_type, category_type, scalar_type > reformat_type;
	return reformat_type::template process<blue_p,magenta_p>(invert_type::template component<magenta_p>(color_parameter.template get<magenta_p>()));
}

}
}

namespace color {
namespace akin {

template< >struct yiq< ::color::category::cmy_uint8 > {
	typedef ::color::category::yiq_uint8 akin_type;
};
template< >struct yiq< ::color::category::cmy_uint16 > {
	typedef ::color::category::yiq_uint16 akin_type;
};
template< >struct yiq< ::color::category::cmy_uint32 > {
	typedef ::color::category::yiq_uint32 akin_type;
};
template< >struct yiq< ::color::category::cmy_uint64 > {
	typedef ::color::category::yiq_uint64 akin_type;
};
template< >struct yiq< ::color::category::cmy_float > {
	typedef ::color::category::yiq_float akin_type;
};
template< >struct yiq< ::color::category::cmy_double > {
	typedef ::color::category::yiq_double akin_type;
};
template< >struct yiq< ::color::category::cmy_ldouble > {
	typedef ::color::category::yiq_ldouble akin_type;
};

}
}

namespace color {
namespace trait {

template< >
struct component< ::color::category::yiq_double >
	: public ::color::_internal::utility::component::array< double, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::yiq_float >
	: public ::color::_internal::utility::component::array< float, unsigned> {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::yiq_ldouble >
	: public ::color::_internal::utility::component::array< long double, unsigned> {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::yiq_uint16 >
	: public ::color::_internal::utility::component::array< std::uint16_t, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::yiq_uint32 >
	: public ::color::_internal::utility::component::array< std::uint32_t, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::yiq_uint64 >
	: public ::color::_internal::utility::component::array< std::uint64_t, unsigned > {
};

}
}
namespace color {
namespace trait {

template< >
struct component< ::color::category::yiq_uint8 >
	: public ::color::_internal::utility::component::array< std::uint8_t, unsigned > {
};

}
}

namespace color {
namespace constant {

template< typename category_name>
struct yiq {
public:
	typedef category_name category_type;

	typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

	typedef ::color::constant::yiq<category_type> this_type;

	static scalar_type const a11() {
		return 1.0000000000000000000;
	}
	static scalar_type const a12() {
		return 0.9562948323208939905;
	}
	static scalar_type const a13() {
		return 0.6210251254447287141;
	}
	static scalar_type const a21() {
		return 1.0000000000000000000;
	}
	static scalar_type const a22() {
		return -0.2721214740839773195;
	}
	static scalar_type const a23() {
		return -0.6473809535176157222;
	}
	static scalar_type const a31() {
		return 1.0000000000000000000;
	}
	static scalar_type const a32() {
		return -1.1069899085671282160;
	}
	static scalar_type const a33() {
		return 1.7046149754988293290;
	}

	static scalar_type const b11() {
		return 0.2990000000000000000;
	}
	static scalar_type const b12() {
		return 0.5870000000000000000;
	}
	static scalar_type const b13() {
		return 0.1140000000000000000;
	}
	static scalar_type const b21() {
		return 0.5957161349127745527;
	}
	static scalar_type const b22() {
		return -0.2744528378392564636;
	}
	static scalar_type const b23() {
		return -0.3212632970735180890;
	}
	static scalar_type const b31() {
		return 0.2114564021201178664;
	}
	static scalar_type const b32() {
		return -0.5225910452916111683;
	}
	static scalar_type const b33() {
		return 0.3111346431714933019;
	}

	static scalar_type const i_min() {
		return -0.5957161349127745527;
	}
	static scalar_type const i_max() {
		return 0.5957161349127745527;
	}
	static scalar_type const i_range() {
		return 2*0.5957161349127745527;
	}

	static scalar_type const q_min() {
		return - 0.5225910452916111683;
	}
	static scalar_type const q_max() {
		return 0.5225910452916111683;
	}
	static scalar_type const q_range() {
		return 2*0.5225910452916111683;
	}

	static scalar_type i_deverse(scalar_type const& normal) {
		return this_type::i_range() * normal + this_type::i_min();
	}
	static scalar_type i_normalize(scalar_type const& divert) {
		return (divert + this_type::i_min()) /this_type::i_range();
	}

	static scalar_type q_deverse(scalar_type const& normal) {
		return this_type::q_range() * normal + this_type::q_min();
	}
	static scalar_type q_normalize(scalar_type const& divert) {
		return (divert + this_type::q_min()) /this_type::q_range();
	}
};

}
}

namespace color {
namespace get {

template< typename tag_name >
inline
typename ::color::trait::component< typename ::color::akin::yiq< ::color::category::cmy< tag_name > >::akin_type >::return_type
inphase(::color::model< ::color::category::cmy<tag_name> > const& color_parameter) {
	typedef ::color::category::cmy< tag_name > category_type;
	typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
	typedef typename ::color::akin::yiq<category_type >::akin_type akin_type;
	typedef ::color::_internal::diverse< akin_type > diverse_type;
	typedef ::color::_internal::normalize< category_type > normalize_type;
	typedef ::color::constant::yiq< akin_type > yiq_const_type;
	enum {
		cyan_p = ::color::place::_internal::cyan<category_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_type>::position_enum
		, yellow_p = ::color::place::_internal::yellow<category_type>::position_enum
	};
	scalar_type value =
		+ yiq_const_type::b21() * (1 - normalize_type::template process< cyan_p>(color_parameter.template get< cyan_p>()))
		+ yiq_const_type::b22() * (1 - normalize_type::template process<magenta_p>(color_parameter.template get<magenta_p>()))
		+ yiq_const_type::b23() * (1 - normalize_type::template process< yellow_p>(color_parameter.template get< yellow_p>()))
		;
	value = yiq_const_type::i_normalize(value);
	return diverse_type::template process<1>(value);
}

}
}

namespace color {
namespace get {

template< typename tag_name>
inline
typename ::color::model< typename ::color::akin::yiq< ::color::category::cmy< tag_name > >::akin_type >::component_const_type
quadrature(::color::model< ::color::category::cmy<tag_name> > const& color_parameter) {
	typedef ::color::category::cmy<tag_name> category_type;
	typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
	typedef typename ::color::akin::yiq<category_type>::akin_type akin_type;
	typedef ::color::_internal::diverse< akin_type > diverse_type;
	typedef ::color::_internal::normalize< category_type > normalize_type;
	typedef ::color::constant::yiq< akin_type > yiq_const_type;
	enum {
		cyan_p = ::color::place::_internal::cyan<category_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_type>::position_enum
		, yellow_p = ::color::place::_internal::yellow<category_type>::position_enum
	};
	scalar_type value =
		+ yiq_const_type::b31() * (1 - normalize_type::template process< cyan_p>(color_parameter.template get< cyan_p>()))
		+ yiq_const_type::b32() * (1 - normalize_type::template process<magenta_p>(color_parameter.template get<magenta_p>()))
		+ yiq_const_type::b33() * (1 - normalize_type::template process< yellow_p>(color_parameter.template get< yellow_p>()))
		;
	value = yiq_const_type::q_normalize(value);
	return diverse_type::template process<2>(value);
}

}
}

namespace color {
namespace constant {

template< typename category_name>
struct gray {
public:
	typedef category_name category_type;

	typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

	typedef ::color::constant::gray<category_type> this_type;

	static scalar_type const Rc() {
		return 0.2126729;
	}
	static scalar_type const Gc() {
		return 0.7151522;
	}
	static scalar_type const Bc() {
		return 0.0721750;
	}
};

}
}
namespace color {
namespace get {

template< typename tag_name >
inline
typename ::color::trait::component< typename ::color::akin::gray< ::color::category::cmy<tag_name> >::akin_type >::return_type
gray(::color::model< ::color::category::cmy<tag_name> > const& color_parameter) {
	typedef ::color::category::cmy< tag_name > category_type;
	typedef typename ::color::trait::scalar< category_type >::instance_type scalar_type;
	typedef typename ::color::akin::gray< category_type >::akin_type akin_type;
	typedef ::color::_internal::diverse< akin_type > diverse_type;
	typedef ::color::_internal::normalize< category_type > normalize_type;
	typedef ::color::constant::gray< akin_type > gray_const_type;
	enum {
		cyan_p = ::color::place::_internal::cyan<category_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_type>::position_enum
		, yellow_p = ::color::place::_internal::yellow<category_type>::position_enum
	};
	scalar_type value =
		gray_const_type::Rc() * (1 - normalize_type::template process< cyan_p>(color_parameter.template get< cyan_p>()))
		+ gray_const_type::Gc() * (1 - normalize_type::template process<magenta_p>(color_parameter.template get<magenta_p>()))
		+ gray_const_type::Bc() * (1 - normalize_type::template process< yellow_p>(color_parameter.template get< yellow_p>()));
	return diverse_type::template process<0>(value);
}

}
}

namespace color {
namespace set {

template< typename tag_name >
inline
void
red
(
	::color::model< ::color::category::cmy< tag_name > > & color_parameter
	,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::cmy< tag_name > >::akin_type >::input_const_type component_parameter
) {
	typedef ::color::category::cmy< tag_name > category_type;
	typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
	typedef typename ::color::trait::scalar< category_type >::instance_type scalar_type;
	typedef ::color::operation::_internal::invert< akin_type > invert_type;
	typedef ::color::_internal::reformat< category_type, akin_type, scalar_type > reformat_type;
	enum { cyan_p = ::color::place::_internal::cyan<category_type>::position_enum };
	color_parameter.template set<cyan_p>(reformat_type::template process<cyan_p,cyan_p>(invert_type::template component<cyan_p>(component_parameter)));
}

}
}

namespace color {
namespace set {

template< typename tag_name >
inline
void
green
(
	::color::model< ::color::category::cmy< tag_name > > & color_parameter
	,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::cmy< tag_name > >::akin_type >::input_const_type component_parameter
) {
	typedef ::color::category::cmy< tag_name > category_type;
	typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
	typedef typename ::color::trait::scalar< category_type >::instance_type scalar_type;
	typedef ::color::operation::_internal::invert< akin_type > invert_type;
	typedef ::color::_internal::reformat< category_type, akin_type, scalar_type > reformat_type;
	enum { yellow_p = ::color::place::_internal::yellow<category_type>::position_enum };
	color_parameter.template set<yellow_p>(reformat_type::template process<yellow_p,yellow_p>(invert_type::template component<yellow_p>(component_parameter)));
}

}
}

namespace color {
namespace set {

template< typename tag_name >
inline
void
blue
(
	::color::model< ::color::category::cmy< tag_name > > & color_parameter
	,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::cmy< tag_name > >::akin_type >::input_const_type component_parameter
) {
	typedef ::color::category::cmy< tag_name > category_type;
	typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
	typedef typename ::color::trait::scalar< category_type >::instance_type scalar_type;
	typedef ::color::operation::_internal::invert< akin_type > invert_type;
	typedef ::color::_internal::reformat< category_type, akin_type, scalar_type > reformat_type;
	enum { magenta_p = ::color::place::_internal::magenta<category_type>::position_enum };
	color_parameter.template set<magenta_p>(reformat_type::template process<magenta_p,magenta_p>(invert_type::template component<magenta_p>(component_parameter)));
}

}
}

namespace color {
namespace operation {
namespace _internal {

template< typename category_name>
struct addition {
public:
	typedef category_name category_type;

	typedef ::color::trait::container< category_type > container_trait_type;
	typedef ::color::trait::index< category_type > index_trait_type;
	typedef ::color::model<category_type> model_type;

	typedef typename index_trait_type::instance_type index_type;

	static void process(model_type &result, model_type const& right) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			result.set(index, result.get(index) + right.get(index));
		}
	}

	static void process(model_type &result, model_type const& left, model_type const& right) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			result.set(index, left.get(index) + right.get(index));
		}
	}
};

}

template< typename category_name >
void addition
(
	::color::model<category_name> & result
	,::color::model<category_name> const& right
) {
	::color::operation::_internal::addition<category_name>::process(result, right);
}

template< typename category_name >
void addition
(
	::color::model<category_name> & result
	,::color::model<category_name> const& left
	,::color::model<category_name> const& right
) {
	::color::operation::_internal::addition<category_name>::process(result, left, right);
}

}
}

namespace color {
namespace operation {
namespace _internal {
template< typename category_name >
struct subtract {
public:
	typedef category_name category_type;

	typedef ::color::trait::index<category_type> index_trait_type;
	typedef ::color::trait::container< category_type > container_trait_type;

	typedef ::color::model<category_type> model_type;

	typedef typename index_trait_type::instance_type index_type;

	static void process(model_type &result, model_type const& right) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			result.set(index, result.get(index) - right.get(index));
		}
	}

	static void process(model_type &result, model_type const& left, model_type const& right) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			result.set(index, left.get(index) - right.get(index));
		}
	}

};
}

template< typename category_name >
void subtract
(
	::color::model<category_name> & result
	,color::model<category_name> const& right
) {
	::color::operation::_internal::subtract<category_name>::process(result, right);
}

template< typename category_name >
void subtract
(
	::color::model<category_name> & result
	,color::model<category_name> const& left
	,color::model<category_name> const& right
) {
	::color::operation::_internal::subtract<category_name>::process(result, left, right);
}

}
}

namespace color {
namespace operation {
namespace _internal {
template< typename category_name, typename scalar_name >
struct scale {
public:
	typedef category_name category_type;
	typedef scalar_name scalar_type;
	typedef scalar_type const& scalar_const_input_type;

	typedef ::color::trait::container< category_type > container_trait_type;

	typedef ::color::trait::index<category_type> index_trait_type;

	typedef typename ::color::model<category_type> model_type;

	typedef model_type & model_input_type;
	typedef model_type const& model_const_input_type;

	typedef typename index_trait_type::instance_type index_type;

	static void process(model_input_type result, scalar_const_input_type const& scalar) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			result.set(index, result.get(index) * scalar);
		}
	}

	static void process(model_input_type result, scalar_const_input_type scalar, model_const_input_type right) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			result.set(index, scalar * right.get(index));
		}
	}

};
}

template< typename category_name, typename scalar_name >
void scale
(
	::color::model<category_name> & result
	,scalar_name const& scalar
) {
	::color::operation::_internal::scale<category_name,scalar_name>::process(result, scalar);
}

template< typename category_name, typename scalar_name >
void scale
(
	::color::model<category_name> & result
	,scalar_name const& scalar
	,::color::model<category_name> const& right
) {
	::color::operation::_internal::scale<category_name,scalar_name>::process(result, scalar, right);
}

}
}

namespace color {
namespace operation {
namespace arithmetic {

template< typename category_name >
inline
::color::model< category_name >
operator +(::color::model< category_name > const& left, ::color::model< category_name > const& right) {
	::color::model< category_name > result;
	::color::operation::addition(result, left, right);
	return result;
}

template< typename category_name>
inline
::color::model< category_name > &
operator +=(::color::model< category_name > & result, ::color::model< category_name > const& right) {
	::color::operation::addition(result, right);
	return result;
}

template< typename category_name >
inline
::color::model< category_name >
operator -(::color::model< category_name > const& left, ::color::model< category_name > const& right) {
	::color::model< category_name > result;
	::color::operation::subtract(result, left, right);
	return result;
}

template< typename category_name, typename scalar_name >
inline
::color::model< category_name >
operator *
(
	scalar_name const& left
	,::color::model< category_name > const& right
) {
	::color::model< category_name > result;
	::color::operation::scale(result, left, right);
	return result;
}

template< typename category_name, typename scalar_name >
inline
::color::model< category_name >
operator *
(
	::color::model< category_name > const & left
	,scalar_name const & right
) {
	::color::model< category_name > result;
	::color::operation::scale(result, right, left);
	return result;
}

template< typename category_name, typename scalar_name >
inline
::color::model< category_name >
operator /
(
	::color::model< category_name > const & left
	,scalar_name const & right
) {
	::color::model< category_name > result;
	::color::operation::scale(result, scalar_name(1) / right, left);
	return result;
}

template< typename category_name, typename scalar_name >
inline
::color::model< category_name > &
operator -=(::color::model< category_name > & result, scalar_name const& left) {
	::color::operation::subtract(result, left);
	return result;
}

template< typename category_name, typename scalar_name >
inline
::color::model< category_name > &
operator *=(::color::model< category_name > & result, scalar_name const& scalar) {
	::color::operation::scale(result, scalar);
	return result;
}

template< typename category_name, typename scalar_name >
inline
::color::model< category_name > &
operator /=(::color::model< category_name > & result, scalar_name const& scalar) {
	::color::operation::scale(result, scalar_name(1) / scalar);
	return result;
}

}

}
}

namespace color {
namespace operation {
namespace _internal {

template< typename category_name >
struct convex {
public:
	typedef category_name category_type;

	typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;

	typedef scalar_type const& scalar_const_input_type;

	typedef ::color::trait::index<category_type> index_trait_type;
	typedef ::color::trait::container< category_type > container_trait_type;
	typedef ::color::model<category_type> model_type;

	typedef model_type & model_input_type;
	typedef model_type const& model_const_input_type;

	typedef typename index_trait_type::instance_type index_type;

	static void process(model_input_type result, scalar_const_input_type scalar, model_const_input_type right) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			result.set(index, scalar * result.get(index) +(scalar_type(1) - scalar) *right.get(index));
		}
	}

	static void process(model_input_type result, model_const_input_type left, scalar_const_input_type scalar, model_const_input_type right) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			result.set(index, scalar * left.get(index) +(scalar_type(1) - scalar) *right.get(index));
		}
	}

};
}

template< typename category_name, typename scalar_name >
void convex
(
	::color::model<category_name> & result
	,scalar_name const& scalar
	,color::model<category_name> const& right
) {
	::color::operation::_internal::convex<category_name>::process(result, scalar, right);
}

template< typename category_name, typename scalar_name >
void convex
(
	::color::model<category_name> & result
	,color::model<category_name> const& left
	,scalar_name const& scalar
	,color::model<category_name> const& right
) {
	::color::operation::_internal::convex<category_name>::process(result, left, scalar, right);
}

}
}

namespace color {
namespace get {

template< typename category_name >
inline
typename ::color::trait::component< category_name >::return_image_type
alpha(::color::model< category_name > const& color_parameter) {
	typedef ::color::model< category_name > model_type;
	typedef ::color::trait::bound< category_name > bound_type;
	return bound_type::template maximum< 0 >();
}

}
}

namespace color {
namespace set {

template< typename category_name >
inline
void
alpha
(
	::color::model< category_name > & color_parameter,
	typename ::color::model< category_name >::component_input_const_type component_parameter
) {
};

}
}

namespace color {
namespace operation {
namespace _internal {

template
<
	typename category_name
	>
struct blend {
public:
	typedef category_name category_type;
	typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

	typedef ::color::operation::_internal::blend<category_type> this_type;

	typedef ::color::trait::container< category_type > container_trait_type;
	typedef ::color::trait::index< category_type > index_trait_type;
	typedef ::color::model<category_type> model_type;

	typedef typename index_trait_type::instance_type index_type;

	typedef ::color::_internal::normalize< category_type > normalize_type;
	typedef ::color::_internal::diverse< category_type > diverse_type;

	static void accumulate(model_type &result, scalar_type const& alpha, model_type const& upper) {
		this_type::template accumulate(result, result, alpha, upper);
	}

	static void accumulate(model_type &result, model_type const& lower, scalar_type const& alpha, model_type const& upper) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			result.set(index, (scalar_type(1) - alpha) * lower.get(index) + alpha * upper.get(index));
		}
	}

	template< index_type alpha_index >
	static void accumulate(model_type &result, model_type const& upper) {
		this_type::template accumulate<alpha_index>(result, result, upper);
	}

	template< index_type alpha_index >
	static void accumulate(model_type &result, model_type const& lower, model_type const& upper) {
		scalar_type aU = normalize_type::template process<alpha_index>(::color::get::alpha(upper));
		scalar_type aL = normalize_type::template process<alpha_index>(::color::get::alpha(lower));
		scalar_type divisor = aU + aL*(scalar_type(1) - aU);
		scalar_type cU = aU/divisor;
		scalar_type cL = aL * (scalar_type(1) - aU) / divisor;
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			result.set(index, cL * lower.get(index) + cU * upper.get(index));
		}
		::color::set::alpha(result, diverse_type::template process<alpha_index>(divisor));
	}

	static model_type mix(model_type const& lower, scalar_type const& alpha, model_type const& upper) {
		model_type result;
		this_type::template accumulate(result, lower, alpha, upper);
		return result;
	}

	template< index_type alpha_index >
	static model_type mix(model_type const& lower, model_type const& upper) {
		model_type result;
		this_type::template accumulate<alpha_index>(result, lower, upper);
		return result;
	}
};

}

template< typename category_name >
void blend
(
	::color::model<category_name> & result
	,::color::model<category_name> const& upper
				   ) {
	enum { alpha_index = ::color::place::_internal::alpha<category_name>::position_enum };
	static_assert(0 <= alpha_index, "Error: This combination of model/format has no alpha channel") ;
	::color::operation::_internal::blend<category_name>::template accumulate< alpha_index >(result, upper);
}

template< typename category_name >
void blend
(
	::color::model<category_name> & result
	,::color::model<category_name> const& lower
	,::color::model<category_name> const& upper
				   ) {
	enum { alpha_index = ::color::place::_internal::alpha<category_name>::position_enum };
	static_assert(0 <= alpha_index, "Error: This combination of model/format has no alpha channel") ;
	::color::operation::_internal::blend<category_name>::template accumulate< alpha_index >(result, lower, upper);
}

template< typename category_name >
::color::model<category_name>
mix
(
	::color::model<category_name> const& lower
	,::color::model<category_name> const& upper
				   ) {
	enum { alpha_index = ::color::place::_internal::alpha<category_name>::position_enum };
	static_assert(0 <= alpha_index, "Error: This combination of model/format has no alpha channel") ;
	return ::color::operation::_internal::blend<category_name>::template mix< alpha_index >(lower, upper);
}

template< typename category_name, typename scalar_name = double >
void blend
(
	::color::model<category_name> & result
	,scalar_name const& alpha
	,::color::model<category_name> const& upper
				   ) {
	::color::operation::_internal::blend<category_name>::accumulate(result, alpha, upper);
}

template< typename category_name, typename scalar_name = double >
void blend
(
	::color::model<category_name> & result
	,::color::model<category_name> const& lower
	,scalar_name const& alpha
	,::color::model<category_name> const& upper
				   ) {
	::color::operation::_internal::blend<category_name>::accumulate(result, lower, alpha, upper);
}

template< typename category_name, typename scalar_name = double >
::color::model<category_name>
mix
(
	::color::model<category_name> const& lower
	,scalar_name const& alpha
	,::color::model<category_name> const& upper
				   ) {
	return ::color::operation::_internal::blend<category_name>::mix(lower, alpha, upper);
}

}
}

namespace color {
	namespace operation {

		template< typename category_name >
		inline
		typename ::color::trait::scalar< category_name >::instance_type
		normalize
		(
			::color::model<category_name> const& m
			,typename ::color::trait::index<category_name>::input_const_type index
	) {
		return ::color::_internal::normalize<category_name>::process(m[index], index) ;
	}

	template
	<
		unsigned index_size
		,typename category_name
		>
	inline
	typename ::color::trait::scalar< category_name >::instance_type
	normalize
	(
		::color::model<category_name> const& m
					  ) {
		return ::color::_internal::normalize<category_name>::template process<index_size>(m.template get<index_size>());
	}

																					 }
}

namespace color {
	namespace operation {

		template
		<
			typename category_name
			>
		inline
		typename ::color::trait::component< category_name >::component_return_type
		diverse
		(
			typename ::color::trait::scalar<category_name>::instance_type const& scalar
			,typename ::color::trait::index<category_name>::index_input_const_type index
	) {
		return ::color::_internal::diverse< category_name >::process(scalar, index);
	}

	template
	<
		typename category_name
		,typename ::color::trait::index< category_name >::index_instance_type index
		>
	inline
	typename ::color::trait::component< category_name >::component_return_type
	diverse(typename ::color::trait::scalar<category_name>::instance_type const& scalar_type) {
		return ::color::_internal::diverse< category_name >::template process< index > (scalar_type);
	}

																		 }
}

namespace color {
	namespace operation {
		namespace _internal {

			template
			<
				typename category_name
				>
			struct combine {
				public:
				typedef category_name category_type;

				typedef ::color::trait::container< category_type > container_trait_type;
				typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;
				typedef typename ::color::trait::component< category_name >::instance_type component_type;
				typedef typename ::color::trait::index<category_type>::instance_type index_type;

				typedef ::color::model<category_type> model_type;

				static void process
				(
					model_type & result
					,scalar_type const& a0
					,model_type const& c0
					,scalar_type const& a1
					,model_type const& c1
	) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			result.set(index, component_type(a0 * c0[index] + a1 * c1[index]));
		}
	}

	static void process
	(
		model_type & result
		,scalar_type const& a0
		,model_type const& c0
		,scalar_type const& a1
		,model_type const& c1
		,scalar_type const& a2
		,model_type const& c2
	) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			result.set(index, component_type(a0 * c0[ index ] + a1 * c1[ index ] + a2 * c2[ index ]));
		}
	}

	   };

	   }

	template< typename category_name >
	void combine
	(
		::color::model<category_name> & result
		,typename ::color::trait::scalar<category_name>::instance_type const& a0
		,::color::model<category_name> const& c0
		,typename ::color::trait::scalar<category_name>::instance_type const& a1
		,::color::model<category_name> const& c1
					   ) {
		::color::operation::_internal::combine<category_name>::process(result, a0, c0, a1, c1);
	}

	template< typename category_name >
	void combine
	(
		::color::model<category_name> & result
		,typename ::color::trait::scalar<category_name>::instance_type const& a0
		,::color::model<category_name> const& c0
		,typename ::color::trait::scalar<category_name>::instance_type const& a1
		,::color::model<category_name> const& c1
		,typename ::color::trait::scalar<category_name>::instance_type const& a2
		,::color::model<category_name> const& c2
					   ) {
		::color::operation::_internal::combine<category_name>::process(result, a0, c0, a1, c1, a2, c2);
	}

										  }
}

namespace color {
	namespace operation {
		namespace _internal {

			template< typename category_name>
			struct gamma {
				public:
				typedef category_name category_type;

				typedef ::color::trait::container< category_name > container_trait_type;

				typedef typename ::color::trait::index<category_type>::instance_type index_type;
				typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;

				typedef typename ::color::model<category_type> model_type;

				typedef ::color::_internal::diverse< category_type > diverse_type;
				typedef ::color::_internal::normalize< category_type > normalize_type;

	static void process(model_type &result, scalar_type const& g) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			scalar_type s = normalize_type::process(result[index], index);
			result.set(index, diverse_type::process(std::pow(s, g), index));
		}
	}

	static void process(model_type &result, model_type const& right, scalar_type const& g) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			scalar_type s = normalize_type::process(right[index], index);
			result.set(index, diverse_type::process(std::pow(s, g), index));
		}
	}

	   };
	   }

	template< typename category_name >
	void gamma
	(
		::color::model<category_name> & result
		,typename ::color::trait::scalar<category_name>::instance_type const& g
										) {
		::color::operation::_internal::gamma<category_name>::process(result, g);
	}

	template< typename category_name >
	void gamma
	(
		::color::model<category_name> & result
		, ::color::model<category_name> const& right
		,typename ::color::trait::scalar<category_name>::instance_type const& g
										) {
		::color::operation::_internal::gamma<category_name>::process(result, right, g);
	}

										}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		gray
		(
			::color::model< ::color::category::cmy<tag_name> > & color_parameter,
			typename ::color::model< ::color::category::cmy<tag_name> >::component_input_const_type component_parameter
	) {
		typedef ::color::category::cmy< tag_name > category_type;
		typedef typename ::color::akin::gray< category_type >::akin_type akin_type;
		typedef typename ::color::trait::scalar< category_type >::instance_type scalar_type;
		typedef ::color::_internal::normalize< category_type > normalize_cmy_type;
		typedef ::color::_internal::normalize< akin_type > normalize_akin_type;
		typedef ::color::constant::gray< akin_type > gray_const_type;
		enum {
			cyan_p = ::color::place::_internal::cyan<category_type>::position_enum
			,magenta_p = ::color::place::_internal::magenta<category_type>::position_enum
			, yellow_p = ::color::place::_internal::yellow<category_type>::position_enum
		};
		scalar_type value =
		gray_const_type::Rc() * (scalar_type(1) - normalize_cmy_type::template process< cyan_p>(color_parameter.template get< cyan_p>()))
		+ gray_const_type::Gc() * (scalar_type(1) - normalize_cmy_type::template process<magenta_p>(color_parameter.template get<magenta_p>()))
		+ gray_const_type::Bc() * (scalar_type(1) - normalize_cmy_type::template process< yellow_p>(color_parameter.template get< yellow_p>()));
		value = normalize_akin_type::template process<0>(component_parameter) / value;
		::color::operation::scale(color_parameter, scalar_type(1) - value);
	}

												 }
}

namespace color {
	namespace _internal {

		template< typename tag_left_name, typename tag_right_name >
		struct convert
		<
			::color::category::cmy< tag_left_name >
			,::color::category::cmy< tag_right_name>
			> {
			public:
			typedef ::color::category::cmy< tag_left_name > category_left_type;
			typedef ::color::category::cmy< tag_right_name> category_right_type;

			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,0>(container_right_trait_type::template get<0>(right)));
		container_left_trait_type::template set<1>(left, reformat_type::template process<1,1>(container_right_trait_type::template get<1>(right)));
		container_left_trait_type::template set<2>(left, reformat_type::template process<2,2>(container_right_trait_type::template get<2>(right)));
	}
																					};
											  }
}

namespace color {
	namespace akin {

		template< >struct cmyk< ::color::category::cmy_uint8 > {
			typedef ::color::category::cmyk_uint8 akin_type;
		};
		template< >struct cmyk< ::color::category::cmy_uint16 > {
			typedef ::color::category::cmyk_uint16 akin_type;
		};
		template< >struct cmyk< ::color::category::cmy_uint32 > {
			typedef ::color::category::cmyk_uint32 akin_type;
		};
		template< >struct cmyk< ::color::category::cmy_uint64 > {
			typedef ::color::category::cmyk_uint64 akin_type;
		};
		template< >struct cmyk< ::color::category::cmy_float > {
			typedef ::color::category::cmyk_float akin_type;
		};
		template< >struct cmyk< ::color::category::cmy_double > {
			typedef ::color::category::cmyk_double akin_type;
		};
		template< >struct cmyk< ::color::category::cmy_ldouble > {
			typedef ::color::category::cmyk_ldouble akin_type;
		};

							  }
}

namespace color {
	namespace akin {

		template< typename tag_name >
		struct cmyk< ::color::category::cmyk< tag_name > > {
			public:
			typedef ::color::category::cmyk< tag_name > akin_type;
										   };

		}
}

namespace color {
	namespace akin {

		template< >struct cmyk< ::color::category::gray_uint8 > {
			typedef ::color::category::cmyk_uint8 akin_type;
		};
		template< >struct cmyk< ::color::category::gray_uint16 > {
			typedef ::color::category::cmyk_uint16 akin_type;
		};
		template< >struct cmyk< ::color::category::gray_uint32 > {
			typedef ::color::category::cmyk_uint32 akin_type;
		};
		template< >struct cmyk< ::color::category::gray_uint64 > {
			typedef ::color::category::cmyk_uint64 akin_type;
		};
		template< >struct cmyk< ::color::category::gray_float > {
			typedef ::color::category::cmyk_float akin_type;
		};
		template< >struct cmyk< ::color::category::gray_double > {
			typedef ::color::category::cmyk_double akin_type;
		};
		template< >struct cmyk< ::color::category::gray_ldouble > {
			typedef ::color::category::cmyk_ldouble akin_type;
		};

							  }
}

namespace color {
	namespace akin {

		template< >struct cmyk< ::color::category::hsl_uint8 > {
			typedef ::color::category::cmyk_uint8 akin_type;
		};
		template< >struct cmyk< ::color::category::hsl_uint16 > {
			typedef ::color::category::cmyk_uint16 akin_type;
		};
		template< >struct cmyk< ::color::category::hsl_uint32 > {
			typedef ::color::category::cmyk_uint32 akin_type;
		};
		template< >struct cmyk< ::color::category::hsl_uint64 > {
			typedef ::color::category::cmyk_uint64 akin_type;
		};
		template< >struct cmyk< ::color::category::hsl_float > {
			typedef ::color::category::cmyk_float akin_type;
		};
		template< >struct cmyk< ::color::category::hsl_double > {
			typedef ::color::category::cmyk_double akin_type;
		};
		template< >struct cmyk< ::color::category::hsl_ldouble > {
			typedef ::color::category::cmyk_ldouble akin_type;
		};

							  }
}

namespace color {
	namespace akin {

		template< >struct cmyk< ::color::category::hsv_uint8 > {
			typedef ::color::category::cmyk_uint8 akin_type;
		};
		template< >struct cmyk< ::color::category::hsv_uint16 > {
			typedef ::color::category::cmyk_uint16 akin_type;
		};
		template< >struct cmyk< ::color::category::hsv_uint32 > {
			typedef ::color::category::cmyk_uint32 akin_type;
		};
		template< >struct cmyk< ::color::category::hsv_uint64 > {
			typedef ::color::category::cmyk_uint64 akin_type;
		};
		template< >struct cmyk< ::color::category::hsv_float > {
			typedef ::color::category::cmyk_float akin_type;
		};
		template< >struct cmyk< ::color::category::hsv_double > {
			typedef ::color::category::cmyk_double akin_type;
		};
		template< >struct cmyk< ::color::category::hsv_ldouble > {
			typedef ::color::category::cmyk_ldouble akin_type;
		};

							  }
}

namespace color {
	namespace akin {

		template< >struct cmyk< ::color::category::rgb_uint8 > {
			typedef ::color::category::cmyk_uint8 akin_type;
		};
		template< >struct cmyk< ::color::category::rgb_uint16 > {
			typedef ::color::category::cmyk_uint16 akin_type;
		};
		template< >struct cmyk< ::color::category::rgb_uint32 > {
			typedef ::color::category::cmyk_uint32 akin_type;
		};
		template< >struct cmyk< ::color::category::rgb_uint64 > {
			typedef ::color::category::cmyk_uint64 akin_type;
		};
		template< >struct cmyk< ::color::category::rgb_float > {
			typedef ::color::category::cmyk_float akin_type;
		};
		template< >struct cmyk< ::color::category::rgb_double > {
			typedef ::color::category::cmyk_double akin_type;
		};
		template< >struct cmyk< ::color::category::rgb_ldouble > {
			typedef ::color::category::cmyk_ldouble akin_type;
		};

							  }
}

namespace color {
	namespace akin {

		template< >struct cmyk< ::color::category::yiq_uint8 > {
			typedef ::color::category::cmyk_uint8 akin_type;
		};
		template< >struct cmyk< ::color::category::yiq_uint16 > {
			typedef ::color::category::cmyk_uint16 akin_type;
		};
		template< >struct cmyk< ::color::category::yiq_uint32 > {
			typedef ::color::category::cmyk_uint32 akin_type;
		};
		template< >struct cmyk< ::color::category::yiq_uint64 > {
			typedef ::color::category::cmyk_uint64 akin_type;
		};
		template< >struct cmyk< ::color::category::yiq_float > {
			typedef ::color::category::cmyk_float akin_type;
		};
		template< >struct cmyk< ::color::category::yiq_double > {
			typedef ::color::category::cmyk_double akin_type;
		};
		template< >struct cmyk< ::color::category::yiq_ldouble > {
			typedef ::color::category::cmyk_ldouble akin_type;
		};

							  }
}

namespace color {
	namespace akin {

		template< >struct cmyk< ::color::category::yuv_uint8 > {
			typedef ::color::category::cmyk_uint8 akin_type;
		};
		template< >struct cmyk< ::color::category::yuv_uint16 > {
			typedef ::color::category::cmyk_uint16 akin_type;
		};
		template< >struct cmyk< ::color::category::yuv_uint32 > {
			typedef ::color::category::cmyk_uint32 akin_type;
		};
		template< >struct cmyk< ::color::category::yuv_uint64 > {
			typedef ::color::category::cmyk_uint64 akin_type;
		};
		template< >struct cmyk< ::color::category::yuv_float > {
			typedef ::color::category::cmyk_float akin_type;
		};
		template< >struct cmyk< ::color::category::yuv_double > {
			typedef ::color::category::cmyk_double akin_type;
		};
		template< >struct cmyk< ::color::category::yuv_ldouble > {
			typedef ::color::category::cmyk_ldouble akin_type;
		};

							  }
}

namespace color {
	namespace trait {

		template <> struct info< ::color::category::cmyk_uint8 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::cmyk_uint16 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::cmyk_uint32 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::cmyk_uint64 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::cmyk_float > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::cmyk_double > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::cmyk_ldouble > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};

							   }
}

namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::cmyk_double >
		: public ::color::_internal::utility::bound::general< double, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::cmyk_float >
		: public ::color::_internal::utility::bound::general< float, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::cmyk_ldouble >
		: public ::color::_internal::utility::bound::general< long double, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::cmyk_uint16 >
		: public ::color::_internal::utility::bound::general< std::uint16_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::cmyk_uint32 >
		: public ::color::_internal::utility::bound::general< std::uint32_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::cmyk_uint64 >
		: public ::color::_internal::utility::bound::general< std::uint64_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::cmyk_uint8 >
		: public ::color::_internal::utility::bound::general< std::uint8_t, unsigned > {
		};

															}
}

namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::cmyk_double >
		: public ::color::_internal::utility::component::array< double, unsigned > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::cmyk_float >
		: public ::color::_internal::utility::component::array< float, unsigned> {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::cmyk_ldouble >
		: public ::color::_internal::utility::component::array< long double, unsigned> {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::cmyk_uint16 >
		: public ::color::_internal::utility::component::array< std::uint16_t, unsigned > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::cmyk_uint32 >
		: public ::color::_internal::utility::component::array< std::uint32_t, unsigned > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::cmyk_uint64 >
		: public ::color::_internal::utility::component::array< std::uint64_t, unsigned > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::cmyk_uint8 >
		: public ::color::_internal::utility::component::array< std::uint8_t, unsigned > {
		};

															  }
}

namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::cmyk_double >
		: public ::color::_internal::utility::container::array< double, 4 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::cmyk_float >
		: public ::color::_internal::utility::container::array< float, 4 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::cmyk_ldouble >
		: public ::color::_internal::utility::container::array< long double, 4 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::cmyk_uint16 >
		: public ::color::_internal::utility::container::array< std::uint16_t, 4 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::cmyk_uint32 >
		: public ::color::_internal::utility::container::array< std::uint32_t, 4 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::cmyk_uint64 >
		: public ::color::_internal::utility::container::array< std::uint64_t, 4 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::cmyk_uint8 >
		: public ::color::_internal::utility::container::array< std::uint8_t, 4 > {
		};

															  }
}

namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::cmyk_double >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::cmyk_float >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::cmyk_ldouble >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::cmyk_uint16 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::cmyk_uint32 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::cmyk_uint64 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::cmyk_uint8 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}

namespace color {
	namespace _internal {

		template< typename type_name >
		struct pick_cmyk {
			typedef ::color::category::cmyk_uint32 category_type;
		};

		template<> struct pick_cmyk< std::uint8_t > {
			typedef ::color::category::cmyk_uint8 category_type;
		};
		template<> struct pick_cmyk< std::uint16_t > {
			typedef ::color::category::cmyk_uint16 category_type;
		};
		template<> struct pick_cmyk< std::uint32_t > {
			typedef ::color::category::cmyk_uint32 category_type;
		};
		template<> struct pick_cmyk< std::uint64_t > {
			typedef ::color::category::cmyk_uint64 category_type;
		};
		template<> struct pick_cmyk< float > {
			typedef ::color::category::cmyk_float category_type;
		};
		template<> struct pick_cmyk< double > {
			typedef ::color::category::cmyk_double category_type;
		};
		template<> struct pick_cmyk< long double > {
			typedef ::color::category::cmyk_ldouble category_type;
		};
								   }

	template< typename type_name >
	using cmyk = ::color::model< typename ::color::_internal::pick_cmyk< type_name >::category_type >;

}

namespace color {
	namespace place {
		namespace _internal {

			template< typename tag_name >
			struct cyan< ::color::category::cmyk< tag_name > > {
				public:
				typedef ::color::category::cmyk< tag_name > category_type;
				typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

				enum { position_enum = 0 };
				enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
													  };

											   }
			}
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename tag_name >
			struct magenta< ::color::category::cmyk< tag_name > > {
				public:
				typedef ::color::category::cmyk< tag_name > category_type;
				typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

				enum { position_enum = 1 };
				enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
													  };

											   }
			}
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename tag_name >
			struct yellow< ::color::category::cmyk< tag_name > > {
				public:
				typedef ::color::category::cmyk< tag_name > category_type;
				typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

				enum { position_enum = 2 };
				enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
													  };

											   }
			}
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename category_name >
			struct key {
				public:
				typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

				enum { position_enum = -5 };
				enum { has_enum = false };

	static index_instance_type position() {
		return position_enum;
	}
													  };

			}

	template< typename category_name >
	inline

	typename ::color::trait::index< category_name >::instance_type
	key() {
		return ::color::place::_internal::key<category_name>::position();
	}

										 }
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename tag_name >
			struct key< ::color::category::cmyk< tag_name > > {
				public:
				typedef ::color::category::cmyk< tag_name > category_type;
				typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

				enum { position_enum = 3 };
				enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
													  };

											   }
			}
}

namespace color {
	namespace check {
		namespace _internal {
			namespace _privateCMYK {

				template< typename category_name >
				struct integrity {
					public:
					typedef category_name category_type;

					typedef ::color::model<category_type> model_type;
					typedef ::color::trait::bound< category_type > bound_type;
					typedef ::color::trait::scalar< category_type > scalar_trait_type;

	enum {
		cyan_p = ::color::place::_internal::cyan<category_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_type>::position_enum
		, yellow_p = ::color::place::_internal::yellow<category_type>::position_enum
		, key_p = ::color::place::_internal::key<category_type>::position_enum
	};

	static bool process(model_type const& m) {
		if(m.template get<key_p>() == bound_type::template maximum<key_p>()) {
			return false;
		}
		if(m.template get< cyan_p>() == bound_type::template minimum< cyan_p>()) {
			return true;
		}
		if(m.template get<magenta_p>() == bound_type::template minimum<magenta_p>()) {
			return true;
		}
		if(m.template get< yellow_p>() == bound_type::template minimum< yellow_p>()) {
			return true;
		}
		return false;
	}
					 };

	  }

	template< > struct integrity< ::color::category::cmyk_uint8 > : public ::color::check::_internal::_privateCMYK::integrity< ::color::category::cmyk_uint8 > { };
	template< > struct integrity< ::color::category::cmyk_uint16 > : public ::color::check::_internal::_privateCMYK::integrity< ::color::category::cmyk_uint16 > { };
	template< > struct integrity< ::color::category::cmyk_uint32 > : public ::color::check::_internal::_privateCMYK::integrity< ::color::category::cmyk_uint32 > { };
	template< > struct integrity< ::color::category::cmyk_uint64 > : public ::color::check::_internal::_privateCMYK::integrity< ::color::category::cmyk_uint64 > { };

	template<>
	struct integrity< ::color::category::cmyk_float> {
		public:
		typedef ::color::category::cmyk_float category_type;

		typedef ::color::model<category_type> model_type;
		typedef ::color::trait::bound< category_type > bound_type;
		typedef ::color::trait::scalar< category_type > scalar_trait_type;

	static bool process(model_type const& m) {
		if(m.template get<3>() == bound_type::template maximum<3>()) {
			return false;
		}
		if(true == scalar_trait_type::is_small(m.template get<0>() - bound_type::template minimum<0>())) {
			return true;
		}
		if(true == scalar_trait_type::is_small(m.template get<1>() - bound_type::template minimum<1>())) {
			return true;
		}
		if(true == scalar_trait_type::is_small(m.template get<2>() - bound_type::template minimum<2>())) {
			return true;
		}
		return false;
	}
										  };

	template<>
	struct integrity< ::color::category::cmyk_double > {
		public:
		typedef ::color::category::cmyk_double category_type;

		typedef ::color::model<category_type> model_type;
		typedef ::color::trait::bound< category_type > bound_type;
		typedef ::color::trait::scalar< category_type > scalar_trait_type;

	static bool process(model_type const& m) {
		if(m.template get<3>() == bound_type::template maximum<3>()) {
			return false;
		}
		if(true == scalar_trait_type::is_small(m.template get<0>() - bound_type::template minimum<0>())) {
			return true;
		}
		if(true == scalar_trait_type::is_small(m.template get<1>() - bound_type::template minimum<1>())) {
			return true;
		}
		if(true == scalar_trait_type::is_small(m.template get<2>() - bound_type::template minimum<2>())) {
			return true;
		}
		return false;
	}
										  };

	template<>
	struct integrity< ::color::category::cmyk_ldouble > {
		public:
		typedef ::color::category::cmyk_ldouble category_type;

		typedef ::color::model<category_type> model_type;
		typedef ::color::trait::bound< category_type > bound_type;
		typedef ::color::trait::scalar< category_type > scalar_trait_type;

	static bool process(model_type const& m) {
		if(m.template get<3>() == bound_type::template maximum<3>()) {
			return false;
		}
		if(true == scalar_trait_type::is_small(m.template get<0>() - bound_type::template minimum<0>())) {
			return true;
		}
		if(true == scalar_trait_type::is_small(m.template get<1>() - bound_type::template minimum<1>())) {
			return true;
		}
		if(true == scalar_trait_type::is_small(m.template get<2>() - bound_type::template minimum<2>())) {
			return true;
		}
		return false;
	}
										  };

	  }
										  }
}

namespace color {
	namespace fix {
		namespace _internal {

			template< typename category_name >
			struct unique {
				public:
				typedef category_name category_type;

				typedef ::color::model<category_type> model_type;

	static void process(model_type & m) {
	}

	static void process(model_type & result, model_type const& right) {
	}
									  };

			}

	template< typename category_name >
	void unique
	(
		::color::model<category_name> & result
					  ) {
		::color::fix::_internal::unique<category_name>::process(result);
	}

	template< typename category_name >
	void unique
	(
		::color::model<category_name> & result
		,::color::model<category_name> const& right
					   ) {
		::color::fix::_internal::unique<category_name>::process(result, right);
	}

								   }
}

namespace color {
	namespace fix {
		namespace _internal {

			template< typename tag_name >
			struct unique< ::color::category::cmyk< tag_name > > {
				public:
				typedef ::color::category::cmyk< tag_name > category_type;

				typedef ::color::model<category_type> model_type;
				typedef ::color::trait::bound<category_type> bound_type;
				typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
				typedef ::color::operation::_internal::invert< category_type > invert_type;
				typedef ::color::_internal::diverse< category_type > diverse_type;
				typedef ::color::_internal::normalize< category_type > normalize_type;

	enum {
		cyan_p = ::color::place::_internal::cyan<category_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_type>::position_enum
		, yellow_p = ::color::place::_internal::yellow<category_type>::position_enum
		, key_p = ::color::place::_internal::key<category_type>::position_enum
	};

	static void process(model_type &result) {
		if(result.template get<key_p>() == bound_type::template maximum<key_p>()) {
			result.template set<cyan_p>(bound_type::template minimum<cyan_p>());
			result.template set<magenta_p>(bound_type::template minimum<magenta_p>());
			result.template set<yellow_p>(bound_type::template minimum<yellow_p>());
			return ;
		}
		if(result.template get<cyan_p>() == bound_type::template minimum<cyan_p>()) {
			return;
		}
		if(result.template get<magenta_p>() == bound_type::template minimum<magenta_p>()) {
			return;
		}
		if(result.template get<yellow_p>() == bound_type::template minimum<yellow_p>()) {
			return;
		}
		scalar_type cyan = normalize_type::template process<cyan_p>(result.template get<cyan_p>());
		scalar_type key = normalize_type::template process<key_p>(result.template get<key_p>());
		result.template set<cyan_p>(bound_type::template minimum<cyan_p>());
		result.template set<magenta_p>(bound_type::template minimum<magenta_p>());
		result.template set<yellow_p>(bound_type::template minimum<yellow_p>());
		result.template set<key_p>(diverse_type::template process<key_p>((1- (1- cyan)*(1-key))));
	}

	static void process(model_type &result, model_type const& right) {
		if(result.template get<key_p>() == bound_type::template maximum<key_p>()) {
			result.template set<cyan_p>(bound_type::template minimum<cyan_p>());
			result.template set<magenta_p>(bound_type::template minimum<magenta_p>());
			result.template set<yellow_p>(bound_type::template minimum<yellow_p>());
			result.template set<key_p>(bound_type::template maximum<key_p>());
			return ;
		}
		result = right;
		if(result.template get<cyan_p>() == bound_type::template minimum<cyan_p>()) {
			return;
		}
		if(result.template get<magenta_p>() == bound_type::template minimum<magenta_p>()) {
			return;
		}
		if(result.template get<yellow_p>() == bound_type::template minimum<yellow_p>()) {
			return;
		}
		scalar_type cyan = normalize_type::template process<cyan_p>(result.template get<cyan_p>());
		scalar_type key = normalize_type::template process<key_p>(result.template get<key_p>());
		result.template set<cyan_p>(bound_type::template minimum<cyan_p>());
		result.template set<magenta_p>(bound_type::template minimum<magenta_p>());
		result.template set<yellow_p>(bound_type::template minimum<yellow_p>());
		result.template set<key_p>(diverse_type::template process<key_p>((1- (1- cyan)*(1-key))));
	}

							  };

					   }
								 }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::gray< ::color::category::cmyk<tag_name> >::akin_type >::return_type
	gray(::color::model< ::color::category::cmyk<tag_name> > const& color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_type;
		typedef typename ::color::trait::scalar< category_type >::instance_type scalar_type;
		typedef typename ::color::akin::gray< category_type >::akin_type akin_type;
		typedef ::color::_internal::diverse< akin_type > diverse_type;
		typedef ::color::_internal::normalize< category_type > normalize_type;
		typedef ::color::constant::gray< akin_type > gray_const_type;
		enum {
			cyan_p = ::color::place::_internal::cyan<category_type>::position_enum
			,magenta_p = ::color::place::_internal::magenta<category_type>::position_enum
			, yellow_p = ::color::place::_internal::yellow<category_type>::position_enum
			, key_p = ::color::place::_internal::key<category_type>::position_enum
		};
		scalar_type c = normalize_type::template process< cyan_p>(color_parameter.template get< cyan_p>());
		scalar_type m = normalize_type::template process<magenta_p>(color_parameter.template get<magenta_p>());
		scalar_type y = normalize_type::template process< yellow_p>(color_parameter.template get< yellow_p>());
		scalar_type k = normalize_type::template process< key_p>(color_parameter.template get< key_p>());
		scalar_type value =
		(gray_const_type::Rc() * (scalar_type(1)-c)
		 + gray_const_type::Gc() * (scalar_type(1)-m)
		 + gray_const_type::Bc() * (scalar_type(1)-y)) * (scalar_type(1)-k);
		return diverse_type::template process<0>(value);
	}

										 }
}

namespace color {
	namespace akin {

		template< >struct rgb< ::color::category::cmyk_uint8 > {
			typedef ::color::category::rgb_uint8 akin_type;
		};
		template< >struct rgb< ::color::category::cmyk_uint16 > {
			typedef ::color::category::rgb_uint16 akin_type;
		};
		template< >struct rgb< ::color::category::cmyk_uint32 > {
			typedef ::color::category::rgb_uint32 akin_type;
		};
		template< >struct rgb< ::color::category::cmyk_uint64 > {
			typedef ::color::category::rgb_uint64 akin_type;
		};
		template< >struct rgb< ::color::category::cmyk_float > {
			typedef ::color::category::rgb_float akin_type;
		};
		template< >struct rgb< ::color::category::cmyk_double > {
			typedef ::color::category::rgb_double akin_type;
		};
		template< >struct rgb< ::color::category::cmyk_ldouble > {
			typedef ::color::category::rgb_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::rgb<::color::category::cmyk< tag_name > >::akin_type >::return_type
	red(::color::model< ::color::category::cmyk< tag_name > > const& color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_type;
		typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
		typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
		enum { red_p = ::color::place::_internal::red<akin_type>::position_enum };
		enum { cyan_p = ::color::place::_internal::cyan< category_type >::position_enum };
		enum { key_p = ::color::place::_internal::key< category_type >::position_enum };
		typedef ::color::_internal::diverse< akin_type > diverse_type;
		typedef ::color::_internal::normalize<category_type> normalize_type;
		scalar_type c = normalize_type::template process< cyan_p >(color_parameter.template get< cyan_p >());
		scalar_type k = normalize_type::template process< key_p >(color_parameter.template get< key_p >());
		scalar_type r = (scalar_type(1)-c) * (scalar_type(1)-k);
		return diverse_type::template process<red_p>(r);
	}

										 }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::rgb<::color::category::cmyk< tag_name > >::akin_type >::return_type
	green(::color::model< ::color::category::cmyk< tag_name > > const& color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_type;
		typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
		typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
		enum { green_p = ::color::place::_internal::green<akin_type>::position_enum };
		enum { magenta_p = ::color::place::_internal::magenta< category_type >::position_enum };
		enum { key_p = ::color::place::_internal::key< category_type >::position_enum };
		typedef ::color::_internal::diverse< akin_type > diverse_type;
		typedef ::color::_internal::normalize<category_type> normalize_type;
		scalar_type m = normalize_type::template process< magenta_p >(color_parameter.template get< magenta_p >());
		scalar_type k = normalize_type::template process< key_p >(color_parameter.template get< key_p >());
		scalar_type g = (1-m) * (1-k);
		return diverse_type::template process<green_p>(g);
	}

										 }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::rgb<::color::category::cmyk< tag_name > >::akin_type >::return_type
	blue(::color::model< ::color::category::cmyk< tag_name > > const& color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_type;
		typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
		typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
		enum { blue_p = ::color::place::_internal::blue< akin_type >::position_enum };
		enum { yellow_p = ::color::place::_internal::yellow< category_type >::position_enum };
		enum { key_p = ::color::place::_internal::key< category_type >::position_enum };
		typedef ::color::_internal::diverse< akin_type > diverse_type;
		typedef ::color::_internal::normalize<category_type> normalize_type;
		scalar_type y = normalize_type::template process< yellow_p >(color_parameter.template get<yellow_p>());
		scalar_type k = normalize_type::template process< key_p >(color_parameter.template get< key_p >());
		scalar_type b = (1-y) * (1-k);
		return diverse_type::template process<blue_p>(b);
	}

										 }
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		red
		(
			::color::model< ::color::category::cmyk< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::cmyk< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::cmyk< tag_name > category_type;
		typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
		enum { red_p = ::color::place::_internal::red<akin_type>::position_enum };
		::color::model< akin_type > rgb(color_parameter);
		rgb.template set<red_p> (component_parameter);
		color_parameter = rgb;
	}

					}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		green
		(
			::color::model< ::color::category::cmyk< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::cmyk< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::cmyk< tag_name > category_type;
		typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
		enum { green_p = ::color::place::_internal::green< akin_type >::position_enum };
		::color::model< akin_type > rgb(color_parameter);
		rgb.template set< green_p > (component_parameter);
		color_parameter = rgb;
	}

					}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		blue
		(
			::color::model< ::color::category::cmyk< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::cmyk< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::cmyk< tag_name > category_type;
		typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
		enum { blue_p = ::color::place::_internal::blue< akin_type >::position_enum };
		::color::model< akin_type > rgb(color_parameter);
		rgb.template set< blue_p > (component_parameter);
		color_parameter = rgb;
	}

					}
}

namespace color {
	namespace akin {

		template< >struct rgb< ::color::category::hsl_uint8 > {
			typedef ::color::category::rgb_uint8 akin_type;
		};
		template< >struct rgb< ::color::category::hsl_uint16 > {
			typedef ::color::category::rgb_uint16 akin_type;
		};
		template< >struct rgb< ::color::category::hsl_uint32 > {
			typedef ::color::category::rgb_uint32 akin_type;
		};
		template< >struct rgb< ::color::category::hsl_uint64 > {
			typedef ::color::category::rgb_uint64 akin_type;
		};
		template< >struct rgb< ::color::category::hsl_float > {
			typedef ::color::category::rgb_float akin_type;
		};
		template< >struct rgb< ::color::category::hsl_double > {
			typedef ::color::category::rgb_double akin_type;
		};
		template< >struct rgb< ::color::category::hsl_ldouble > {
			typedef ::color::category::rgb_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct rgb< ::color::category::hsv_uint8 > {
			typedef ::color::category::rgb_uint8 akin_type;
		};
		template< >struct rgb< ::color::category::hsv_uint16 > {
			typedef ::color::category::rgb_uint16 akin_type;
		};
		template< >struct rgb< ::color::category::hsv_uint32 > {
			typedef ::color::category::rgb_uint32 akin_type;
		};
		template< >struct rgb< ::color::category::hsv_uint64 > {
			typedef ::color::category::rgb_uint64 akin_type;
		};
		template< >struct rgb< ::color::category::hsv_float > {
			typedef ::color::category::rgb_float akin_type;
		};
		template< >struct rgb< ::color::category::hsv_double > {
			typedef ::color::category::rgb_double akin_type;
		};
		template< >struct rgb< ::color::category::hsv_ldouble > {
			typedef ::color::category::rgb_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< typename tag_name >
		struct rgb< ::color::category::rgb< tag_name > > {
			public:
			typedef ::color::category::rgb< tag_name > akin_type;
										  };

		}
}

namespace color {
	namespace akin {

		template< >struct rgb< ::color::category::yiq_uint8 > {
			typedef ::color::category::rgb_uint8 akin_type;
		};
		template< >struct rgb< ::color::category::yiq_uint16 > {
			typedef ::color::category::rgb_uint16 akin_type;
		};
		template< >struct rgb< ::color::category::yiq_uint32 > {
			typedef ::color::category::rgb_uint32 akin_type;
		};
		template< >struct rgb< ::color::category::yiq_uint64 > {
			typedef ::color::category::rgb_uint64 akin_type;
		};
		template< >struct rgb< ::color::category::yiq_float > {
			typedef ::color::category::rgb_float akin_type;
		};
		template< >struct rgb< ::color::category::yiq_double > {
			typedef ::color::category::rgb_double akin_type;
		};
		template< >struct rgb< ::color::category::yiq_ldouble > {
			typedef ::color::category::rgb_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct rgb< ::color::category::yuv_uint8 > {
			typedef ::color::category::rgb_uint8 akin_type;
		};
		template< >struct rgb< ::color::category::yuv_uint16 > {
			typedef ::color::category::rgb_uint16 akin_type;
		};
		template< >struct rgb< ::color::category::yuv_uint32 > {
			typedef ::color::category::rgb_uint32 akin_type;
		};
		template< >struct rgb< ::color::category::yuv_uint64 > {
			typedef ::color::category::rgb_uint64 akin_type;
		};
		template< >struct rgb< ::color::category::yuv_float > {
			typedef ::color::category::rgb_float akin_type;
		};
		template< >struct rgb< ::color::category::yuv_double > {
			typedef ::color::category::rgb_double akin_type;
		};
		template< >struct rgb< ::color::category::yuv_ldouble > {
			typedef ::color::category::rgb_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace trait {

		template <> struct info< ::color::category::rgb_uint8 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::rgb_uint16 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::rgb_uint32 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::rgb_uint64 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::rgb_float > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::rgb_double > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::rgb_ldouble > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};

		template <> struct info< ::color::category::rgb_split233 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::rgb_split323 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::rgb_split332 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::rgb_split422 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::rgb_split556 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::rgb_split565 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::rgb_split655 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};

							   }
}

namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::rgb_float >
		: public ::color::_internal::utility::bound::general< float, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::rgb_double >
		: public ::color::_internal::utility::bound::general< double, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::rgb_ldouble >
		: public ::color::_internal::utility::bound::general< long double, unsigned > {
		};

															}
}

namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::rgb_uint8 >
		: public ::color::_internal::utility::bound::general< std::uint8_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::rgb_uint16 >
		: public ::color::_internal::utility::bound::general< std::uint16_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::rgb_uint32 >
		: public ::color::_internal::utility::bound::general< std::uint32_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::rgb_uint64 >
		: public ::color::_internal::utility::bound::general< std::uint64_t, unsigned > {
		};

															}
}

namespace color {
	namespace trait {

		template< typename value_name, unsigned first_position, unsigned second_position, unsigned third_position >
		struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< value_name, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::bound::general< value_name, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< typename value_name, unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
		struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, first_position, second_position, third_position,fourth_position > > >
		: public ::color::_internal::utility::bound::general< value_name, unsigned > {
		};

															}
}

namespace color {
	namespace _internal {
		namespace utility {
			namespace bound {

				template
				<
					typename unsigned_name
					,typename index_name
					,unsigned first_size, unsigned second_size, unsigned third_size
					>
				struct split3 {
					public:
					typedef unsigned_name unsigned_type;
					typedef index_name index_type;

					typedef ::color::_internal::utility::type::traitP< unsigned_type > trait_type;
					typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

					typedef typename trait_type::instance_type instance_type;
					typedef typename trait_type::return_image_type return_image_type;

					typedef typename index_trait_type::instance_type index_instance_type;
					typedef typename index_trait_type::input_const_type index_input_const_type;

	enum {
		first_max = (1 << first_size) - 1,
		second_max = (1 << second_size) - 1,
		third_max = (1 << third_size) - 1,
	};

	template< index_instance_type index >
	static return_image_type maximum() {
		static instance_type max_list[] = { first_max, second_max, third_max };
		return max_list[index];
	}

	static return_image_type maximum(index_input_const_type index) {
		static instance_type max_list[] = { first_max, second_max, third_max };
		return max_list[index];
	}

	template< index_instance_type index >
	static return_image_type minimum() {
		static instance_type value=0;
		return value;
	}

	static return_image_type minimum(index_input_const_type index) {
		static instance_type value=0;
		return value;
	}

	template< index_instance_type index >
	static return_image_type range() {
		static instance_type max_list[] = { first_max, second_max, third_max };
		return max_list[index];
	}

	static return_image_type range(index_input_const_type index) {
		static instance_type max_list[] = { first_max, second_max, third_max };
		return max_list[index];
	}
			};

	using split233 = ::color::_internal::utility::bound::split3< std::uint8_t, unsigned, 2, 3, 3 >;
	using split323 = ::color::_internal::utility::bound::split3< std::uint8_t, unsigned, 3, 2, 3 >;
	using split332 = ::color::_internal::utility::bound::split3< std::uint8_t, unsigned, 3, 3, 2 >;

	using split422 = ::color::_internal::utility::bound::split3< std::uint8_t, unsigned, 4, 2, 2 >;
	using split242 = ::color::_internal::utility::bound::split3< std::uint8_t, unsigned, 2, 4, 2 >;
	using split224 = ::color::_internal::utility::bound::split3< std::uint8_t, unsigned, 2, 2, 4 >;

	using split655 = ::color::_internal::utility::bound::split3< std::uint16_t, unsigned, 6, 5, 5 >;
	using split565 = ::color::_internal::utility::bound::split3< std::uint16_t, unsigned, 5, 6, 5 >;
	using split556 = ::color::_internal::utility::bound::split3< std::uint16_t, unsigned, 5, 5, 6 >;

															   }
															   }
															   }
}

namespace color {
	namespace trait {

		template< unsigned first_position, unsigned second_position, unsigned third_position >
		struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split233_t, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::bound::split233 {
		};

		template< unsigned first_position, unsigned second_position, unsigned third_position >
		struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split323_t, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::bound::split323 {
		};

		template< unsigned first_position, unsigned second_position, unsigned third_position >
		struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split332_t, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::bound::split332 {
		};

																						}
}

namespace color {
	namespace trait {

		template< unsigned first_position, unsigned second_position, unsigned third_position >
		struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split422_t, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::bound::split422 {
		};

		template< unsigned first_position, unsigned second_position, unsigned third_position >
		struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split242_t, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::bound::split242 {
		};

		template< unsigned first_position, unsigned second_position, unsigned third_position >
		struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split224_t, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::bound::split224 {
		};

																						}
}

namespace color {
	namespace trait {

		template< unsigned first_position, unsigned second_position, unsigned third_position >
		struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split556_t, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::bound::split556 {
		};

		template< unsigned first_position, unsigned second_position, unsigned third_position >
		struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split565_t, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::bound::split565 {
		};

		template< unsigned first_position, unsigned second_position, unsigned third_position >
		struct bound< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split655_t, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::bound::split655 {
		};

																						}
}

namespace color {
	namespace _internal {
		namespace utility {
			namespace bound {

				template
				<
					typename unsigned_name
					,typename index_name
					,unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size
					>
				struct split4 {
					public:
					typedef unsigned_name unsigned_type;
					typedef index_name index_type;

					typedef ::color::_internal::utility::type::traitP< unsigned_type > trait_type;
					typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

					typedef typename trait_type::instance_type instance_type;
					typedef typename trait_type::return_image_type return_image_type;

					typedef typename index_trait_type::instance_type index_instance_type;
					typedef typename index_trait_type::input_const_type index_input_const_type;

	enum {
		first_max = (1 << first_size) - 1,
		second_max = (1 << second_size) - 1,
		third_max = (1 << third_size) - 1,
		fourth_max = (1 << fourth_size) - 1,
	};

	template< index_instance_type index >
	static return_image_type maximum() {
		static instance_type max_list[] = { first_max, second_max, third_max, fourth_max };
		return max_list[index];
	}

	static return_image_type maximum(index_input_const_type index) {
		static instance_type max_list[] = { first_max, second_max, third_max, fourth_max };
		return max_list[index];
	}

	template< index_instance_type index >
	static return_image_type minimum() {
		static instance_type value=0;
		return value;
	}

	static return_image_type minimum(index_input_const_type index) {
		static instance_type value=0;
		return value;
	}

	template< index_instance_type index >
	static return_image_type range() {
		static instance_type max_list[] = { first_max, second_max, third_max, fourth_max };
		return max_list[index];
	}

	static return_image_type range(index_input_const_type index) {
		static instance_type max_list[] = { first_max, second_max, third_max, fourth_max };
		return max_list[index];
	}
			};

	using split2222 = ::color::_internal::utility::bound::split4< std::uint8_t, unsigned, 2, 2, 2, 2 >;
	using split4444 = ::color::_internal::utility::bound::split4< std::uint16_t, unsigned, 4, 4, 4, 4 >;
	using split6666 = ::color::_internal::utility::bound::split4< std::uint16_t, unsigned, 6, 6, 6, 6 >;

	using split1555 = ::color::_internal::utility::bound::split4< std::uint16_t, unsigned, 1, 5, 5, 5 >;
	using split5551 = ::color::_internal::utility::bound::split4< std::uint16_t, unsigned, 5, 5, 5, 1 >;

	using split6666 = ::color::_internal::utility::bound::split4< std::uint16_t, unsigned, 6, 6, 6, 6 >;

	using split8888 = ::color::_internal::utility::bound::split4< std::uint32_t, unsigned, 8, 8, 8, 8 >;

	using splitAAA2 = ::color::_internal::utility::bound::split4< std::uint32_t, unsigned, 10, 10, 10, 2 >;
	using split2AAA = ::color::_internal::utility::bound::split4< std::uint32_t, unsigned, 2, 10, 10, 10 >;

	using splitGGGG = ::color::_internal::utility::bound::split4< std::uint32_t, unsigned, 16, 16, 16, 16 >;

																}
																}
																}
}

namespace color {
	namespace trait {

		template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
		struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitAAA2_t, first_position, second_position, third_position, fourth_position > > >
		: public ::color::_internal::utility::bound::splitAAA2 {
		};

		template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
		struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2AAA_t, first_position, second_position, third_position, fourth_position > > >
		: public ::color::_internal::utility::bound::split2AAA {
		};

																						 }
}

namespace color {
	namespace trait {

		template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
		struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2222_t, first_position, second_position, third_position, fourth_position > > >
		: public ::color::_internal::utility::bound::split2222 {
		};

																						 }
}
namespace color {
	namespace trait {

		template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
		struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split4444_t, first_position, second_position, third_position, fourth_position > > >
		: public ::color::_internal::utility::bound::split4444 {
		};

																						 }
}
namespace color {
	namespace trait {

		template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
		struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split8888_t, first_position, second_position, third_position, fourth_position > > >
		: public ::color::_internal::utility::bound::split8888 {
		};

																						 }
}
namespace color {
	namespace trait {

		template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
		struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitGGGG_t, first_position, second_position, third_position, fourth_position > > >
		: public ::color::_internal::utility::bound::splitGGGG {
		};

																						 }
}

namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::rgb_float >
		: public ::color::_internal::utility::container::array< float, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::rgb_double >
		: public ::color::_internal::utility::container::array< double, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::rgb_ldouble >
		: public ::color::_internal::utility::container::array< long double, 3 > {
		};

															  }
}

namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::rgb_uint8 >
		: public ::color::_internal::utility::container::array< std::uint8_t, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::rgb_uint16 >
		: public ::color::_internal::utility::container::array< std::uint16_t, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::rgb_uint32 >
		: public ::color::_internal::utility::container::array< std::uint32_t, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::rgb_uint64 >
		: public ::color::_internal::utility::container::array< std::uint64_t, 3 > {
		};

															  }
}

namespace color {
	namespace trait {

		template< typename value_name, unsigned first_position, unsigned second_position, unsigned third_position >
		struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< value_name, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::container::array< value_name, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< typename value_name, unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
		struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, first_position, second_position, third_position,fourth_position > > >
		: public ::color::_internal::utility::container::array< value_name, 4 > {
		};

															  }
}

namespace color {
	namespace _internal {
		namespace utility {
			namespace container {

				template
				<
					typename container_name,
					typename component_name,
					typename index_name
					,unsigned first_size, unsigned second_size, unsigned third_size
					>
				struct split3 {
					public:
					typedef container_name instance_type;
					typedef component_name value_type;
					typedef index_name index_type;

					typedef instance_type const const_type;
					typedef instance_type const& return_image_type;
					typedef instance_type & return_type;
					typedef instance_type & return_original_type;
					typedef instance_type const& input_const_type;
					typedef instance_type & input_type;
					typedef instance_type & output_type;

					typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

					typedef typename index_trait_type::instance_type index_instance_type;

					typedef typename index_trait_type::input_const_type index_input_const_type;
					typedef typename index_trait_type::return_image_type index_return_image_type;

					typedef ::color::_internal::utility::type::traitP< value_type > component_trait_type;

					typedef typename component_trait_type::instance_type component_type;
					typedef typename component_trait_type::const_type component_const_type;
					typedef typename component_trait_type::return_image_type component_return_const_type;
					typedef typename component_trait_type::input_const_type component_input_const_type;

					typedef void set_return_type;

	enum { size_enum = 3 };
	enum {
		first_position = 0,
		second_position = first_size,
		third_position = first_size + second_size
	};

	enum {
		first_mask = (1 << first_size)-1 ,
		second_mask = (1 << second_size)-1 ,
		third_mask = (1 << third_size)-1
	};

	static component_return_const_type get(input_const_type container, index_input_const_type index) {
		switch(index) {
		default:
		case(0):
			return ((container >> (first_position)) & first_mask);
		case(1):
			return ((container >> (second_position)) & second_mask);
		case(2):
			return ((container >> (third_position)) & third_mask);
		}
		return 0;
	}

	template< index_instance_type index >
	static component_return_const_type get(input_const_type container) {
		switch(index) {
		case(0):
			return ((container >> (first_position)) & first_mask);
		case(1):
			return ((container >> (second_position)) & second_mask);
		case(2):
			return ((container >> (third_position)) & third_mask);
		}
		return 0;
	}

	static set_return_type set(input_type container, index_input_const_type index, component_input_const_type value) {
		switch(index) {
		default:
		case(0) :
			container = (container & ~(first_mask << (first_position))) | (((instance_type)value) << (first_position));
						 break;
					 case(1) :
						 container = (container & ~(second_mask << (second_position))) | (((instance_type)value) << (second_position));
									  break;
								  case(2) :
									  container = (container & ~(third_mask << (third_position))) | (((instance_type)value) << (third_position));
												   break;
		}
	}

							  template< index_instance_type index >
	static set_return_type set(input_type container, component_input_const_type value) {
		switch(index) {
		case(0) :
			container = (container & ~(first_mask << (first_position))) | (((instance_type)value) << (first_position));
						 break;
					 case(1) :
						 container = (container & ~(second_mask << (second_position))) | (((instance_type)value) << (second_position));
									  break;
								  case(2) :
									  container = (container & ~(third_mask << (third_position))) | (((instance_type)value) << (third_position));
												   break;
		}
	}

	static index_return_image_type size() {
		static const index_instance_type local_length = size_enum;
		return local_length;
	}
																							};

	using split233 = ::color::_internal::utility::container::split3< std::uint8_t, std::uint8_t, unsigned, 2, 3, 3 >;
	using split323 = ::color::_internal::utility::container::split3< std::uint8_t, std::uint8_t, unsigned, 3, 2, 3 >;
	using split332 = ::color::_internal::utility::container::split3< std::uint8_t, std::uint8_t, unsigned, 3, 3, 2 >;

	using split422 = ::color::_internal::utility::container::split3< std::uint8_t, std::uint8_t, unsigned, 4, 2, 2 >;
	using split242 = ::color::_internal::utility::container::split3< std::uint8_t, std::uint8_t, unsigned, 2, 4, 2 >;
	using split224 = ::color::_internal::utility::container::split3< std::uint8_t, std::uint8_t, unsigned, 2, 2, 4 >;

	using split655 = ::color::_internal::utility::container::split3< std::uint16_t, std::uint8_t, unsigned, 6, 5, 5 >;
	using split565 = ::color::_internal::utility::container::split3< std::uint16_t, std::uint8_t, unsigned, 5, 6, 5 >;
	using split556 = ::color::_internal::utility::container::split3< std::uint16_t, std::uint8_t, unsigned, 5, 5, 6 >;

																   }
																   }
																   }
}

namespace color {
	namespace trait {

		template< unsigned first_index, unsigned second_index, unsigned third_index >
		struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split233_t, first_index, second_index, third_index > > >
		: public ::color::_internal::utility::container::split233 {
		};

		template< unsigned first_position, unsigned second_position, unsigned third_position >
		struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split323_t, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::container::split323 {
		};

		template< unsigned first_position, unsigned second_position, unsigned third_position >
		struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split332_t, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::container::split332 {
		};

																							}
}

namespace color {
	namespace trait {

		template< unsigned first_position, unsigned second_position, unsigned third_position >
		struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split422_t, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::container::split422 {
		};

		template< unsigned first_position, unsigned second_position, unsigned third_position >
		struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split242_t, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::container::split242 {
		};

		template< unsigned first_position, unsigned second_position, unsigned third_position >
		struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split224_t, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::container::split224 {
		};

																							}
}

namespace color {
	namespace trait {

		template< unsigned first_position, unsigned second_position, unsigned third_position >
		struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split655_t, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::container::split655 {
		};

		template< unsigned first_position, unsigned second_position, unsigned third_position >
		struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split565_t, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::container::split565 {
		};

		template< unsigned first_position, unsigned second_position, unsigned third_position >
		struct container< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split556_t, first_position, second_position, third_position > > >
		: public ::color::_internal::utility::container::split556 {
		};

																							}
}

namespace color {
	namespace _internal {
		namespace utility {
			namespace container {

				template
				<
					typename container_name,
					typename component_name,
					typename index_name
					,unsigned first_size, unsigned second_size, unsigned third_size, unsigned fourth_size
					>
				struct split4 {
					public:
					typedef container_name instance_type;
					typedef component_name value_type;
					typedef index_name index_type;

					typedef instance_type const const_type;
					typedef instance_type const& return_image_type;
					typedef instance_type & return_type;
					typedef instance_type & return_original_type;
					typedef instance_type const& input_const_type;
					typedef instance_type & input_type;
					typedef instance_type & output_type;

					typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

					typedef typename index_trait_type::instance_type index_instance_type;

					typedef typename index_trait_type::input_const_type index_input_const_type;
					typedef typename index_trait_type::return_image_type index_return_image_type;

					typedef ::color::_internal::utility::type::traitP< value_type > component_trait_type;

					typedef typename component_trait_type::instance_type component_type;
					typedef typename component_trait_type::const_type component_const_type;
					typedef typename component_trait_type::return_image_type component_return_const_type;
					typedef typename component_trait_type::input_const_type component_input_const_type;

					typedef void set_return_type;

	enum { size_enum = 4 };
	enum {
		first_position = 0,
		second_position = first_size,
		third_position = first_size + second_size,
		fourth_position = first_size + second_size + third_size
	};

	enum {
		first_mask = (1 << first_size)-1 ,
		second_mask = (1 << second_size)-1 ,
		third_mask = (1 << third_size)-1 ,
		fourth_mask = (1 << fourth_size)-1
	};

	static component_return_const_type get(input_const_type container, index_input_const_type index) {
		switch(index) {
		default:
		case(0):
			return ((container >> (first_position)) & first_mask);
		case(1):
			return ((container >> (second_position)) & second_mask);
		case(2):
			return ((container >> (third_position)) & third_mask);
		case(3):
			return ((container >> (fourth_position)) & fourth_mask);
		}
		return 0;
	}

	template< index_instance_type index >
	static component_return_const_type get(input_const_type container) {
		switch(index) {
		case(0):
			return ((container >> (first_position)) & first_mask);
		case(1):
			return ((container >> (second_position)) & second_mask);
		case(2):
			return ((container >> (third_position)) & third_mask);
		case(3):
			return ((container >> (fourth_position)) & fourth_mask);
		}
		return 0;
	}

	static set_return_type set(input_type container, index_input_const_type index, component_input_const_type value) {
		switch(index) {
		default:
		case(0) :
			container = (container & ~(first_mask << (first_position))) | (((instance_type)value) << (first_position));
						 break;
					 case(1) :
						 container = (container & ~(second_mask << (second_position))) | (((instance_type)value) << (second_position));
									  break;
								  case(2) :
									  container = (container & ~(third_mask << (third_position))) | (((instance_type)value) << (third_position));
												   break;
											   case(3) :
												   container = (container & ~(fourth_mask << (fourth_position))) | (((instance_type)value) << (fourth_position));
														   break;
		}
	}

										   template< index_instance_type index >
	static set_return_type set(input_type container, component_input_const_type value) {
		switch(index) {
		case(0) :
			container = (container & ~(first_mask << (first_position))) | (((instance_type)value) << (first_position));
						 break;
					 case(1) :
						 container = (container & ~(second_mask << (second_position))) | (((instance_type)value) << (second_position));
									  break;
								  case(2) :
									  container = (container & ~(third_mask << (third_position))) | (((instance_type)value) << (third_position));
												   break;
											   case(3) :
												   container = (container & ~(fourth_mask << (fourth_position))) | (((instance_type)value) << (fourth_position));
														   break;
		}
	}

	static index_return_image_type size() {
		static const index_instance_type local_length = size_enum;
		return local_length;
	}
																										   };

	using split2222 = ::color::_internal::utility::container::split4< std::uint8_t, std::uint8_t, unsigned, 2, 2, 2, 2 >;
	using split4444 = ::color::_internal::utility::container::split4< std::uint16_t, std::uint8_t, unsigned, 4, 4, 4, 4 >;

	using split1555 = ::color::_internal::utility::container::split4< std::uint16_t, std::uint8_t, unsigned, 1, 5, 5, 5 >;
	using split5551 = ::color::_internal::utility::container::split4< std::uint16_t, std::uint8_t, unsigned, 5, 5, 5, 1 >;

	using split8888 = ::color::_internal::utility::container::split4< std::uint32_t, std::uint8_t, unsigned, 8, 8, 8, 8 >;

	using split2AAA = ::color::_internal::utility::container::split4< std::uint32_t, std::uint16_t, unsigned, 2, 10, 10, 10 >;
	using splitAAA2 = ::color::_internal::utility::container::split4< std::uint32_t, std::uint16_t, unsigned, 10, 10, 10, 2 >;

	using splitGGGG = ::color::_internal::utility::container::split4< std::uint64_t, std::uint16_t, unsigned, 16, 16, 16, 16 >;

																	}
																	}
																	}
}

namespace color {
	namespace trait {

		template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
		struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitAAA2_t, first_position, second_position, third_position, fourth_position > > >
		: public ::color::_internal::utility::container::splitAAA2 {
		};

		template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
		struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2AAA_t, first_position, second_position, third_position, fourth_position > > >
		: public ::color::_internal::utility::container::split2AAA {
		};

																							 }
}

namespace color {
	namespace trait {

		template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
		struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2222_t, first_position, second_position, third_position, fourth_position > > >
		: public ::color::_internal::utility::container::split2222 {
		};

																							 }
}
namespace color {
	namespace trait {

		template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
		struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split4444_t, first_position, second_position, third_position, fourth_position > > >
		: public ::color::_internal::utility::container::split4444 {
		};

																							 }
}
namespace color {
	namespace trait {

		template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
		struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split8888_t, first_position, second_position, third_position, fourth_position > > >
		: public ::color::_internal::utility::container::split8888 {
		};

																							 }
}
namespace color {
	namespace trait {

		template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
		struct container< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitGGGG_t, first_position, second_position, third_position, fourth_position > > >
		: public ::color::_internal::utility::container::splitGGGG {
		};

																							 }
}

namespace color {

	namespace _internal {

		template< typename type_name >
		struct pick_rgb {
			typedef ::color::category::rgb_uint8 category_type;
		};

		template<> struct pick_rgb< std::uint8_t > {
			typedef ::color::category::rgb_uint8 category_type;
		};
		template<> struct pick_rgb< std::uint16_t > {
			typedef ::color::category::rgb_uint16 category_type;
		};
		template<> struct pick_rgb< std::uint32_t > {
			typedef ::color::category::rgb_uint32 category_type;
		};
		template<> struct pick_rgb< std::uint64_t > {
			typedef ::color::category::rgb_uint64 category_type;
		};
		template<> struct pick_rgb< float > {
			typedef ::color::category::rgb_float category_type;
		};
		template<> struct pick_rgb< double > {
			typedef ::color::category::rgb_double category_type;
		};
		template<> struct pick_rgb< long double > {
			typedef ::color::category::rgb_ldouble category_type;
		};

		template<> struct pick_rgb< ::color::type::split233_t > {
			typedef ::color::category::rgb_split233 category_type;
		};
		template<> struct pick_rgb< ::color::type::split323_t > {
			typedef ::color::category::rgb_split323 category_type;
		};
		template<> struct pick_rgb< ::color::type::split332_t > {
			typedef ::color::category::rgb_split332 category_type;
		};
		template<> struct pick_rgb< ::color::type::split422_t > {
			typedef ::color::category::rgb_split422 category_type;
		};
		template<> struct pick_rgb< ::color::type::split556_t > {
			typedef ::color::category::rgb_split556 category_type;
		};
		template<> struct pick_rgb< ::color::type::split565_t > {
			typedef ::color::category::rgb_split565 category_type;
		};
		template<> struct pick_rgb< ::color::type::split655_t > {
			typedef ::color::category::rgb_split655 category_type;
		};

		template< typename type_name >
		struct pick_rgba {
			typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint8_t, 0, 1, 2, 3 > > category_type;
																					   };

		template<> struct pick_rgba< std::uint8_t > {
			typedef ::color::category::rgba_uint8 category_type;
		};
		template<> struct pick_rgba< std::uint16_t > {
			typedef ::color::category::rgba_uint16 category_type;
		};
		template<> struct pick_rgba< std::uint32_t > {
			typedef ::color::category::rgba_uint32 category_type;
		};
		template<> struct pick_rgba< std::uint64_t > {
			typedef ::color::category::rgba_uint64 category_type;
		};
		template<> struct pick_rgba< float > {
			typedef ::color::category::rgba_float category_type;
		};
		template<> struct pick_rgba< double > {
			typedef ::color::category::rgba_double category_type;
		};
		template<> struct pick_rgba< long double > {
			typedef ::color::category::rgba_ldouble category_type;
		};
		template<> struct pick_rgba< ::color::type::split2222_t > {
			typedef ::color::category::rgba_split2222 category_type;
		};
		template<> struct pick_rgba< ::color::type::split4444_t > {
			typedef ::color::category::rgba_split4444 category_type;
		};
		template<> struct pick_rgba< ::color::type::split8888_t > {
			typedef ::color::category::rgba_split8888 category_type;
		};
		template<> struct pick_rgba< ::color::type::split5551_t > {
			typedef ::color::category::rgba_split5551 category_type;
		};
		template<> struct pick_rgba< ::color::type::splitAAA2_t > {
			typedef ::color::category::rgba_splitAAA2 category_type;
		};
		template<> struct pick_rgba< ::color::type::splitGGGG_t > {
			typedef ::color::category::rgba_splitGGGG category_type;
		};

		template< typename type_name >
		struct pick_argb {
			typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint8_t, 3, 0, 1, 2 > > category_type;
																					   };

		template<> struct pick_argb< std::uint8_t > {
			typedef ::color::category::argb_uint8 category_type;
		};
		template<> struct pick_argb< std::uint16_t > {
			typedef ::color::category::argb_uint16 category_type;
		};
		template<> struct pick_argb< std::uint32_t > {
			typedef ::color::category::argb_uint32 category_type;
		};
		template<> struct pick_argb< std::uint64_t > {
			typedef ::color::category::argb_uint64 category_type;
		};
		template<> struct pick_argb< float > {
			typedef ::color::category::argb_float category_type;
		};
		template<> struct pick_argb< double > {
			typedef ::color::category::argb_double category_type;
		};
		template<> struct pick_argb< long double > {
			typedef ::color::category::argb_ldouble category_type;
		};
		template<> struct pick_argb< ::color::type::split2222_t > {
			typedef ::color::category::argb_split2222 category_type;
		};
		template<> struct pick_argb< ::color::type::split4444_t > {
			typedef ::color::category::argb_split4444 category_type;
		};
		template<> struct pick_argb< ::color::type::split8888_t > {
			typedef ::color::category::argb_split8888 category_type;
		};
		template<> struct pick_argb< ::color::type::split1555_t > {
			typedef ::color::category::argb_split1555 category_type;
		};
		template<> struct pick_argb< ::color::type::split2AAA_t > {
			typedef ::color::category::argb_split2AAA category_type;
		};
		template<> struct pick_argb< ::color::type::splitGGGG_t > {
			typedef ::color::category::argb_splitGGGG category_type;
		};

		template< typename type_name >
		struct pick_bgr {
			typedef ::color::category::rgb< ::color::category::_internal::rgb_scramble< std::uint8_t, 2, 1, 0 > > category_type;
																					  };

		template<> struct pick_bgr< std::uint8_t > {
			typedef ::color::category::bgr_uint8 category_type;
		};
		template<> struct pick_bgr< std::uint16_t > {
			typedef ::color::category::bgr_uint16 category_type;
		};
		template<> struct pick_bgr< std::uint32_t > {
			typedef ::color::category::bgr_uint32 category_type;
		};
		template<> struct pick_bgr< std::uint64_t > {
			typedef ::color::category::bgr_uint64 category_type;
		};
		template<> struct pick_bgr< float > {
			typedef ::color::category::bgr_float category_type;
		};
		template<> struct pick_bgr< double > {
			typedef ::color::category::bgr_double category_type;
		};
		template<> struct pick_bgr< long double > {
			typedef ::color::category::bgr_ldouble category_type;
		};

		template<> struct pick_bgr< ::color::type::split233_t > {
			typedef ::color::category::bgr_split233 category_type;
		};
		template<> struct pick_bgr< ::color::type::split323_t > {
			typedef ::color::category::bgr_split323 category_type;
		};
		template<> struct pick_bgr< ::color::type::split332_t > {
			typedef ::color::category::bgr_split332 category_type;
		};
		template<> struct pick_bgr< ::color::type::split422_t > {
			typedef ::color::category::bgr_split422 category_type;
		};
		template<> struct pick_bgr< ::color::type::split556_t > {
			typedef ::color::category::bgr_split556 category_type;
		};
		template<> struct pick_bgr< ::color::type::split565_t > {
			typedef ::color::category::bgr_split565 category_type;
		};
		template<> struct pick_bgr< ::color::type::split655_t > {
			typedef ::color::category::bgr_split655 category_type;
		};

		template< typename type_name >
		struct pick_bgra {
			typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint8_t, 2, 1, 0, 3 > > category_type;
																					   };

		template<> struct pick_bgra< std::uint8_t > {
			typedef ::color::category::bgra_uint8 category_type;
		};
		template<> struct pick_bgra< std::uint16_t > {
			typedef ::color::category::bgra_uint16 category_type;
		};
		template<> struct pick_bgra< std::uint32_t > {
			typedef ::color::category::bgra_uint32 category_type;
		};
		template<> struct pick_bgra< std::uint64_t > {
			typedef ::color::category::bgra_uint64 category_type;
		};
		template<> struct pick_bgra< float > {
			typedef ::color::category::bgra_float category_type;
		};
		template<> struct pick_bgra< double > {
			typedef ::color::category::bgra_double category_type;
		};
		template<> struct pick_bgra< long double > {
			typedef ::color::category::bgra_ldouble category_type;
		};
		template<> struct pick_bgra< ::color::type::split2222_t > {
			typedef ::color::category::bgra_split2222 category_type;
		};
		template<> struct pick_bgra< ::color::type::split4444_t > {
			typedef ::color::category::bgra_split4444 category_type;
		};
		template<> struct pick_bgra< ::color::type::split5551_t > {
			typedef ::color::category::bgra_split5551 category_type;
		};
		template<> struct pick_bgra< ::color::type::split8888_t > {
			typedef ::color::category::bgra_split8888 category_type;
		};
		template<> struct pick_bgra< ::color::type::splitAAA2_t > {
			typedef ::color::category::bgra_splitAAA2 category_type;
		};
		template<> struct pick_bgra< ::color::type::splitGGGG_t > {
			typedef ::color::category::bgra_splitGGGG category_type;
		};

		template< typename type_name >
		struct pick_abgr {
			typedef ::color::category::rgb< ::color::category::_internal::rgba_scramble< std::uint8_t, 3, 2, 1, 0 > > category_type;
																					   };

		template<> struct pick_abgr< std::uint8_t > {
			typedef ::color::category::abgr_uint8 category_type;
		};
		template<> struct pick_abgr< std::uint16_t > {
			typedef ::color::category::abgr_uint16 category_type;
		};
		template<> struct pick_abgr< std::uint32_t > {
			typedef ::color::category::abgr_uint32 category_type;
		};
		template<> struct pick_abgr< std::uint64_t > {
			typedef ::color::category::abgr_uint64 category_type;
		};
		template<> struct pick_abgr< float > {
			typedef ::color::category::abgr_float category_type;
		};
		template<> struct pick_abgr< double > {
			typedef ::color::category::abgr_double category_type;
		};
		template<> struct pick_abgr< long double > {
			typedef ::color::category::abgr_ldouble category_type;
		};
		template<> struct pick_abgr< ::color::type::split2222_t > {
			typedef ::color::category::abgr_split2222 category_type;
		};
		template<> struct pick_abgr< ::color::type::split4444_t > {
			typedef ::color::category::abgr_split4444 category_type;
		};
		template<> struct pick_abgr< ::color::type::split1555_t > {
			typedef ::color::category::abgr_split1555 category_type;
		};
		template<> struct pick_abgr< ::color::type::split8888_t > {
			typedef ::color::category::abgr_split8888 category_type;
		};
		template<> struct pick_abgr< ::color::type::split2AAA_t > {
			typedef ::color::category::abgr_split2AAA category_type;
		};
		template<> struct pick_abgr< ::color::type::splitGGGG_t > {
			typedef ::color::category::abgr_splitGGGG category_type;
		};

								   }

	template< typename type_name >
	using rgb = ::color::model< typename ::color::_internal::pick_rgb< type_name >::category_type >;

	template< typename type_name >
	using rgba = ::color::model< typename ::color::_internal::pick_rgba< type_name >::category_type >;

	template< typename type_name >
	using argb = ::color::model< typename ::color::_internal::pick_argb< type_name >::category_type >;

	template< typename type_name >
	using bgr = ::color::model< typename ::color::_internal::pick_bgr< type_name >::category_type >;

	template< typename type_name >
	using bgra = ::color::model< typename ::color::_internal::pick_bgra< type_name >::category_type >;

	template< typename type_name >
	using abgr = ::color::model< typename ::color::_internal::pick_abgr< type_name >::category_type >;

}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
	red(::color::model< ::color::category::rgb<tag_name> > const& color_parameter) {
		typedef ::color::category::rgb< tag_name> category_type;
		enum { red_p = ::color::place::_internal::red<category_type>::position_enum };
		return color_parameter.template get<red_p>();
	}

									   }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
	green(::color::model< ::color::category::rgb< tag_name> > const& color_parameter) {
		typedef ::color::category::rgb< tag_name> category_type;
		enum { green_p = ::color::place::_internal::green<category_type>::position_enum };
		return color_parameter.template get<green_p>();
	}

									   }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
	blue(::color::model< ::color::category::rgb< tag_name> > const& color_parameter) {
		typedef ::color::category::rgb< tag_name> category_type;
		enum { blue_p = ::color::place::_internal::blue<category_type>::position_enum };
		return color_parameter.template get<blue_p>();
	}

									   }
}

namespace color {
	namespace get {

		template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position, unsigned alpha_position >
		inline
		typename ::color::trait::component
		<
			::color::category::rgb
			<
				::color::category::_internal::rgba_scramble < value_name, red_position, green_position, blue_position, alpha_position >
				>
			>::return_image_type
	alpha(::color::model< ::color::category::rgb< ::color::category::_internal::rgba_scramble< value_name, red_position, green_position, blue_position, alpha_position > > > const& color_parameter) {
		typedef ::color::category::_internal::rgba_scramble< value_name, red_position, green_position, blue_position, alpha_position > tag_type;
		typedef ::color::category::rgb< tag_type > category_type;
		enum { alpha_enum = ::color::place::_internal::alpha< category_type >::position_enum };
		return color_parameter.template get< alpha_position >();
	}
									   }
}

namespace color {
	namespace akin {

		template< >struct yiq< ::color::category::rgb_uint8 > {
			typedef ::color::category::yiq_uint8 akin_type;
		};
		template< >struct yiq< ::color::category::rgb_uint16 > {
			typedef ::color::category::yiq_uint16 akin_type;
		};
		template< >struct yiq< ::color::category::rgb_uint32 > {
			typedef ::color::category::yiq_uint32 akin_type;
		};
		template< >struct yiq< ::color::category::rgb_uint64 > {
			typedef ::color::category::yiq_uint64 akin_type;
		};
		template< >struct yiq< ::color::category::rgb_float > {
			typedef ::color::category::yiq_float akin_type;
		};
		template< >struct yiq< ::color::category::rgb_double > {
			typedef ::color::category::yiq_double akin_type;
		};
		template< >struct yiq< ::color::category::rgb_ldouble > {
			typedef ::color::category::yiq_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename category_name >
			struct quadrature {
				public:
				typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

				enum { position_enum = -2 };
				enum { has_enum = false };

	static index_instance_type position() {
		return position_enum;
	}
													  };

			}

	template< typename category_name >
	inline

	typename ::color::trait::index< category_name >::instance_type
	quadrature() {
		return ::color::place::_internal::quadrature<category_name>::position();
	}

												}
}

namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::yiq_double >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::yiq_float >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::yiq_ldouble >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::yiq_uint16 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::yiq_uint32 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::yiq_uint64 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::yiq_uint8 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename tag_name >
			struct quadrature< ::color::category::yiq< tag_name > > {
				public:
				typedef ::color::category::yiq< tag_name > category_type;
				typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

				enum { position_enum = 2 };
				enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
													  };

											  }
			}
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename category_name >
			struct inphase {
				public:
				typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

				enum { position_enum = -6 };
				enum { has_enum = false };

	static index_instance_type position() {
		return position_enum;
	}
													  };

			}

	template< typename category_name >
	inline

	typename ::color::trait::index< category_name >::instance_type
	inphase() {
		return ::color::place::_internal::inphase<category_name>::position();
	}

											 }
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename tag_name >
			struct inphase< ::color::category::yiq< tag_name > > {
				public:
				typedef ::color::category::yiq< tag_name > category_type;
				typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

				enum { position_enum = 1 };
				enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
													  };

											  }
			}
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename category_name >
			struct luminance {
				public:
				typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

				enum { position_enum = -3 };
				enum { has_enum = false };

	static index_instance_type position() {
		return position_enum;
	}
													  };

			}

	template< typename category_name >
	inline

	typename ::color::trait::index< category_name >::instance_type
	luminance() {
		return ::color::place::_internal::luminance<category_name>::position();
	}

											   }
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename tag_name >
			struct luminance< ::color::category::yiq< tag_name > > {
				public:
				typedef ::color::category::yiq< tag_name > category_type;
				typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

				enum { position_enum = 0 };
				enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
													  };

											  }
			}
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::model< typename ::color::akin::yiq< ::color::category::rgb<tag_name> >::akin_type >::component_const_type
	inphase(::color::model< ::color::category::rgb<tag_name> > const& color_parameter) {
		typedef ::color::category::rgb<tag_name> category_type;
		typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
		typedef typename ::color::akin::yiq<category_type>::akin_type akin_type;
		typedef ::color::_internal::diverse< akin_type > diverse_type;
		typedef ::color::_internal::normalize< category_type > normalize_type;
		typedef ::color::constant::yiq< akin_type > yiq_const_type;
		enum {
			inphase_p = ::color::place::_internal::inphase<akin_type>::position_enum
		};
		enum {
			red_p = ::color::place::_internal::red<category_type>::position_enum
			,green_p = ::color::place::_internal::green<category_type>::position_enum
			,blue_p = ::color::place::_internal::blue<category_type>::position_enum
		};
		scalar_type value =
		+ yiq_const_type::b21() * normalize_type::template process<red_p >(color_parameter.template get<red_p >())
		+ yiq_const_type::b22() * normalize_type::template process<green_p >(color_parameter.template get<green_p >())
		+ yiq_const_type::b23() * normalize_type::template process<blue_p >(color_parameter.template get<blue_p >())
		;
		value = value / yiq_const_type::i_range() + scalar_type(0.5);
		return diverse_type::template process<inphase_p>(value);
	}

										 }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::model< typename ::color::akin::yiq< ::color::category::rgb<tag_name> >::akin_type >::component_const_type
	quadrature(::color::model< ::color::category::rgb<tag_name> > const& color_parameter) {
		typedef ::color::category::rgb<tag_name> category_type;
		typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
		typedef typename ::color::akin::yiq<category_type >::akin_type akin_type;
		typedef ::color::_internal::diverse< akin_type > diverse_type;
		typedef ::color::_internal::normalize< category_type > normalize_type;
		typedef ::color::constant::yiq< akin_type > yiq_const_type;
		enum {
			red_p = ::color::place::_internal::red<category_type>::position_enum
			,green_p = ::color::place::_internal::green<category_type>::position_enum
			,blue_p = ::color::place::_internal::blue<category_type>::position_enum
		};
		scalar_type value =
		+ yiq_const_type::b31() * normalize_type::template process<red_p >(color_parameter.template get<red_p >())
		+ yiq_const_type::b32() * normalize_type::template process<green_p >(color_parameter.template get<green_p >())
		+ yiq_const_type::b33() * normalize_type::template process<blue_p >(color_parameter.template get<blue_p >())
		;
		value = value / yiq_const_type::q_range() + scalar_type(0.5);
		return diverse_type::template process<2>(value);
	}

										 }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::gray< ::color::category::rgb<tag_name> >::akin_type >::return_type
	gray(::color::model< ::color::category::rgb<tag_name> > const& color_parameter) {
		typedef ::color::category::rgb< tag_name > category_type;
		typedef typename ::color::trait::scalar< category_type >::instance_type scalar_type;
		typedef typename ::color::akin::gray< category_type >::akin_type akin_type;
		typedef ::color::_internal::diverse< akin_type > diverse_type;
		typedef ::color::_internal::normalize< category_type > normalize_type;
		typedef ::color::constant::gray< akin_type > gray_const_type;
		enum {
			red_p = ::color::place::_internal::red<category_type>::position_enum
			, green_p = ::color::place::_internal::green<category_type>::position_enum
			, blue_p = ::color::place::_internal::blue<category_type>::position_enum
		};
		scalar_type value =
		gray_const_type::Rc() * normalize_type::template process<red_p >(color_parameter.template get<red_p >())
		+ gray_const_type::Gc() * normalize_type::template process<green_p >(color_parameter.template get<green_p >())
		+ gray_const_type::Bc() * normalize_type::template process<blue_p >(color_parameter.template get<blue_p >())
		;
		return diverse_type::template process<0>(value);
	}

										 }
}

namespace color {
	namespace set {
		template< typename tag_name >
		inline
		void
		red
		(
			::color::model< ::color::category::rgb<tag_name> > & color_parameter,
			typename ::color::model< ::color::category::rgb<tag_name> >::component_input_const_type component_parameter
	) {
		typedef ::color::category::rgb<tag_name> category_type;
		enum { red_p = ::color::place::_internal::red<category_type>::position_enum };
		color_parameter.template set<red_p>(component_parameter);
	}

								}
}

namespace color {
	namespace set {
		template< typename tag_name >
		inline
		void
		green
		(
			::color::model< ::color::category::rgb<tag_name> > & color_parameter,
			typename ::color::model< ::color::category::rgb<tag_name> >::component_input_const_type component_parameter
	) {
		typedef ::color::category::rgb<tag_name> category_type;
		enum { green_p = ::color::place::_internal::green<category_type>::position_enum };
		color_parameter.template set<green_p>(component_parameter);
	}

								}
}

namespace color {
	namespace set {
		template< typename tag_name >
		inline
		void
		blue
		(
			::color::model< ::color::category::rgb<tag_name> > & color_parameter,
			typename ::color::model< ::color::category::rgb<tag_name> >::component_input_const_type component_parameter
	) {
		typedef ::color::category::rgb<tag_name> category_type;
		enum { blue_p = ::color::place::_internal::blue<category_type>::position_enum };
		color_parameter.template set<blue_p>(component_parameter);
	}

								}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		gray
		(
			::color::model< ::color::category::rgb<tag_name> > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::gray<::color::category::rgb<tag_name> >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::rgb<tag_name> category_type;
		typedef typename ::color::trait::scalar< category_type >::instance_type scalar_type;
		typedef typename ::color::akin::gray<category_type >::akin_type akin_type;
		typedef ::color::_internal::normalize< category_type > normalize_rgb_type;
		typedef ::color::_internal::normalize< akin_type > normalize_akin_type;
		typedef ::color::constant::gray< akin_type > gray_const_type;
		enum {
			red_p = ::color::place::_internal::red<category_type>::position_enum
			, green_p = ::color::place::_internal::green<category_type>::position_enum
			, blue_p = ::color::place::_internal::blue<category_type>::position_enum
		};
		scalar_type value =
		gray_const_type::Rc() * normalize_rgb_type::template process<red_p >(color_parameter.template get<red_p >())
		+ gray_const_type::Gc() * normalize_rgb_type::template process<green_p>(color_parameter.template get<green_p>())
		+ gray_const_type::Bc() * normalize_rgb_type::template process<blue_p >(color_parameter.template get<blue_p >());
		value = normalize_akin_type::template process<0>(component_parameter) / value;
		::color::operation::scale(color_parameter, value);
	}

												 }
}

namespace color {
	namespace set {
		template< typename value_name, unsigned red_position, unsigned green_position, unsigned blue_position, unsigned alpha_position >
		inline
		void
		alpha
		(
			::color::model< ::color::category::rgb< ::color::category::_internal::rgba_scramble < value_name, red_position, green_position, blue_position, alpha_position > > > & color_parameter
			,typename ::color::model< ::color::category::rgb< ::color::category::_internal::rgba_scramble < value_name, red_position, green_position, blue_position, alpha_position > > >::component_input_const_type component_parameter
	) {
		typedef ::color::category::_internal::rgba_scramble < value_name, red_position, green_position, blue_position, alpha_position > tag_type;
		typedef ::color::category::rgb<tag_type> category_type;
		enum { alpha_p = ::color::place::_internal::alpha<category_type>::position_enum };
		color_parameter.template set<alpha_p>(component_parameter);
	}

								}
}

namespace color {
	namespace _internal {

		template< typename rgb_tag_name, typename cmy_tag_name >
		struct convert
		<
			::color::category::rgb< rgb_tag_name >
			,::color::category::cmy< cmy_tag_name >
			> {
			public:
			typedef ::color::category::rgb< rgb_tag_name > category_left_type;
			typedef ::color::category::cmy< cmy_tag_name > category_right_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, double > reformat_type;
			typedef ::color::operation::_internal::invert< category_right_type > invert_type;

	enum {
		red_p = ::color::place::_internal::red<category_left_type>::position_enum
		,green_p = ::color::place::_internal::green<category_left_type>::position_enum
		,blue_p = ::color::place::_internal::blue<category_left_type>::position_enum
	};

	enum {
		cyan_p = ::color::place::_internal::cyan<category_right_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_right_type>::position_enum
		, yellow_p = ::color::place::_internal::yellow<category_right_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		container_left_trait_type::template set<red_p >(left, reformat_type::template process<red_p , cyan_p>(invert_type::template component< cyan_p>(container_right_trait_type::template get< cyan_p>(right))));
		container_left_trait_type::template set<green_p>(left, reformat_type::template process<green_p, magenta_p>(invert_type::template component<magenta_p>(container_right_trait_type::template get<magenta_p>(right))));
		container_left_trait_type::template set<blue_p >(left, reformat_type::template process<blue_p , yellow_p>(invert_type::template component< yellow_p>(container_right_trait_type::template get< yellow_p>(right))));
	}
																											 };

																						  }
}

namespace color {
	namespace _internal {

		template< typename rgb_tag_name, typename cmyk_tag_name >
		struct convert
		<
			::color::category::rgb< rgb_tag_name >
			,::color::category::cmyk<cmyk_tag_name>
			> {
			public:
			typedef ::color::category::rgb< rgb_tag_name > category_left_type;
			typedef ::color::category::cmyk<cmyk_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		enum {
			red_p = ::color::place::_internal::red<category_left_type>::position_enum
			,green_p = ::color::place::_internal::green<category_left_type>::position_enum
			,blue_p = ::color::place::_internal::blue<category_left_type>::position_enum
		};
		enum {
			cyan_p = ::color::place::_internal::cyan<category_right_type>::position_enum
			,yellow_p = ::color::place::_internal::yellow<category_right_type>::position_enum
			,magenta_p = ::color::place::_internal::magenta<category_right_type>::position_enum
			,key_p = ::color::place::_internal::key<category_right_type>::position_enum
		};
		scalar_type c = normalize_type::template process< cyan_p>(container_right_trait_type::template get< cyan_p>(right));
		scalar_type m = normalize_type::template process< magenta_p>(container_right_trait_type::template get< magenta_p>(right));
		scalar_type y = normalize_type::template process< yellow_p>(container_right_trait_type::template get< yellow_p>(right));
		scalar_type k = normalize_type::template process< key_p>(container_right_trait_type::template get< key_p>(right));
		scalar_type r = (1-c) * (1-k);
		scalar_type g = (1-m) * (1-k);
		scalar_type b = (1-y) * (1-k);
		container_left_trait_type::template set<red_p >(left, diverse_type::template process<red_p >(r));
		container_left_trait_type::template set<green_p>(left, diverse_type::template process<green_p>(g));
		container_left_trait_type::template set<blue_p >(left, diverse_type::template process<blue_p >(b));
	}
													};

										   }
}

namespace color {
	namespace _internal {

		template< typename rgb_tag_name, typename gray_tag_name >
		struct convert
		<
			::color::category::rgb< rgb_tag_name >
			,::color::category::gray<gray_tag_name>
			> {
			public:
			typedef ::color::category::rgb< rgb_tag_name > category_left_type;
			typedef ::color::category::gray<gray_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		enum {
			red_p = ::color::place::_internal::red<category_left_type>::position_enum
			,green_p = ::color::place::_internal::green<category_left_type>::position_enum
			,blue_p = ::color::place::_internal::blue<category_left_type>::position_enum
		};
		enum {
			gray_p = 0
		};
		container_left_trait_type::template set<red_p >(left, reformat_type::template process<red_p ,gray_p>(container_right_trait_type::template get<gray_p>(right)));
		container_left_trait_type::template set<green_p>(left, reformat_type::template process<green_p,gray_p>(container_right_trait_type::template get<gray_p>(right)));
		container_left_trait_type::template set<blue_p >(left, reformat_type::template process<blue_p ,gray_p>(container_right_trait_type::template get<gray_p>(right)));
	}
																						  };

													}
}

namespace color {
	namespace akin {

		template< >struct hsl< ::color::category::cmy_uint8 > {
			typedef ::color::category::hsl_uint8 akin_type;
		};
		template< >struct hsl< ::color::category::cmy_uint16 > {
			typedef ::color::category::hsl_uint16 akin_type;
		};
		template< >struct hsl< ::color::category::cmy_uint32 > {
			typedef ::color::category::hsl_uint32 akin_type;
		};
		template< >struct hsl< ::color::category::cmy_uint64 > {
			typedef ::color::category::hsl_uint64 akin_type;
		};
		template< >struct hsl< ::color::category::cmy_float > {
			typedef ::color::category::hsl_float akin_type;
		};
		template< >struct hsl< ::color::category::cmy_double > {
			typedef ::color::category::hsl_double akin_type;
		};
		template< >struct hsl< ::color::category::cmy_ldouble > {
			typedef ::color::category::hsl_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct hsl< ::color::category::cmyk_uint8 > {
			typedef ::color::category::hsl_uint8 akin_type;
		};
		template< >struct hsl< ::color::category::cmyk_uint16 > {
			typedef ::color::category::hsl_uint16 akin_type;
		};
		template< >struct hsl< ::color::category::cmyk_uint32 > {
			typedef ::color::category::hsl_uint32 akin_type;
		};
		template< >struct hsl< ::color::category::cmyk_uint64 > {
			typedef ::color::category::hsl_uint64 akin_type;
		};
		template< >struct hsl< ::color::category::cmyk_float > {
			typedef ::color::category::hsl_float akin_type;
		};
		template< >struct hsl< ::color::category::cmyk_double > {
			typedef ::color::category::hsl_double akin_type;
		};
		template< >struct hsl< ::color::category::cmyk_ldouble > {
			typedef ::color::category::hsl_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct hsl< ::color::category::gray_uint8 > {
			typedef ::color::category::hsl_uint8 akin_type;
		};
		template< >struct hsl< ::color::category::gray_uint16 > {
			typedef ::color::category::hsl_uint16 akin_type;
		};
		template< >struct hsl< ::color::category::gray_uint32 > {
			typedef ::color::category::hsl_uint32 akin_type;
		};
		template< >struct hsl< ::color::category::gray_uint64 > {
			typedef ::color::category::hsl_uint64 akin_type;
		};
		template< >struct hsl< ::color::category::gray_float > {
			typedef ::color::category::hsl_float akin_type;
		};
		template< >struct hsl< ::color::category::gray_double > {
			typedef ::color::category::hsl_double akin_type;
		};
		template< >struct hsl< ::color::category::gray_ldouble > {
			typedef ::color::category::hsl_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< typename tag_name >
		struct hsl< ::color::category::hsl< tag_name > > {
			public:
			typedef ::color::category::hsl< tag_name > akin_type;
										  };

		}
}

namespace color {
	namespace akin {

		template< >struct hsl< ::color::category::hsv_uint8 > {
			typedef ::color::category::hsl_uint8 akin_type;
		};
		template< >struct hsl< ::color::category::hsv_uint16 > {
			typedef ::color::category::hsl_uint16 akin_type;
		};
		template< >struct hsl< ::color::category::hsv_uint32 > {
			typedef ::color::category::hsl_uint32 akin_type;
		};
		template< >struct hsl< ::color::category::hsv_uint64 > {
			typedef ::color::category::hsl_uint64 akin_type;
		};
		template< >struct hsl< ::color::category::hsv_float > {
			typedef ::color::category::hsl_float akin_type;
		};
		template< >struct hsl< ::color::category::hsv_double > {
			typedef ::color::category::hsl_double akin_type;
		};
		template< >struct hsl< ::color::category::hsv_ldouble > {
			typedef ::color::category::hsl_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct hsl< ::color::category::rgb_uint8 > {
			typedef ::color::category::hsl_uint8 akin_type;
		};
		template< >struct hsl< ::color::category::rgb_uint16 > {
			typedef ::color::category::hsl_uint16 akin_type;
		};
		template< >struct hsl< ::color::category::rgb_uint32 > {
			typedef ::color::category::hsl_uint32 akin_type;
		};
		template< >struct hsl< ::color::category::rgb_uint64 > {
			typedef ::color::category::hsl_uint64 akin_type;
		};
		template< >struct hsl< ::color::category::rgb_float > {
			typedef ::color::category::hsl_float akin_type;
		};
		template< >struct hsl< ::color::category::rgb_double > {
			typedef ::color::category::hsl_double akin_type;
		};
		template< >struct hsl< ::color::category::rgb_ldouble > {
			typedef ::color::category::hsl_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct hsl< ::color::category::yiq_uint8 > {
			typedef ::color::category::hsl_uint8 akin_type;
		};
		template< >struct hsl< ::color::category::yiq_uint16 > {
			typedef ::color::category::hsl_uint16 akin_type;
		};
		template< >struct hsl< ::color::category::yiq_uint32 > {
			typedef ::color::category::hsl_uint32 akin_type;
		};
		template< >struct hsl< ::color::category::yiq_uint64 > {
			typedef ::color::category::hsl_uint64 akin_type;
		};
		template< >struct hsl< ::color::category::yiq_float > {
			typedef ::color::category::hsl_float akin_type;
		};
		template< >struct hsl< ::color::category::yiq_double > {
			typedef ::color::category::hsl_double akin_type;
		};
		template< >struct hsl< ::color::category::yiq_ldouble > {
			typedef ::color::category::hsl_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace trait {

		template <> struct info< ::color::category::hsl_uint8 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::hsl_uint16 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::hsl_uint32 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::hsl_uint64 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::hsl_float > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::hsl_double > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::hsl_ldouble > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};

							   }
}

namespace color {
	namespace _internal {
		namespace utility {
			namespace bound {

				template< typename index_name, typename scalar_name >
				struct hsl_scalar {
					public:
					typedef scalar_name scalar_type;
					typedef index_name index_type;

					typedef ::color::_internal::utility::type::traitC< scalar_type > trait_type;
					typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

					typedef typename trait_type::instance_type instance_type;
					typedef typename trait_type::return_image_type return_image_type;

					typedef typename index_trait_type::instance_type index_instance_type;
					typedef typename index_trait_type::input_const_type index_input_const_type;

					template< index_instance_type index >
	static return_image_type maximum() {
		static instance_type max_list[] = { 360, 100, 100 };
		return max_list[index];
	}

	static return_image_type maximum(index_input_const_type index) {
		static instance_type max_list[] = { 360, 100, 100 };
		return max_list[index];
	}

	template< index_instance_type index >
	static return_image_type minimum() {
		static instance_type min_list[] = { 0, 0, 0 };
		return min_list[index];
	}

	static return_image_type minimum(index_input_const_type index) {
		static instance_type min_list[] = { 0, 0, 0 };
		return min_list[index];
	}

	template< index_instance_type index >
	static return_image_type range() {
		static instance_type range_list[] = { 360, 100, 100 };
		return range_list[index];
	}

	static return_image_type range(index_input_const_type index) {
		static instance_type range_list[] = { 360, 100, 100 };
		return range_list[index];
	}
			};

			}
							}
																	}
}

namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::hsl_double >
		: public ::color::_internal::utility::bound::hsl_scalar< unsigned, double > {
		};

															   }
}

namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::hsl_float >
		: public ::color::_internal::utility::bound::hsl_scalar< unsigned, float > {
		};

															   }
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::hsl_ldouble >
		: public ::color::_internal::utility::bound::hsl_scalar< unsigned, long double > {
		};

															   }
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::hsl_uint16 >
		: public ::color::_internal::utility::bound::general< std::uint16_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::hsl_uint32 >
		: public ::color::_internal::utility::bound::general< std::uint32_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::hsl_uint64 >
		: public ::color::_internal::utility::bound::general< std::uint64_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::hsl_uint8 >
		: public ::color::_internal::utility::bound::general< std::uint8_t, unsigned > {
		};

															}
}

namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::hsl_double >
		: public ::color::_internal::utility::component::array< double, unsigned > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::hsl_float >
		: public ::color::_internal::utility::component::array< float, unsigned> {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::hsl_ldouble >
		: public ::color::_internal::utility::component::array< long double, unsigned> {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::hsl_uint16 >
		: public ::color::_internal::utility::component::array< std::uint16_t, unsigned > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::hsl_uint32 >
		: public ::color::_internal::utility::component::array< std::uint32_t, unsigned > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::hsl_uint64 >
		: public ::color::_internal::utility::component::array< std::uint64_t, unsigned > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::hsl_uint8 >
		: public ::color::_internal::utility::component::array< std::uint8_t, unsigned > {
		};

															  }
}

namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::hsl_double >
		: public ::color::_internal::utility::container::array< double, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::hsl_float >
		: public ::color::_internal::utility::container::array< float, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::hsl_ldouble >
		: public ::color::_internal::utility::container::array< long double, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::hsl_uint16 >
		: public ::color::_internal::utility::container::array< std::uint16_t, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::hsl_uint32 >
		: public ::color::_internal::utility::container::array< std::uint32_t, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::hsl_uint64 >
		: public ::color::_internal::utility::container::array< std::uint64_t, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::hsl_uint8 >
		: public ::color::_internal::utility::container::array< std::uint8_t, 3 > {
		};

															  }
}

namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::hsl_double >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::hsl_float >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::hsl_ldouble >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::hsl_uint16 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::hsl_uint32 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::hsl_uint64 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::hsl_uint8 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}

namespace color {
	namespace _internal {

		template< typename type_name >
		struct pick_hsl {
			typedef ::color::category::hsl_uint32 category_type;
		};

		template<> struct pick_hsl< std::uint8_t > {
			typedef ::color::category::hsl_uint8 category_type;
		};
		template<> struct pick_hsl< std::uint16_t > {
			typedef ::color::category::hsl_uint16 category_type;
		};
		template<> struct pick_hsl< std::uint32_t > {
			typedef ::color::category::hsl_uint32 category_type;
		};
		template<> struct pick_hsl< std::uint64_t > {
			typedef ::color::category::hsl_uint64 category_type;
		};
		template<> struct pick_hsl< float > {
			typedef ::color::category::hsl_float category_type;
		};
		template<> struct pick_hsl< double > {
			typedef ::color::category::hsl_double category_type;
		};
		template<> struct pick_hsl< long double > {
			typedef ::color::category::hsl_ldouble category_type;
		};
								  }

	template< typename type_name >
	using hsl = ::color::model< typename ::color::_internal::pick_hsl< type_name >::category_type >;

}

namespace color {
	namespace check {
		namespace _internal {

			template<>
			struct integrity< ::color::category::hsl_float> {
				public:
				typedef ::color::category::hsl_float category_type;

				typedef ::color::model<category_type> model_type;
				typedef ::color::trait::bound< category_type > bound_type;

	static bool process(model_type const& m) {
		if(m.template get<0>() < bound_type::template minimum<0>()) {
			return false;
		}
		if(bound_type::template maximum<0>() < m.template get<0>()) {
			return false;
		}
		return true;
	}
										 };

	template<>
	struct integrity< ::color::category::hsl_double > {
		public:
		typedef ::color::category::hsl_double category_type;

		typedef ::color::model<category_type> model_type;
		typedef ::color::trait::bound< category_type > bound_type;

	static bool process(model_type const& m) {
		if(m.template get<0>() < bound_type::template minimum<0>()) {
			return false;
		}
		if(bound_type::template maximum<0>() < m.template get<0>()) {
			return false;
		}
		return true;
	}
										 };

	template<>
	struct integrity< ::color::category::hsl_ldouble > {
		public:
		typedef ::color::category::hsl_ldouble category_type;

		typedef ::color::model<category_type> model_type;
		typedef ::color::trait::bound< category_type > bound_type;

	static bool process(model_type const& m) {
		if(m.template get<0>() < bound_type::template minimum<0>()) {
			return false;
		}
		if(bound_type::template maximum<0>() < m.template get<0>()) {
			return false;
		}
		return true;
	}
										 };

								   }
	  }
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename category_name >
			struct hue {
				public:
				typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

				enum { position_enum = -7 };
				enum { has_enum = false };

	static index_instance_type position() {
		return position_enum;
	}
													  };

			}

	template< typename category_name >
	inline

	typename ::color::trait::index< category_name >::instance_type
	hue() {
		return ::color::place::_internal::hue<category_name>::position();
	}

										 }
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename tag_name >
			struct hue< ::color::category::hsl< tag_name > > {
				public:
				typedef ::color::category::hsl< tag_name > category_type;
				typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

				enum { position_enum = 0 };
				enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
													  };

											  }
			}
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename category_name >
			struct lightness {
				public:
				typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

				enum { position_enum = -4 };
				enum { has_enum = false };

	static index_instance_type position() {
		return position_enum;
	}
													  };

			}

	template< typename category_name >
	inline

	typename ::color::trait::index< category_name >::instance_type
	lightness() {
		return ::color::place::_internal::lightness<category_name>::position();
	}

											   }
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename tag_name >
			struct lightness< ::color::category::hsl< tag_name > > {
				public:
				typedef ::color::category::hsl< tag_name > category_type;
				typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

				enum { position_enum = 2 };
				enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
													  };

											  }
			}
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename category_name >
			struct saturation {
				public:
				typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

				enum { position_enum = -4 };
				enum { has_enum = false };

	static index_instance_type position() {
		return position_enum;
	}
													  };

			}

	template< typename category_name >
	inline

	typename ::color::trait::index< category_name >::instance_type
	saturation() {
		return ::color::place::_internal::saturation<category_name>::position();
	}

												}
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename tag_name >
			struct saturation< ::color::category::hsl< tag_name > > {
				public:
				typedef ::color::category::hsl< tag_name > category_type;
				typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

				enum { position_enum = 1 };
				enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
													  };

											  }
			}
}

namespace color {
	namespace check {
		namespace _internal {

			template< typename category_name >
			struct unique {
				public:
				typedef category_name category_type;

				typedef ::color::model<category_type> model_type;

	static bool process(model_type const& m) {
		return true;
	}

									  };
			}

	template< typename category_name >
	inline
	bool unique(::color::model<category_name> const& m) {
		return ::color::check::_internal::unique<category_name>::process(m);
	}

											}
}

namespace color {
	namespace check {
		namespace _internal {

			template< typename tag_name >
			struct unique< ::color::category::hsl< tag_name> > {
				public:
				typedef ::color::category::hsl<tag_name> category_type;

				typedef ::color::model<category_type> model_type;
				typedef ::color::trait::bound< category_type > bound_type;

	enum {
		hue_p = ::color::place::_internal::hue<category_type>::position_enum
		,saturation_p = ::color::place::_internal::saturation<category_type>::position_enum
		, lightness_p = ::color::place::_internal::lightness<category_type>::position_enum
	};

	static bool process(model_type const& m) {
		if(m.template get<saturation_p>() == bound_type::template minimum<saturation_p>()) {
			return false;
		}
		if(m.template get< lightness_p>() == bound_type::template minimum< lightness_p>()) {
			return false;
		}
		if(m.template get< lightness_p>() == bound_type::template maximum< lightness_p>()) {
			return false;
		}
		return true;
	}
					 };

	  }
					 }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::gray< ::color::category::hsl<tag_name> >::akin_type >::return_type
	gray(::color::model< ::color::category::hsl<tag_name> > const& color_parameter) {
		typedef ::color::category::hsl< tag_name > category_type;
		typedef typename ::color::trait::scalar< category_type >::instance_type scalar_type;
		typedef typename ::color::akin::gray< category_type >::akin_type akin_type;
		typedef ::color::_internal::diverse< akin_type > diverse_type;
		typedef ::color::_internal::normalize< category_type > normalize_type;
		enum { lightness_p = ::color::place::_internal::lightness<category_type>::position_enum };
		scalar_type g = normalize_type::template process<lightness_p >(color_parameter.template get<lightness_p >());
		return diverse_type::template process<0>(g);
	}

										 }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::hsl<tag_name> >::akin_type >::return_type
	red(::color::model< ::color::category::hsl<tag_name> > const& color_parameter) {
		typedef ::color::category::hsl< tag_name > category_type;
		typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
		enum { red_p = ::color::place::_internal::red<akin_type>::position_enum };
		return ::color::model< akin_type >(color_parameter).template get<red_p>();
	}

																	}
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::hsl<tag_name> >::akin_type >::return_type
	green(::color::model< ::color::category::hsl<tag_name> > const& color_parameter) {
		typedef ::color::category::hsl<tag_name> category_type;
		typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
		enum { green_p = ::color::place::_internal::green<akin_type>::position_enum };
		return ::color::model< akin_type >(color_parameter).template get<green_p>();
	}

																	}
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::hsl<tag_name> >::akin_type >::return_type
	blue(::color::model< ::color::category::hsl<tag_name> > const& color_parameter) {
		typedef ::color::category::hsl<tag_name> category_type;
		typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
		enum { blue_p = ::color::place::_internal::blue<akin_type>::position_enum };
		return ::color::model< akin_type >(color_parameter).template get<blue_p>();
	}

																	}
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::model< ::color::category::hsl< tag_name> >::component_const_type
	hue(::color::model< ::color::category::hsl< tag_name> > const& color_parameter) {
		typedef ::color::category::hsl< tag_name> category_type;
		enum { hue_p = ::color::place::_internal::hue<category_type>::position_enum };
		return color_parameter.template get<hue_p>();
	}

									   }
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		hue
		(
			::color::model< ::color::category::hsl<tag_name> > & color_parameter
			,typename ::color::model< ::color::category::hsl<tag_name> >::component_input_const_type component_parameter
	) {
		typedef ::color::category::hsl< tag_name > category_type;
		enum { hue_p = ::color::place::_internal::hue< category_type >::position_enum };
		color_parameter.template set<hue_p>(component_parameter);
	}

								}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		blue
		(
			::color::model< ::color::category::hsl< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::hsl< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::hsl< tag_name > category_type;
		typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
		enum { blue_p = ::color::place::_internal::blue<akin_type>::position_enum };
		::color::model< akin_type > rgb(color_parameter);
		rgb.template set<blue_p > (component_parameter);
		color_parameter = rgb;
	}

					}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		green
		(
			::color::model< ::color::category::hsl< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::hsl< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::hsl< tag_name > category_type;
		typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
		enum { green_p = ::color::place::_internal::green<akin_type>::position_enum };
		::color::model< akin_type > rgb(color_parameter);
		rgb.template set< green_p > (component_parameter);
		color_parameter = rgb;
	}

					}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		red
		(
			::color::model< ::color::category::hsl< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::hsl< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::hsl< tag_name > category_type;
		typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
		enum { red_p = ::color::place::_internal::red<akin_type>::position_enum };
		::color::model< akin_type > rgb(color_parameter);
		rgb.template set<red_p> (component_parameter);
		color_parameter = rgb;
	}

					}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		gray
		(
			::color::model< ::color::category::hsl<tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::gray< ::color::category::hsv< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::hsl< tag_name > category_type;
		typedef typename ::color::akin::gray< category_type >::akin_type akin_type;
		typedef double scalar_type;
		typedef ::color::_internal::reformat< category_type, akin_type, scalar_type > reformat_type;
		enum {
			lightness_p = ::color::place::_internal::lightness<category_type>::position_enum
		};
		color_parameter.template set<lightness_p>(reformat_type::template process<lightness_p,0>(component_parameter));
	}

											 }
}

namespace color {
	namespace _internal {

		template< typename hsl_tag_name, typename cmy_tag_name >
		struct convert
		<
			::color::category::hsl< hsl_tag_name >
			,::color::category::cmy< cmy_tag_name >
			> {
			public:
			typedef ::color::category::hsl< hsl_tag_name > category_left_type;
			typedef ::color::category::cmy< cmy_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::scalar<category_left_type> scalar_trait_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

	enum {
		hue_p = ::color::place::_internal::hue<category_left_type>::position_enum
		,saturation_p = ::color::place::_internal::saturation<category_left_type>::position_enum
		, lightness_p = ::color::place::_internal::lightness<category_left_type>::position_enum
	};

	enum {
		cyan_p = ::color::place::_internal::cyan<category_right_type>::position_enum
		,yellow_p = ::color::place::_internal::yellow<category_right_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_right_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		scalar_type r = scalar_type(1) - normalize_type::template process< cyan_p>(container_right_trait_type::template get< cyan_p>(right));
		scalar_type g = scalar_type(1) - normalize_type::template process< magenta_p>(container_right_trait_type::template get< magenta_p>(right));
		scalar_type b = scalar_type(1) - normalize_type::template process< yellow_p>(container_right_trait_type::template get< yellow_p>(right));
		const scalar_type hi = std::max<scalar_type>({ r, g, b });
		const scalar_type lo = std::min<scalar_type>({ r, g, b });
		scalar_type delta = hi - lo;
		scalar_type h = 0;
		scalar_type s = 0;
		scalar_type l = (hi + lo) / scalar_type(2);
		if(false == scalar_trait_type::is_small(delta)) {
			s = delta / (1 - fabs(2*l - 1));
			if(hi == r) {
				h = (scalar_type(60)/scalar_type(360)) * (g - b) / delta + (g < b ? scalar_type(1) : scalar_type(0));
			}
			if(hi == g) {
				h = (scalar_type(60)/scalar_type(360)) * (b - r) / delta + (scalar_type(120)/scalar_type(360));
			}
			if(hi == b) {
				h = (scalar_type(60)/scalar_type(360)) * (r - g) / delta + (scalar_type(240)/scalar_type(360));
			}
		}
		container_left_trait_type::template set< hue_p>(left, diverse_type::template process< hue_p>(h));
		container_left_trait_type::template set<saturation_p>(left, diverse_type::template process<saturation_p>(s));
		container_left_trait_type::template set< lightness_p>(left, diverse_type::template process< lightness_p>(l));
	}
														 };

										   }
}

namespace color {
	namespace _internal {

		template< typename hsl_tag_name, typename cmyk_tag_name >
		struct convert
		<
			::color::category::hsl< hsl_tag_name >
			,::color::category::cmyk< cmyk_tag_name >
			> {
			public:
			typedef ::color::category::hsl< hsl_tag_name > hsl_category_type, category_left_type;
			typedef ::color::category::cmyk< cmyk_tag_name > cmyk_category_type, category_right_type;

			typedef typename ::color::akin::rgb< cmyk_category_type >::akin_type rgb_category_type;

			typedef ::color::model< hsl_category_type > hsl_model_type;
			typedef ::color::model< cmyk_category_type > cmyk_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = hsl_model_type(rgb_model_type(cmyk_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace _internal {

		template< typename hsl_tag_name, typename gray_tag_name >
		struct convert
		<
			::color::category::hsl< hsl_tag_name >
			,::color::category::gray< gray_tag_name >
			> {
			public:
			typedef ::color::category::hsl< hsl_tag_name > category_left_type;
			typedef ::color::category::gray< gray_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::bound<category_left_type> bound_left_trait_type;
			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	enum {
		hue_p = ::color::place::_internal::hue<category_left_type>::position_enum
		,saturation_p = ::color::place::_internal::saturation<category_left_type>::position_enum
		, lightness_p = ::color::place::_internal::lightness<category_left_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		container_left_trait_type::template set<hue_p>(left, bound_left_trait_type::template minimum<hue_p>());
		container_left_trait_type::template set<saturation_p>(left, bound_left_trait_type::template minimum<saturation_p>());
		container_left_trait_type::template set<lightness_p>(left, reformat_type::template process<lightness_p,0>(container_right_trait_type::template get<0>(right)));
	}
																							  };

														}
}
namespace color {
	namespace _internal {

		template< typename tag_left_name, typename tag_right_name >
		struct convert
		<
			::color::category::hsl< tag_left_name >
			,::color::category::hsl< tag_right_name>
			> {
			public:
			typedef ::color::category::hsl< tag_left_name > category_left_type;
			typedef ::color::category::hsl< tag_right_name> category_right_type;

			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,0>(container_right_trait_type::template get<0>(right)));
		container_left_trait_type::template set<1>(left, reformat_type::template process<1,1>(container_right_trait_type::template get<1>(right)));
		container_left_trait_type::template set<2>(left, reformat_type::template process<2,2>(container_right_trait_type::template get<2>(right)));
	}
																					};
											  }
}

namespace color {
	namespace akin {

		template< >struct hsv< ::color::category::cmy_uint8 > {
			typedef ::color::category::hsv_uint8 akin_type;
		};
		template< >struct hsv< ::color::category::cmy_uint16 > {
			typedef ::color::category::hsv_uint16 akin_type;
		};
		template< >struct hsv< ::color::category::cmy_uint32 > {
			typedef ::color::category::hsv_uint32 akin_type;
		};
		template< >struct hsv< ::color::category::cmy_uint64 > {
			typedef ::color::category::hsv_uint64 akin_type;
		};
		template< >struct hsv< ::color::category::cmy_float > {
			typedef ::color::category::hsv_float akin_type;
		};
		template< >struct hsv< ::color::category::cmy_double > {
			typedef ::color::category::hsv_double akin_type;
		};
		template< >struct hsv< ::color::category::cmy_ldouble > {
			typedef ::color::category::hsv_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct hsv< ::color::category::cmyk_uint8 > {
			typedef ::color::category::hsv_uint8 akin_type;
		};
		template< >struct hsv< ::color::category::cmyk_uint16 > {
			typedef ::color::category::hsv_uint16 akin_type;
		};
		template< >struct hsv< ::color::category::cmyk_uint32 > {
			typedef ::color::category::hsv_uint32 akin_type;
		};
		template< >struct hsv< ::color::category::cmyk_uint64 > {
			typedef ::color::category::hsv_uint64 akin_type;
		};
		template< >struct hsv< ::color::category::cmyk_float > {
			typedef ::color::category::hsv_float akin_type;
		};
		template< >struct hsv< ::color::category::cmyk_double > {
			typedef ::color::category::hsv_double akin_type;
		};
		template< >struct hsv< ::color::category::cmyk_ldouble > {
			typedef ::color::category::hsv_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct hsv< ::color::category::gray_uint8 > {
			typedef ::color::category::hsv_uint8 akin_type;
		};
		template< >struct hsv< ::color::category::gray_uint16 > {
			typedef ::color::category::hsv_uint16 akin_type;
		};
		template< >struct hsv< ::color::category::gray_uint32 > {
			typedef ::color::category::hsv_uint32 akin_type;
		};
		template< >struct hsv< ::color::category::gray_uint64 > {
			typedef ::color::category::hsv_uint64 akin_type;
		};
		template< >struct hsv< ::color::category::gray_float > {
			typedef ::color::category::hsv_float akin_type;
		};
		template< >struct hsv< ::color::category::gray_double > {
			typedef ::color::category::hsv_double akin_type;
		};
		template< >struct hsv< ::color::category::gray_ldouble > {
			typedef ::color::category::hsv_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct hsv< ::color::category::hsl_uint8 > {
			typedef ::color::category::hsv_uint8 akin_type;
		};
		template< >struct hsv< ::color::category::hsl_uint16 > {
			typedef ::color::category::hsv_uint16 akin_type;
		};
		template< >struct hsv< ::color::category::hsl_uint32 > {
			typedef ::color::category::hsv_uint32 akin_type;
		};
		template< >struct hsv< ::color::category::hsl_uint64 > {
			typedef ::color::category::hsv_uint64 akin_type;
		};
		template< >struct hsv< ::color::category::hsl_float > {
			typedef ::color::category::hsv_float akin_type;
		};
		template< >struct hsv< ::color::category::hsl_double > {
			typedef ::color::category::hsv_double akin_type;
		};
		template< >struct hsv< ::color::category::hsl_ldouble > {
			typedef ::color::category::hsv_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< typename tag_name >
		struct hsv< ::color::category::hsv< tag_name > > {
			public:
			typedef ::color::category::hsv< tag_name > akin_type;
										  };

		}
}

namespace color {
	namespace akin {

		template< >struct hsv< ::color::category::rgb_uint8 > {
			typedef ::color::category::hsv_uint8 akin_type;
		};
		template< >struct hsv< ::color::category::rgb_uint16 > {
			typedef ::color::category::hsv_uint16 akin_type;
		};
		template< >struct hsv< ::color::category::rgb_uint32 > {
			typedef ::color::category::hsv_uint32 akin_type;
		};
		template< >struct hsv< ::color::category::rgb_uint64 > {
			typedef ::color::category::hsv_uint64 akin_type;
		};
		template< >struct hsv< ::color::category::rgb_float > {
			typedef ::color::category::hsv_float akin_type;
		};
		template< >struct hsv< ::color::category::rgb_double > {
			typedef ::color::category::hsv_double akin_type;
		};
		template< >struct hsv< ::color::category::rgb_ldouble > {
			typedef ::color::category::hsv_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct hsv< ::color::category::yiq_uint8 > {
			typedef ::color::category::hsv_uint8 akin_type;
		};
		template< >struct hsv< ::color::category::yiq_uint16 > {
			typedef ::color::category::hsv_uint16 akin_type;
		};
		template< >struct hsv< ::color::category::yiq_uint32 > {
			typedef ::color::category::hsv_uint32 akin_type;
		};
		template< >struct hsv< ::color::category::yiq_uint64 > {
			typedef ::color::category::hsv_uint64 akin_type;
		};
		template< >struct hsv< ::color::category::yiq_float > {
			typedef ::color::category::hsv_float akin_type;
		};
		template< >struct hsv< ::color::category::yiq_double > {
			typedef ::color::category::hsv_double akin_type;
		};
		template< >struct hsv< ::color::category::yiq_ldouble > {
			typedef ::color::category::hsv_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct hsv< ::color::category::yuv_uint8 > {
			typedef ::color::category::hsv_uint8 akin_type;
		};
		template< >struct hsv< ::color::category::yuv_uint16 > {
			typedef ::color::category::hsv_uint16 akin_type;
		};
		template< >struct hsv< ::color::category::yuv_uint32 > {
			typedef ::color::category::hsv_uint32 akin_type;
		};
		template< >struct hsv< ::color::category::yuv_uint64 > {
			typedef ::color::category::hsv_uint64 akin_type;
		};
		template< >struct hsv< ::color::category::yuv_float > {
			typedef ::color::category::hsv_float akin_type;
		};
		template< >struct hsv< ::color::category::yuv_double > {
			typedef ::color::category::hsv_double akin_type;
		};
		template< >struct hsv< ::color::category::yuv_ldouble > {
			typedef ::color::category::hsv_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace trait {

		template <> struct info< ::color::category::hsv_uint8 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::hsv_uint16 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::hsv_uint32 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::hsv_uint64 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::hsv_float > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::hsv_double > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::hsv_ldouble > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};

							   }
}

namespace color {
	namespace _internal {
		namespace utility {
			namespace bound {

				template< typename index_name, typename scalar_name >
				struct hsv_scalar {
					public:
					typedef scalar_name scalar_type;
					typedef index_name index_type;

					typedef ::color::_internal::utility::type::traitC< scalar_type > trait_type;
					typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

					typedef typename trait_type::instance_type instance_type;
					typedef typename trait_type::return_image_type return_image_type;

					typedef typename index_trait_type::instance_type index_instance_type;
					typedef typename index_trait_type::input_const_type index_input_const_type;

					template< index_instance_type index >
	static return_image_type maximum() {
		static instance_type max_list[] = { 360, 100, 100 };
		return max_list[index];
	}

	static return_image_type maximum(index_input_const_type index) {
		static instance_type max_list[] = { 360, 100, 100 };
		return max_list[index];
	}

	template< index_instance_type index >
	static return_image_type minimum() {
		static instance_type min_list[] = { 0, 0, 0 };
		return min_list[index];
	}

	static return_image_type minimum(index_input_const_type index) {
		static instance_type min_list[] = { 0, 0, 0 };
		return min_list[index];
	}

	template< index_instance_type index >
	static return_image_type range() {
		static instance_type range_list[] = { 360, 100, 100 };
		return range_list[index];
	}

	static return_image_type range(index_input_const_type index) {
		static instance_type range_list[] = { 360, 100, 100 };
		return range_list[index];
	}
			};

			}
							}
																	}
}

namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::hsv_double >
		: public ::color::_internal::utility::bound::hsv_scalar< unsigned, double > {
		};

															   }
}

namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::hsv_float >
		: public ::color::_internal::utility::bound::hsv_scalar< unsigned, float > {
		};

															   }
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::hsv_ldouble >
		: public ::color::_internal::utility::bound::hsv_scalar< unsigned, long double > {
		};

															   }
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::hsv_uint16 >
		: public ::color::_internal::utility::bound::general< std::uint16_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::hsv_uint32 >
		: public ::color::_internal::utility::bound::general< std::uint32_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::hsv_uint64 >
		: public ::color::_internal::utility::bound::general< std::uint64_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::hsv_uint8 >
		: public ::color::_internal::utility::bound::general< std::uint8_t, unsigned > {
		};

															}
}

namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::hsv_double >
		: public ::color::_internal::utility::component::array< double, unsigned > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::hsv_float >
		: public ::color::_internal::utility::component::array< float, unsigned> {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::hsv_ldouble >
		: public ::color::_internal::utility::component::array< long double, unsigned> {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::hsv_uint16 >
		: public ::color::_internal::utility::component::array< std::uint16_t, unsigned > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::hsv_uint32 >
		: public ::color::_internal::utility::component::array< std::uint32_t, unsigned > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::hsv_uint64 >
		: public ::color::_internal::utility::component::array< std::uint64_t, unsigned > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::hsv_uint8 >
		: public ::color::_internal::utility::component::array< std::uint8_t, unsigned > {
		};

															  }
}

namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::hsv_double >
		: public ::color::_internal::utility::container::array< double, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::hsv_float >
		: public ::color::_internal::utility::container::array< float, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::hsv_ldouble >
		: public ::color::_internal::utility::container::array< long double, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::hsv_uint16 >
		: public ::color::_internal::utility::container::array< std::uint16_t, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::hsv_uint32 >
		: public ::color::_internal::utility::container::array< std::uint32_t, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::hsv_uint64 >
		: public ::color::_internal::utility::container::array< std::uint64_t, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::hsv_uint8 >
		: public ::color::_internal::utility::container::array< std::uint8_t, 3 > {
		};

															  }
}

namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::hsv_double >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::hsv_float >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::hsv_ldouble >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::hsv_uint16 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::hsv_uint32 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::hsv_uint64 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::hsv_uint8 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}

namespace color {
	namespace _internal {

		template< typename type_name >
		struct pick_hsv {
			typedef ::color::category::hsv_uint32 category_type;
		};

		template<> struct pick_hsv< std::uint8_t > {
			typedef ::color::category::hsv_uint8 category_type;
		};
		template<> struct pick_hsv< std::uint16_t > {
			typedef ::color::category::hsv_uint16 category_type;
		};
		template<> struct pick_hsv< std::uint32_t > {
			typedef ::color::category::hsv_uint32 category_type;
		};
		template<> struct pick_hsv< std::uint64_t > {
			typedef ::color::category::hsv_uint64 category_type;
		};
		template<> struct pick_hsv< float > {
			typedef ::color::category::hsv_float category_type;
		};
		template<> struct pick_hsv< double > {
			typedef ::color::category::hsv_double category_type;
		};
		template<> struct pick_hsv< long double > {
			typedef ::color::category::hsv_ldouble category_type;
		};
								  }

	template< typename type_name >
	using hsv = ::color::model< typename ::color::_internal::pick_hsv< type_name >::category_type >;

}

namespace color {
	namespace check {
		namespace _internal {

			template<>
			struct integrity< ::color::category::hsv_float> {
				public:
				typedef ::color::category::hsv_float category_type;

				typedef ::color::model<category_type> model_type;
				typedef ::color::trait::bound< category_type > bound_type;

	static bool process(model_type const& m) {
		if(m.template get<0>() < bound_type::template minimum<0>()) {
			return false;
		}
		if(bound_type::template maximum<0>() < m.template get<0>()) {
			return false;
		}
		return true;
	}
										 };

	template<>
	struct integrity< ::color::category::hsv_double > {
		public:
		typedef ::color::category::hsv_double category_type;

		typedef ::color::model<category_type> model_type;
		typedef ::color::trait::bound< category_type > bound_type;

	static bool process(model_type const& m) {
		if(m.template get<0>() < bound_type::template minimum<0>()) {
			return false;
		}
		if(bound_type::template maximum<0>() < m.template get<0>()) {
			return false;
		}
		return true;
	}
										 };

	template<>
	struct integrity< ::color::category::hsv_ldouble > {
		public:
		typedef ::color::category::hsv_ldouble category_type;

		typedef ::color::model<category_type> model_type;
		typedef ::color::trait::bound< category_type > bound_type;

	static bool process(model_type const& m) {
		if(m.template get<0>() < bound_type::template minimum<0>()) {
			return false;
		}
		if(bound_type::template maximum<0>() < m.template get<0>()) {
			return false;
		}
		return true;
	}
										 };

								   }
	  }
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename tag_name >
			struct hue< ::color::category::hsv< tag_name > > {
				public:
				typedef ::color::category::hsv< tag_name > category_type;
				typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

				enum { position_enum = 0 };
				enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
													  };

											  }
			}
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename tag_name >
			struct saturation< ::color::category::hsv< tag_name > > {
				public:
				typedef ::color::category::hsv< tag_name > category_type;
				typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

				enum { position_enum = 1 };
				enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
													  };

											  }
			}
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename category_name >
			struct value {
				public:
				typedef typename ::color::trait::index< category_name >::instance_type index_instance_type;

				enum { position_enum = -11 };
				enum { has_enum = false };

	static index_instance_type position() {
		return position_enum;
	}
													  };

			}

	template< typename category_name >
	inline

	typename ::color::trait::index< category_name >::instance_type
	value() {
		return ::color::place::_internal::value<category_name>::position();
	}

										   }
}

namespace color {
	namespace place {
		namespace _internal {

			template< typename tag_name >
			struct value< ::color::category::hsv< tag_name > > {
				public:
				typedef ::color::category::hsv< tag_name > category_type;
				typedef typename ::color::trait::index< category_type >::instance_type index_instance_type;

				enum { position_enum = 2 };
				enum { has_enum = true };

	static index_instance_type position() {
		return position_enum;
	}
													  };

											  }
			}
}

namespace color {
	namespace check {
		namespace _internal {

			template< typename tag_name >
			struct unique< ::color::category::hsv< tag_name > > {
				public:
				typedef ::color::category::hsv< tag_name > category_type;

				typedef ::color::model<category_type> model_type;
				typedef ::color::trait::bound< category_type > bound_type;

	enum {
		hue_p = ::color::place::_internal::hue<category_type>::position_enum
		,saturation_p = ::color::place::_internal::saturation<category_type>::position_enum
		,value_p = ::color::place::_internal::value<category_type>::position_enum
	};

	static bool process(model_type const& m) {
		if(m.template get<saturation_p>() == bound_type::template minimum<saturation_p>()) {
			return false;
		}
		if(m.template get<value_p>() == bound_type::template minimum<value_p>()) {
			return false;
		}
		return true;
	}
					 };

	  }
					 }
}

namespace color {
	namespace fix {
		namespace _internal {

			template< typename tag_name >
			struct unique< ::color::category::hsv< tag_name > > {
				public:
				typedef ::color::category::hsv< tag_name > category_type;

				typedef typename ::color::model<category_type> model_type;
				typedef typename ::color::trait::bound<category_type> bound_type;

	enum {
		hue_p = ::color::place::_internal::hue<category_type>::position_enum
		,saturation_p = ::color::place::_internal::saturation<category_type>::position_enum
		,value_p = ::color::place::_internal::value<category_type>::position_enum
	};

	static void process(model_type &result) {
		if(result.template get<value_p>() == bound_type::template minimum<value_p>()) {
			result.template set<hue_p>(bound_type::template minimum<hue_p>());
			result.template set<saturation_p>(bound_type::template minimum<saturation_p>());
			return;
		}
		if(result.template get<saturation_p>() == bound_type::template minimum<saturation_p>()) {
			result.template set<hue_p>(bound_type::template minimum<hue_p>());
			return;
		}
	}

	static void process(model_type &result, model_type const& right) {
		if(result.template get<value_p>() == bound_type::template minimum<value_p>()) {
			result.template set<hue_p>(bound_type::template minimum<hue_p>());
			result.template set<saturation_p>(bound_type::template minimum<saturation_p>());
			return;
		}
		if(result.template get<saturation_p>() == bound_type::template minimum<saturation_p>()) {
			result.template set<hue_p>(bound_type::template minimum<hue_p>());
			return;
		}
		result = right;
		return;
	}

							  };

					   }
						  }
}

namespace color {
	namespace fix {

		namespace _internal {

			template< typename category_name >
			struct integrity {
				public:
				typedef category_name category_type;

				typedef ::color::model<category_type> model_type;

	static void process(model_type & m) {
	}

	static void process(model_type & result, model_type const& right) {
	}
									  };

			}

	template< typename category_name >
	void integrity
	(
		::color::model<category_name> & result
					  ) {
		::color::fix::_internal::integrity<category_name>::process(result);
	}

	template< typename category_name >
	void integrity
	(
		::color::model<category_name> & result
		,::color::model<category_name> const& right
					   ) {
		::color::fix::_internal::integrity<category_name>::process(result, right);
	}

									  }
}

namespace color {
	namespace fix {
		namespace _internal {
			namespace _privateHSV {

				template< typename category_name >
				struct integrity {
					public:
					typedef category_name category_type;

					typedef typename ::color::model<category_type> model_type;
					typedef typename ::color::trait::bound<category_type> bound_type;

	static void process(model_type &result) {
		if(result.template get<0>() < bound_type::template minimum<0>()) {
			result.template set<0>(bound_type::template minimum<0>());
			return;
		}
		if(bound_type::template maximum<0>() < result.template get<0>()) {
			result.template set<0>(bound_type::template maximum<0>());
			return;
		}
	}

	static void process(model_type &result, model_type const& right) {
		result = right;
		if(result.template get<0>() < bound_type::template minimum<0>()) {
			result.template set<0>(bound_type::template minimum<0>());
			return;
		}
		if(bound_type::template maximum<0>() < result.template get<0>()) {
			result.template set<0>(bound_type::template maximum<0>());
			return;
		}
	}

						  };

					   }

	template<> struct integrity< ::color::category::hsv_float > : public ::color::fix::_internal::_privateHSV::integrity<::color::category::hsv_float > { };
	template<> struct integrity< ::color::category::hsv_double > : public ::color::fix::_internal::_privateHSV::integrity<::color::category::hsv_double > { };
	template<> struct integrity< ::color::category::hsv_ldouble > : public ::color::fix::_internal::_privateHSV::integrity<::color::category::hsv_ldouble> { };

																														  }
							   }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::gray< ::color::category::hsv<tag_name> >::akin_type >::return_type
	gray(::color::model< ::color::category::hsv<tag_name> > const& color_parameter) {
		typedef ::color::category::hsv<tag_name> category_type;
		typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
		typedef typename ::color::akin::gray<category_type>::akin_type akin_type;
		typedef ::color::_internal::diverse< akin_type > diverse_type;
		typedef ::color::_internal::normalize<category_type> normalize_type;
		enum { value_p = ::color::place::_internal::value<category_type>::position_enum };
		scalar_type g = normalize_type::template process<value_p >(color_parameter.template get<value_p >());
		return diverse_type::template process<0>(g);
	}

										 }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::hsv<tag_name> >::akin_type >::return_type
	red(::color::model< ::color::category::hsv<tag_name> > const& color_parameter) {
		typedef ::color::category::hsv<tag_name> category_type;
		typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
		typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
		typedef ::color::_internal::diverse< akin_type > diverse_type;
		typedef ::color::_internal::normalize<category_type> normalize_type;
		enum {
			red_p = ::color::place::_internal::red<akin_type>::position_enum
			,green_p = ::color::place::_internal::green<akin_type>::position_enum
			,blue_p = ::color::place::_internal::blue<akin_type>::position_enum
		};
		enum {
			hue_p = ::color::place::_internal::hue<category_type>::position_enum
			,saturation_p = ::color::place::_internal::saturation<category_type>::position_enum
			,value_p = ::color::place::_internal::value<category_type>::position_enum
		};
		scalar_type h = normalize_type::template process<hue_p >(color_parameter.template get<hue_p >());
		scalar_type s = normalize_type::template process<saturation_p>(color_parameter.template get<saturation_p>());
		scalar_type v = normalize_type::template process<value_p >(color_parameter.template get<value_p >());
		int region = int(6 * h);
		scalar_type f = h * 6 - region ;
		scalar_type p = v * (1 - s);
		scalar_type q = v * (1 - f * s);
		scalar_type t = v * (1 - (1 - f) * s);
		scalar_type r;
		switch(region % 6) {
		case 0:
			r = v;
			break;
		case 1:
			r = q;
			break;
		case 2:
			r = p;
			break;
		case 3:
			r = p;
			break;
		case 4:
			r = t;
			break;
		case 5:
			r = v;
			break;
		}
		return diverse_type::template process<red_p>(r);
	}

										 }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::hsv<tag_name> >::akin_type >::return_type
	green(::color::model< ::color::category::hsv<tag_name> > const& color_parameter) {
		typedef ::color::category::hsv<tag_name> category_type;
		typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
		typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
		typedef ::color::_internal::diverse< akin_type > diverse_type;
		typedef ::color::_internal::normalize<category_type> normalize_type;
		enum {
			red_p = ::color::place::_internal::red<akin_type>::position_enum
			,green_p = ::color::place::_internal::green<akin_type>::position_enum
			,blue_p = ::color::place::_internal::blue<akin_type>::position_enum
		};
		enum {
			hue_p = ::color::place::_internal::hue<category_type>::position_enum
			,saturation_p = ::color::place::_internal::saturation<category_type>::position_enum
			,value_p = ::color::place::_internal::value<category_type>::position_enum
		};
		scalar_type h = normalize_type::template process<hue_p >(color_parameter.template get<hue_p >());
		scalar_type s = normalize_type::template process<saturation_p>(color_parameter.template get<saturation_p>());
		scalar_type v = normalize_type::template process<value_p >(color_parameter.template get<value_p >());
		int region = int(6 * h);
		scalar_type f = h * 6 - region ;
		scalar_type p = v * (1 - s);
		scalar_type q = v * (1 - f * s);
		scalar_type t = v * (1 - (1 - f) * s);
		scalar_type g;
		switch(region % 6) {
		case 0:
			g = t;
			break;
		case 1:
			g = v;
			break;
		case 2:
			g = v;
			break;
		case 3:
			g = q;
			break;
		case 4:
			g = p;
			break;
		case 5:
			g = p;
			break;
		}
		return diverse_type::template process<green_p>(g);
	}

										 }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::hsv<tag_name> >::akin_type >::return_type
	blue(::color::model< ::color::category::hsv<tag_name> > const& color_parameter) {
		typedef ::color::category::hsv<tag_name> category_type;
		typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
		typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
		typedef ::color::_internal::diverse< akin_type > diverse_type;
		typedef ::color::_internal::normalize<category_type> normalize_type;
		enum {
			red_p = ::color::place::_internal::red<akin_type>::position_enum
			,green_p = ::color::place::_internal::green<akin_type>::position_enum
			,blue_p = ::color::place::_internal::blue<akin_type>::position_enum
		};
		enum {
			hue_p = ::color::place::_internal::hue<category_type>::position_enum
			,saturation_p = ::color::place::_internal::saturation<category_type>::position_enum
			,value_p = ::color::place::_internal::value<category_type>::position_enum
		};
		scalar_type h = normalize_type::template process<hue_p >(color_parameter.template get<hue_p >());
		scalar_type s = normalize_type::template process<saturation_p>(color_parameter.template get<saturation_p>());
		scalar_type v = normalize_type::template process<value_p >(color_parameter.template get<value_p >());
		int region = int(6 * h);
		scalar_type f = h * 6 - region ;
		scalar_type p = v * (1 - s);
		scalar_type q = v * (1 - f * s);
		scalar_type t = v * (1 - (1 - f) * s);
		scalar_type b;
		switch(region % 6) {
		case 0:
			b = p;
			break;
		case 1:
			b = p;
			break;
		case 2:
			b = t;
			break;
		case 3:
			b = v;
			break;
		case 4:
			b = v;
			break;
		case 5:
			b = q;
			break;
		}
		return diverse_type::template process<blue_p>(b);
	}

										 }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::model< ::color::category::hsv< tag_name> >::component_const_type
	hue(::color::model< ::color::category::hsv< tag_name> > const& color_parameter) {
		typedef ::color::category::hsv< tag_name> category_type;
		enum { hue_p = ::color::place::_internal::hue<category_type>::position_enum };
		return color_parameter.template get<hue_p>();
	}

									   }
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		hue
		(
			::color::model< ::color::category::hsv< tag_name > > & color_parameter
			,typename ::color::model< ::color::category::hsv< tag_name > >::component_input_const_type component_parameter
	) {
		typedef ::color::category::hsv< tag_name > category_type;
		enum { hue_p = ::color::place::_internal::hue< category_type >::position_enum };
		color_parameter.template set<hue_p>(component_parameter);
	}

								}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		blue
		(
			::color::model< ::color::category::hsv< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::hsv< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::hsv< tag_name > category_type;
		typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
		enum { blue_p = ::color::place::_internal::blue<akin_type>::position_enum };
		::color::model< akin_type > rgb(color_parameter);
		rgb.template set<blue_p > (component_parameter);
		color_parameter = rgb;
	}

					}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		green
		(
			::color::model< ::color::category::hsv< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::hsv< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::hsv< tag_name > category_type;
		typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
		enum { green_p = ::color::place::_internal::green<akin_type>::position_enum };
		::color::model< akin_type > rgb(color_parameter);
		rgb.template set< green_p > (component_parameter);
		color_parameter = rgb;
	}

					}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		red
		(
			::color::model< ::color::category::hsv< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::hsv< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::hsv< tag_name > category_type;
		typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
		enum { red_p = ::color::place::_internal::red<akin_type>::position_enum };
		::color::model< akin_type > rgb(color_parameter);
		rgb.template set<red_p> (component_parameter);
		color_parameter = rgb;
	}

					}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		gray
		(
			::color::model< ::color::category::hsv< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::gray< ::color::category::hsv< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::hsv< tag_name > category_type;
		typedef typename ::color::akin::gray< category_type >::akin_type akin_type;
		typedef double scalar_type;
		typedef ::color::_internal::reformat< category_type, akin_type, scalar_type > reformat_type;
		enum {
			value_p = ::color::place::_internal::value<category_type>::position_enum
		};
		color_parameter.template set<value_p>(reformat_type::template process<value_p,0>(component_parameter));
	}

										 }
}

namespace color {
	namespace _internal {

		template< typename hsv_tag_name, typename cmy_tag_name >
		struct convert
		<
			::color::category::hsv< hsv_tag_name >
			,::color::category::cmy< cmy_tag_name >
			> {
			public:
			typedef ::color::category::hsv< hsv_tag_name > category_left_type;
			typedef ::color::category::cmy< cmy_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::scalar<category_left_type> scalar_trait_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

	enum {
		hue_p = ::color::place::_internal::hue<category_left_type >::position_enum
		,saturation_p = ::color::place::_internal::saturation<category_left_type>::position_enum
		,value_p = ::color::place::_internal::value<category_left_type>::position_enum
	};

	enum {
		cyan_p = ::color::place::_internal::cyan<category_right_type>::position_enum
		,yellow_p = ::color::place::_internal::yellow<category_right_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_right_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		scalar_type r = scalar_type(1) - normalize_type::template process<cyan_p >(container_right_trait_type::template get<cyan_p >(right));
		scalar_type g = scalar_type(1) - normalize_type::template process<yellow_p >(container_right_trait_type::template get<yellow_p >(right));
		scalar_type b = scalar_type(1) - normalize_type::template process<magenta_p>(container_right_trait_type::template get<magenta_p>(right));
		scalar_type lo = std::min<scalar_type>({r,g,b});
		scalar_type v = std::max<scalar_type>({r,g,b});
		scalar_type delta = v - lo;
		scalar_type h = 0;
		scalar_type s = 0;
		if((false == scalar_trait_type::is_small(v))
		   && (false == scalar_trait_type::is_small(delta))) {
			s = delta / v;
			if(v == r) {
				h = (scalar_type(60)/scalar_type(360)) * (g - b) / delta + (g < b ? scalar_type(1) : scalar_type(0));
			}
			if(v == g) {
				h = (scalar_type(60)/scalar_type(360)) * (b - r) / delta + (scalar_type(120)/scalar_type(360));
			}
			if(v == b) {
				h = (scalar_type(60)/scalar_type(360)) * (r - g) / delta + (scalar_type(240)/scalar_type(360));
			}
		}
		container_left_trait_type::template set<hue_p >(left, diverse_type::template process<hue_p >(h));
		container_left_trait_type::template set<saturation_p>(left, diverse_type::template process<saturation_p>(s));
		container_left_trait_type::template set<value_p >(left, diverse_type::template process<value_p >(v));
	}
													 };

										   }
}

namespace color {
	namespace _internal {

		template< typename hsv_tag_name, typename cmyk_tag_name >
		struct convert
		<
			::color::category::hsv< hsv_tag_name >
			,::color::category::cmyk< cmyk_tag_name >
			> {
			public:
			typedef ::color::category::hsv< hsv_tag_name > hsv_category_type, category_left_type;
			typedef ::color::category::cmyk< cmyk_tag_name > cmyk_category_type, category_right_type;

			typedef typename ::color::akin::rgb< cmyk_category_type >::akin_type rgb_category_type;

			typedef ::color::model< hsv_category_type > hsv_model_type;
			typedef ::color::model< cmyk_category_type > cmyk_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = hsv_model_type(rgb_model_type(cmyk_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace _internal {

		template< typename hsv_tag_name, typename gray_tag_name >
		struct convert
		<
			::color::category::hsv< hsv_tag_name >
			,::color::category::gray< gray_tag_name >
			> {
			public:
			typedef ::color::category::hsv< hsv_tag_name > category_left_type;
			typedef ::color::category::gray< gray_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::bound<category_left_type> bound_left_trait_type;
			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	enum {
		hue_p = ::color::place::_internal::hue<category_left_type>::position_enum
		,saturation_p = ::color::place::_internal::saturation<category_left_type>::position_enum
		,value_p = ::color::place::_internal::value<category_left_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		container_left_trait_type::template set<hue_p>(left, bound_left_trait_type::template minimum<hue_p>());
		container_left_trait_type::template set<saturation_p>(left, bound_left_trait_type::template minimum<saturation_p>());
		container_left_trait_type::template set<value_p>(left, reformat_type::template process<value_p,0>(container_right_trait_type::template get<0>(right)));
	}
																						  };

													}
}

namespace color {
	namespace _internal {

		template< typename hsv_tag_name, typename hsl_tag_name >
		struct convert
		<
			::color::category::hsv< hsv_tag_name >
			,::color::category::hsl< hsl_tag_name >
			> {
			public:
			typedef ::color::category::hsv< hsv_tag_name > category_left_type;
			typedef ::color::category::hsl< hsl_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		scalar_type h = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		scalar_type ss = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		scalar_type l = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		scalar_type v = (2 * l + ss*(1 - fabs(2*l-1))) /2;
		scalar_type s = 2*(v - l) / v;
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(h));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(s));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(v));
	}
											  };

										   }
}
namespace color {
	namespace _internal {

		template< typename tag_left_name, typename tag_right_name >
		struct convert
		<
			::color::category::hsv< tag_left_name >
			,::color::category::hsv< tag_right_name>
			> {
			public:
			typedef ::color::category::hsv< tag_left_name > category_left_type;
			typedef ::color::category::hsv< tag_right_name> category_right_type;

			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,0>(container_right_trait_type::template get<0>(right)));
		container_left_trait_type::template set<1>(left, reformat_type::template process<1,1>(container_right_trait_type::template get<1>(right)));
		container_left_trait_type::template set<2>(left, reformat_type::template process<2,2>(container_right_trait_type::template get<2>(right)));
	}
																					};
											  }
}
namespace color {
	namespace _internal {

		template< typename hsv_tag_name, typename rgb_tag_name >
		struct convert
		<
			::color::category::hsv< hsv_tag_name >
			,::color::category::rgb< rgb_tag_name >
			> {
			public:
			typedef ::color::category::hsv< hsv_tag_name > category_left_type;
			typedef ::color::category::rgb< rgb_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::scalar<category_left_type> scalar_trait_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

	enum {
		hue_p = ::color::place::_internal::hue<category_left_type>::position_enum
		,saturation_p = ::color::place::_internal::saturation<category_left_type>::position_enum
		, value_p = ::color::place::_internal::value<category_left_type>::position_enum
	};

	enum {
		red_p = ::color::place::_internal::red<category_right_type>::position_enum
		,green_p = ::color::place::_internal::green<category_right_type>::position_enum
		, blue_p = ::color::place::_internal::blue<category_right_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		scalar_type r = normalize_type::template process<red_p >(container_right_trait_type::template get<red_p >(right));
		scalar_type g = normalize_type::template process<green_p>(container_right_trait_type::template get<green_p>(right));
		scalar_type b = normalize_type::template process<blue_p >(container_right_trait_type::template get<blue_p >(right));
		scalar_type lo = std::min<scalar_type>({r,g,b});
		scalar_type v = std::max<scalar_type>({r,g,b});
		scalar_type delta = v - lo;
		scalar_type h = 0;
		scalar_type s = 0;
		if((false == scalar_trait_type::is_small(v))
		   && (false == scalar_trait_type::is_small(delta))) {
			s = delta / v;
			if(v == r) {
				h = (scalar_type(60)/scalar_type(360)) * (g - b) / delta + (g < b ? scalar_type(1) : scalar_type(0));
			}
			if(v == g) {
				h = (scalar_type(60)/scalar_type(360)) * (b - r) / delta + (scalar_type(120)/scalar_type(360));
			}
			if(v == b) {
				h = (scalar_type(60)/scalar_type(360)) * (r - g) / delta + (scalar_type(240)/scalar_type(360));
			}
		}
		container_left_trait_type::template set< hue_p>(left, diverse_type::template process< hue_p>(h));
		container_left_trait_type::template set<saturation_p>(left, diverse_type::template process<saturation_p>(s));
		container_left_trait_type::template set< value_p>(left, diverse_type::template process< value_p>(v));
	}
													 };

										   }
}

namespace color {
	namespace akin {

		template< >struct yiq< ::color::category::cmyk_uint8 > {
			typedef ::color::category::yiq_uint8 akin_type;
		};
		template< >struct yiq< ::color::category::cmyk_uint16 > {
			typedef ::color::category::yiq_uint16 akin_type;
		};
		template< >struct yiq< ::color::category::cmyk_uint32 > {
			typedef ::color::category::yiq_uint32 akin_type;
		};
		template< >struct yiq< ::color::category::cmyk_uint64 > {
			typedef ::color::category::yiq_uint64 akin_type;
		};
		template< >struct yiq< ::color::category::cmyk_float > {
			typedef ::color::category::yiq_float akin_type;
		};
		template< >struct yiq< ::color::category::cmyk_double > {
			typedef ::color::category::yiq_double akin_type;
		};
		template< >struct yiq< ::color::category::cmyk_ldouble > {
			typedef ::color::category::yiq_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct yiq< ::color::category::gray_uint8 > {
			typedef ::color::category::yiq_uint8 akin_type;
		};
		template< >struct yiq< ::color::category::gray_uint16 > {
			typedef ::color::category::yiq_uint16 akin_type;
		};
		template< >struct yiq< ::color::category::gray_uint32 > {
			typedef ::color::category::yiq_uint32 akin_type;
		};
		template< >struct yiq< ::color::category::gray_uint64 > {
			typedef ::color::category::yiq_uint64 akin_type;
		};
		template< >struct yiq< ::color::category::gray_float > {
			typedef ::color::category::yiq_float akin_type;
		};
		template< >struct yiq< ::color::category::gray_double > {
			typedef ::color::category::yiq_double akin_type;
		};
		template< >struct yiq< ::color::category::gray_ldouble > {
			typedef ::color::category::yiq_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct yiq< ::color::category::hsl_uint8 > {
			typedef ::color::category::yiq_uint8 akin_type;
		};
		template< >struct yiq< ::color::category::hsl_uint16 > {
			typedef ::color::category::yiq_uint16 akin_type;
		};
		template< >struct yiq< ::color::category::hsl_uint32 > {
			typedef ::color::category::yiq_uint32 akin_type;
		};
		template< >struct yiq< ::color::category::hsl_uint64 > {
			typedef ::color::category::yiq_uint64 akin_type;
		};
		template< >struct yiq< ::color::category::hsl_float > {
			typedef ::color::category::yiq_float akin_type;
		};
		template< >struct yiq< ::color::category::hsl_double > {
			typedef ::color::category::yiq_double akin_type;
		};
		template< >struct yiq< ::color::category::hsl_ldouble > {
			typedef ::color::category::yiq_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct yiq< ::color::category::hsv_uint8 > {
			typedef ::color::category::yiq_uint8 akin_type;
		};
		template< >struct yiq< ::color::category::hsv_uint16 > {
			typedef ::color::category::yiq_uint16 akin_type;
		};
		template< >struct yiq< ::color::category::hsv_uint32 > {
			typedef ::color::category::yiq_uint32 akin_type;
		};
		template< >struct yiq< ::color::category::hsv_uint64 > {
			typedef ::color::category::yiq_uint64 akin_type;
		};
		template< >struct yiq< ::color::category::hsv_float > {
			typedef ::color::category::yiq_float akin_type;
		};
		template< >struct yiq< ::color::category::hsv_double > {
			typedef ::color::category::yiq_double akin_type;
		};
		template< >struct yiq< ::color::category::hsv_ldouble > {
			typedef ::color::category::yiq_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< typename tag_name >
		struct yiq< ::color::category::yiq< tag_name > > {
			public:
			typedef ::color::category::yiq< tag_name > akin_type;
										  };

		}
}

namespace color {
	namespace akin {

		template< >struct yiq< ::color::category::yuv_uint8 > {
			typedef ::color::category::yiq_uint8 akin_type;
		};
		template< >struct yiq< ::color::category::yuv_uint16 > {
			typedef ::color::category::yiq_uint16 akin_type;
		};
		template< >struct yiq< ::color::category::yuv_uint32 > {
			typedef ::color::category::yiq_uint32 akin_type;
		};
		template< >struct yiq< ::color::category::yuv_uint64 > {
			typedef ::color::category::yiq_uint64 akin_type;
		};
		template< >struct yiq< ::color::category::yuv_float > {
			typedef ::color::category::yiq_float akin_type;
		};
		template< >struct yiq< ::color::category::yuv_double > {
			typedef ::color::category::yiq_double akin_type;
		};
		template< >struct yiq< ::color::category::yuv_ldouble > {
			typedef ::color::category::yiq_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace trait {

		template <> struct info< ::color::category::yiq_uint8 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::yiq_uint16 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::yiq_uint32 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::yiq_uint64 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::yiq_float > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::yiq_double > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::yiq_ldouble > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};

							   }
}

namespace color {
	namespace _internal {
		namespace utility {
			namespace bound {

				template< typename index_name, typename scalar_name >
				struct yiq_scalar {
					public:
					typedef scalar_name scalar_type;
					typedef index_name index_type;

					typedef ::color::_internal::utility::type::traitC< scalar_type > trait_type;
					typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

					typedef typename trait_type::instance_type instance_type;
					typedef typename trait_type::return_image_type return_image_type;

					typedef typename index_trait_type::instance_type index_instance_type;
					typedef typename index_trait_type::input_const_type index_input_const_type;

					template< index_instance_type index >
	static return_image_type maximum() {
		static instance_type max_list[] = { 1, scalar_type(0.5957161349127745527), scalar_type(0.5225910452916111683) };
		return max_list[index];
	}

	static return_image_type maximum(index_input_const_type index) {
		static instance_type max_list[] = { 1, scalar_type(0.5957161349127745527), scalar_type(0.5225910452916111683) };
		return max_list[index];
	}

	template< index_instance_type index >
	static return_image_type minimum() {
		static instance_type min_list[] = { 0, scalar_type(-0.5957161349127745527), scalar_type(-0.5225910452916111683) };
		return min_list[index];
	}

	static return_image_type minimum(index_input_const_type index) {
		static instance_type min_list[] = { 0, scalar_type(-0.5957161349127745527), scalar_type(-0.5225910452916111683) };
		return min_list[index];
	}

	template< index_instance_type index >
	static return_image_type range() {
		static instance_type range_list[] = { 1, scalar_type(2*0.5957161349127745527), scalar_type(2 * 0.5225910452916111683) };
		return range_list[index];
	}

	static return_image_type range(index_input_const_type index) {
		static instance_type range_list[] = { 1, scalar_type(2*0.5957161349127745527), scalar_type(2*0.5225910452916111683) };
		return range_list[index];
	}
			};

			}
							}
																	}
}

namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::yiq_double >
		: public ::color::_internal::utility::bound::yiq_scalar< unsigned, double > {
		};

															   }
}

namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::yiq_float >
		: public ::color::_internal::utility::bound::yiq_scalar< unsigned, float > {
		};

															   }
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::yiq_ldouble >
		: public ::color::_internal::utility::bound::yiq_scalar< unsigned, long double > {
		};

															   }
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::yiq_uint16 >
		: public ::color::_internal::utility::bound::general< std::uint16_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::yiq_uint32 >
		: public ::color::_internal::utility::bound::general< std::uint32_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::yiq_uint64 >
		: public ::color::_internal::utility::bound::general< std::uint64_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::yiq_uint8 >
		: public ::color::_internal::utility::bound::general< std::uint8_t, unsigned > {
		};

															}
}

namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::yiq_double >
		: public ::color::_internal::utility::container::array< double, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::yiq_float >
		: public ::color::_internal::utility::container::array< float, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::yiq_ldouble >
		: public ::color::_internal::utility::container::array< long double, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::yiq_uint16 >
		: public ::color::_internal::utility::container::array< std::uint16_t, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::yiq_uint32 >
		: public ::color::_internal::utility::container::array< std::uint32_t, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::yiq_uint64 >
		: public ::color::_internal::utility::container::array< std::uint64_t, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::yiq_uint8 >
		: public ::color::_internal::utility::container::array< std::uint8_t, 3 > {
		};

															  }
}

namespace color {
	namespace _internal {

		template< typename type_name >
		struct pick_yiq {
			typedef ::color::category::yiq_uint32 category_type;
		};

		template<> struct pick_yiq< std::uint8_t > {
			typedef ::color::category::yiq_uint8 category_type;
		};
		template<> struct pick_yiq< std::uint16_t > {
			typedef ::color::category::yiq_uint16 category_type;
		};
		template<> struct pick_yiq< std::uint32_t > {
			typedef ::color::category::yiq_uint32 category_type;
		};
		template<> struct pick_yiq< std::uint64_t > {
			typedef ::color::category::yiq_uint64 category_type;
		};
		template<> struct pick_yiq< float > {
			typedef ::color::category::yiq_float category_type;
		};
		template<> struct pick_yiq< double > {
			typedef ::color::category::yiq_double category_type;
		};
		template<> struct pick_yiq< long double > {
			typedef ::color::category::yiq_ldouble category_type;
		};
								  }

	template< typename type_name >
	using yiq = ::color::model< typename ::color::_internal::pick_yiq< type_name >::category_type >;

}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::model< ::color::category::yiq< tag_name> >::component_const_type
	inphase(::color::model< ::color::category::yiq< tag_name> > const& color_parameter) {
		typedef ::color::category::yiq< tag_name> category_type;
		enum { inphase_p = ::color::place::_internal::inphase<category_type>::position_enum };
		return color_parameter.template get<inphase_p>();
	}

									   }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::model< ::color::category::yiq< tag_name> >::component_const_type
	quadrature(::color::model< ::color::category::yiq< tag_name> > const& color_parameter) {
		typedef ::color::category::yiq< tag_name> category_type;
		enum { quadrature_p = ::color::place::_internal::quadrature<category_type>::position_enum };
		return color_parameter.template get<quadrature_p>();
	}

									   }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::rgb<::color::category::yiq<tag_name> >::akin_type >::return_type
	red(::color::model< ::color::category::yiq<tag_name> > const& color_parameter) {
		typedef ::color::category::yiq<tag_name> category_type;
		typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
		typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
		typedef ::color::constant::yiq<category_type> yiq_const_type;
		typedef ::color::_internal::diverse< akin_type > diverse_type;
		typedef ::color::_internal::normalize<category_type> normalize_type;
		enum {
			luminance_p = ::color::place::_internal::luminance<category_type>::position_enum
			, inphase_p = ::color::place::_internal::inphase<category_type>::position_enum
			,quadrature_p = ::color::place::_internal::quadrature<category_type>::position_enum
		};
		enum {
			red_p = ::color::place::_internal::red<akin_type>::position_enum
		};
		static scalar_type a11 = yiq_const_type::a11(), a12 = yiq_const_type::a12(), a13 = yiq_const_type::a13();
		scalar_type y = normalize_type::template process< luminance_p>(color_parameter.template get< luminance_p>());
		scalar_type i = normalize_type::template process< inphase_p>(color_parameter.template get< inphase_p>());
		scalar_type q = normalize_type::template process<quadrature_p>(color_parameter.template get<quadrature_p>());
		i = (scalar_type(2) * i - scalar_type(1)) * yiq_const_type::i_max();
		q = (scalar_type(2) * q - scalar_type(1)) * yiq_const_type::q_max();
		scalar_type r = a11 * y + a12 * i + a13 * q;
		return diverse_type::template process<red_p>(r);
	}

										 }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::rgb<::color::category::yiq<tag_name> >::akin_type >::return_type
	green(::color::model< ::color::category::yiq<tag_name> > const& color_parameter) {
		typedef ::color::category::yiq<tag_name> category_type;
		typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
		typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
		typedef ::color::constant::yiq<category_type> yiq_const_type;
		typedef ::color::_internal::diverse< akin_type > diverse_type;
		typedef ::color::_internal::normalize<category_type> normalize_type;
		enum {
			luminance_p = ::color::place::_internal::luminance<category_type>::position_enum
			, inphase_p = ::color::place::_internal::inphase<category_type>::position_enum
			,quadrature_p = ::color::place::_internal::quadrature<category_type>::position_enum
		};
		enum {
			green_p = ::color::place::_internal::green<akin_type>::position_enum
		};
		static scalar_type a21 = yiq_const_type::a21(), a22 = yiq_const_type::a22(), a23 = yiq_const_type::a23();
		scalar_type y = normalize_type::template process< luminance_p>(color_parameter.template get< luminance_p>());
		scalar_type i = normalize_type::template process< inphase_p>(color_parameter.template get< inphase_p>());
		scalar_type q = normalize_type::template process<quadrature_p>(color_parameter.template get<quadrature_p>());
		i = (scalar_type(2) * i - scalar_type(1)) * yiq_const_type::i_max();
		q = (scalar_type(2) * q - scalar_type(1)) * yiq_const_type::q_max();
		scalar_type g = a21 * y + a22 * i + a23 * q;
		return diverse_type::template process<green_p>(g);
	}

										 }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::rgb<::color::category::yiq<tag_name> >::akin_type >::return_type
	blue(::color::model< ::color::category::yiq<tag_name> > const& color_parameter) {
		typedef ::color::category::yiq<tag_name> category_type;
		typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
		typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
		typedef ::color::constant::yiq<category_type> yiq_const_type;
		typedef ::color::_internal::diverse<akin_type> diverse_type;
		typedef ::color::_internal::normalize<category_type> normalize_type;
		enum {
			luminance_p = ::color::place::_internal::luminance<category_type>::position_enum
			, inphase_p = ::color::place::_internal::inphase<category_type>::position_enum
			,quadrature_p = ::color::place::_internal::quadrature<category_type>::position_enum
		};
		enum {
			blue_p = ::color::place::_internal::blue<akin_type>::position_enum
		};
		static scalar_type a31 = yiq_const_type::a31(), a32 = yiq_const_type::a32(), a33 = yiq_const_type::a33();
		scalar_type y = normalize_type::template process< luminance_p>(color_parameter.template get< luminance_p>());
		scalar_type i = normalize_type::template process< inphase_p>(color_parameter.template get< inphase_p>());
		scalar_type q = normalize_type::template process<quadrature_p>(color_parameter.template get<quadrature_p>());
		i = (scalar_type(2) * i - scalar_type(1)) * yiq_const_type::i_max();
		q = (scalar_type(2) * q - scalar_type(1)) * yiq_const_type::q_max();
		scalar_type b = a31 * y + a32 * i + a33 * q;
		return diverse_type::template process<blue_p>(b);
	}

										 }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::gray< ::color::category::yiq<tag_name> >::akin_type >::return_type
	gray(::color::model< ::color::category::yiq<tag_name> > const& color_parameter) {
		typedef ::color::category::yiq< tag_name > category_type;
		typedef typename ::color::trait::scalar< category_type > ::instance_type scalar_type;
		typedef typename ::color::akin::gray< category_type >::akin_type akin_type;
		typedef ::color::_internal::reformat< akin_type, category_type, scalar_type > reformat_type;
		return reformat_type::template process<0,0>(color_parameter.template get<0>());
	}

											   }
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		red
		(
			::color::model< ::color::category::yiq< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::yiq< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::yiq< tag_name > category_type;
		typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
		enum { red_p = ::color::place::_internal::red<akin_type>::position_enum };
		::color::model< akin_type > rgb(color_parameter);
		rgb.template set< red_p > (component_parameter);
		color_parameter = rgb;
	}

					}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		green
		(
			::color::model< ::color::category::yiq< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::yiq< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::yiq< tag_name > category_type;
		typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
		enum { green_p = ::color::place::_internal::green<akin_type>::position_enum };
		::color::model< akin_type > rgb(color_parameter);
		rgb.template set< green_p > (component_parameter);
		color_parameter = rgb;
	}

					}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		blue
		(
			::color::model< ::color::category::yiq< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::yiq< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::yiq< tag_name > category_type;
		typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
		enum { blue_p = ::color::place::_internal::blue<akin_type>::position_enum };
		::color::model< akin_type > rgb(color_parameter);
		rgb.template set<blue_p > (component_parameter);
		color_parameter = rgb;
	}

					}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		gray
		(
			::color::model< ::color::category::yiq< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::gray< ::color::category::yiq< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::yiq< tag_name > category_type;
		typedef typename ::color::akin::gray< category_type >::akin_type akin_type;
		typedef double scalar_type;
		typedef ::color::_internal::reformat< category_type, akin_type, scalar_type > reformat_type;
		enum {
			luminance_p = ::color::place::_internal::luminance<category_type>::position_enum
		};
		color_parameter.template set<luminance_p>(reformat_type::template process<luminance_p,0>(component_parameter));
	}

											 }
}

namespace color {
	namespace _internal {

		template< typename yiq_tag_name, typename cmy_tag_name >
		struct convert
		<
			::color::category::yiq< yiq_tag_name >
			,::color::category::cmy< cmy_tag_name >
			> {
			public:
			typedef ::color::category::yiq< yiq_tag_name > category_left_type;
			typedef ::color::category::cmy< cmy_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::constant::yiq< category_left_type > yiq_const_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

	enum {
		luminance_p = ::color::place::_internal::luminance<category_left_type>::position_enum
		, inphase_p = ::color::place::_internal::inphase<category_left_type>::position_enum
		,quadrature_p = ::color::place::_internal::quadrature<category_left_type>::position_enum
	};

	enum {
		cyan_p = ::color::place::_internal::cyan<category_right_type>::position_enum
		,yellow_p = ::color::place::_internal::yellow<category_right_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_right_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		static scalar_type b11 = yiq_const_type::b11(), b12 = yiq_const_type::b12(), b13 = yiq_const_type::b13();
		static scalar_type b21 = yiq_const_type::b21(), b22 = yiq_const_type::b22(), b23 = yiq_const_type::b23();
		static scalar_type b31 = yiq_const_type::b31(), b32 = yiq_const_type::b32(), b33 = yiq_const_type::b33();
		static scalar_type const b32n = -b32;
		scalar_type r = scalar_type(1) - normalize_type::template process<cyan_p >(container_right_trait_type::template get<cyan_p >(right));
		scalar_type g = scalar_type(1) - normalize_type::template process<yellow_p >(container_right_trait_type::template get<yellow_p >(right));
		scalar_type b = scalar_type(1) - normalize_type::template process<magenta_p>(container_right_trait_type::template get<magenta_p>(right));
		scalar_type y = b11 * r + b12 * g + b13 * b;
		scalar_type i = b21 * r + b22 * g + b23 * b;
		scalar_type q = b31 * r + b32 * g + b33 * b;
		i = (i / b21 + scalar_type(1)) / scalar_type(2);
		q = (q / b32n + scalar_type(1)) / scalar_type(2);
		container_left_trait_type::template set< luminance_p>(left, diverse_type::template process< luminance_p>(y));
		container_left_trait_type::template set< inphase_p>(left, diverse_type::template process< inphase_p>(i));
		container_left_trait_type::template set<quadrature_p>(left, diverse_type::template process<quadrature_p>(q));
	}
														 };

										   }
}

namespace color {
	namespace _internal {

		template< typename yiq_tag_name, typename cmyk_tag_name >
		struct convert
		<
			::color::category::yiq< yiq_tag_name >
			,::color::category::cmyk< cmyk_tag_name >
			> {
			public:
			typedef ::color::category::yiq< yiq_tag_name > yiq_category_type, category_left_type;
			typedef ::color::category::cmyk< cmyk_tag_name > cmyk_category_type, category_right_type;

			typedef typename ::color::akin::rgb< cmyk_category_type >::akin_type rgb_category_type;

			typedef ::color::model< yiq_category_type > yiq_model_type;
			typedef ::color::model< cmyk_category_type > cmyk_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = yiq_model_type(rgb_model_type(cmyk_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace _internal {

		template< typename yiq_tag_name, typename gray_tag_name >
		struct convert
		<
			::color::category::yiq< yiq_tag_name >
			,::color::category::gray< gray_tag_name >
			> {
			public:
			typedef ::color::category::yiq< yiq_tag_name > category_left_type;
			typedef ::color::category::gray< gray_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::bound<category_left_type> bound_left_trait_type;
			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

	enum {
		luminance_p = ::color::place::_internal::luminance<category_left_type>::position_enum
		, inphase_p = ::color::place::_internal::inphase<category_left_type>::position_enum
		,quadrature_p = ::color::place::_internal::quadrature<category_left_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		scalar_type g = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		container_left_trait_type::template set< luminance_p>(left, diverse_type::template process<luminance_p>(g));
		container_left_trait_type::template set< inphase_p>(left, bound_left_trait_type::template minimum<inphase_p>());
		container_left_trait_type::template set<quadrature_p>(left, bound_left_trait_type::template minimum<quadrature_p>());
	}

														 };

										   }
}

namespace color {
	namespace _internal {

		template< typename yiq_tag_name, typename hsl_tag_name >
		struct convert
		<
			::color::category::yiq< yiq_tag_name >
			,::color::category::hsl< hsl_tag_name >
			> {
			public:
			typedef ::color::category::yiq< yiq_tag_name > yiq_category_type, category_left_type;
			typedef ::color::category::hsl< hsl_tag_name > hsl_category_type, category_right_type;

			typedef typename ::color::akin::rgb< hsl_category_type >::akin_type rgb_category_type;

			typedef ::color::model< yiq_category_type > yiq_model_type;
			typedef ::color::model< hsl_category_type > hsl_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = yiq_model_type(rgb_model_type(hsl_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace _internal {

		template< typename yiq_tag_name, typename hsv_tag_name >
		struct convert
		<
			::color::category::yiq< yiq_tag_name >
			,::color::category::hsv< hsv_tag_name >
			> {
			public:
			typedef ::color::category::yiq< yiq_tag_name > yiq_category_type, category_left_type;
			typedef ::color::category::hsv< hsv_tag_name > hsv_category_type, category_right_type;

			typedef typename ::color::akin::rgb< hsv_category_type >::akin_type rgb_category_type;

			typedef ::color::model< yiq_category_type > yiq_model_type;
			typedef ::color::model< hsv_category_type > hsv_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = yiq_model_type(rgb_model_type(hsv_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace _internal {

		template< typename yiq_tag_name, typename rgb_tag_name >
		struct convert
		<
			::color::category::yiq< yiq_tag_name >
			,::color::category::rgb< rgb_tag_name >
			> {
			public:
			typedef ::color::category::yiq< yiq_tag_name > category_left_type;
			typedef ::color::category::rgb< rgb_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::constant::yiq< category_left_type > yiq_const_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

	enum {
		luminance_p = ::color::place::_internal::luminance<category_left_type>::position_enum
		, inphase_p = ::color::place::_internal::inphase<category_left_type>::position_enum
		,quadrature_p = ::color::place::_internal::quadrature<category_left_type>::position_enum
	};

	enum {
		red_p = ::color::place::_internal::red<category_right_type>::position_enum
		,green_p = ::color::place::_internal::green<category_right_type>::position_enum
		,blue_p = ::color::place::_internal::blue<category_right_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		static scalar_type b11 = yiq_const_type::b11(), b12 = yiq_const_type::b12(), b13 = yiq_const_type::b13();
		static scalar_type b21 = yiq_const_type::b21(), b22 = yiq_const_type::b22(), b23 = yiq_const_type::b23();
		static scalar_type b31 = yiq_const_type::b31(), b32 = yiq_const_type::b32(), b33 = yiq_const_type::b33();
		static scalar_type const b32n = -b32;
		scalar_type r = normalize_type::template process<red_p >(container_right_trait_type::template get<red_p >(right));
		scalar_type g = normalize_type::template process<green_p>(container_right_trait_type::template get<green_p>(right));
		scalar_type b = normalize_type::template process<blue_p >(container_right_trait_type::template get<blue_p >(right));
		scalar_type y = b11 * r + b12 * g + b13 * b;
		scalar_type i = b21 * r + b22 * g + b23 * b;
		scalar_type q = b31 * r + b32 * g + b33 * b;
		i = (i / b21 + scalar_type(1)) / scalar_type(2);
		q = (q / b32n + scalar_type(1)) / scalar_type(2);
		container_left_trait_type::template set< luminance_p>(left, diverse_type::template process< luminance_p>(y));
		container_left_trait_type::template set< inphase_p>(left, diverse_type::template process< inphase_p>(i));
		container_left_trait_type::template set<quadrature_p>(left, diverse_type::template process<quadrature_p>(q));
	}
														 };

										   }
}

namespace color {
	namespace _internal {

		template< typename tag_left_name, typename tag_right_name >
		struct convert
		<
			::color::category::yiq< tag_left_name >
			,::color::category::yiq< tag_right_name>
			> {
			public:
			typedef ::color::category::yiq< tag_left_name > category_left_type;
			typedef ::color::category::yiq< tag_right_name> category_right_type;

			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,0>(container_right_trait_type::template get<0>(right)));
		container_left_trait_type::template set<1>(left, reformat_type::template process<1,1>(container_right_trait_type::template get<1>(right)));
		container_left_trait_type::template set<2>(left, reformat_type::template process<2,2>(container_right_trait_type::template get<2>(right)));
	}
																					};
											  }
}

namespace color {
	namespace akin {

		template< >struct yuv< ::color::category::cmy_uint8 > {
			typedef ::color::category::yuv_uint8 akin_type;
		};
		template< >struct yuv< ::color::category::cmy_uint16 > {
			typedef ::color::category::yuv_uint16 akin_type;
		};
		template< >struct yuv< ::color::category::cmy_uint32 > {
			typedef ::color::category::yuv_uint32 akin_type;
		};
		template< >struct yuv< ::color::category::cmy_uint64 > {
			typedef ::color::category::yuv_uint64 akin_type;
		};
		template< >struct yuv< ::color::category::cmy_float > {
			typedef ::color::category::yuv_float akin_type;
		};
		template< >struct yuv< ::color::category::cmy_double > {
			typedef ::color::category::yuv_double akin_type;
		};
		template< >struct yuv< ::color::category::cmy_ldouble > {
			typedef ::color::category::yuv_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct yuv< ::color::category::cmyk_uint8 > {
			typedef ::color::category::yuv_uint8 akin_type;
		};
		template< >struct yuv< ::color::category::cmyk_uint16 > {
			typedef ::color::category::yuv_uint16 akin_type;
		};
		template< >struct yuv< ::color::category::cmyk_uint32 > {
			typedef ::color::category::yuv_uint32 akin_type;
		};
		template< >struct yuv< ::color::category::cmyk_uint64 > {
			typedef ::color::category::yuv_uint64 akin_type;
		};
		template< >struct yuv< ::color::category::cmyk_float > {
			typedef ::color::category::yuv_float akin_type;
		};
		template< >struct yuv< ::color::category::cmyk_double > {
			typedef ::color::category::yuv_double akin_type;
		};
		template< >struct yuv< ::color::category::cmyk_ldouble > {
			typedef ::color::category::yuv_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct yuv< ::color::category::gray_uint8 > {
			typedef ::color::category::yuv_uint8 akin_type;
		};
		template< >struct yuv< ::color::category::gray_uint16 > {
			typedef ::color::category::yuv_uint16 akin_type;
		};
		template< >struct yuv< ::color::category::gray_uint32 > {
			typedef ::color::category::yuv_uint32 akin_type;
		};
		template< >struct yuv< ::color::category::gray_uint64 > {
			typedef ::color::category::yuv_uint64 akin_type;
		};
		template< >struct yuv< ::color::category::gray_float > {
			typedef ::color::category::yuv_float akin_type;
		};
		template< >struct yuv< ::color::category::gray_double > {
			typedef ::color::category::yuv_double akin_type;
		};
		template< >struct yuv< ::color::category::gray_ldouble > {
			typedef ::color::category::yuv_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct yuv< ::color::category::hsl_uint8 > {
			typedef ::color::category::yuv_uint8 akin_type;
		};
		template< >struct yuv< ::color::category::hsl_uint16 > {
			typedef ::color::category::yuv_uint16 akin_type;
		};
		template< >struct yuv< ::color::category::hsl_uint32 > {
			typedef ::color::category::yuv_uint32 akin_type;
		};
		template< >struct yuv< ::color::category::hsl_uint64 > {
			typedef ::color::category::yuv_uint64 akin_type;
		};
		template< >struct yuv< ::color::category::hsl_float > {
			typedef ::color::category::yuv_float akin_type;
		};
		template< >struct yuv< ::color::category::hsl_double > {
			typedef ::color::category::yuv_double akin_type;
		};
		template< >struct yuv< ::color::category::hsl_ldouble > {
			typedef ::color::category::yuv_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct yuv< ::color::category::hsv_uint8 > {
			typedef ::color::category::yuv_uint8 akin_type;
		};
		template< >struct yuv< ::color::category::hsv_uint16 > {
			typedef ::color::category::yuv_uint16 akin_type;
		};
		template< >struct yuv< ::color::category::hsv_uint32 > {
			typedef ::color::category::yuv_uint32 akin_type;
		};
		template< >struct yuv< ::color::category::hsv_uint64 > {
			typedef ::color::category::yuv_uint64 akin_type;
		};
		template< >struct yuv< ::color::category::hsv_float > {
			typedef ::color::category::yuv_float akin_type;
		};
		template< >struct yuv< ::color::category::hsv_double > {
			typedef ::color::category::yuv_double akin_type;
		};
		template< >struct yuv< ::color::category::hsv_ldouble > {
			typedef ::color::category::yuv_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct yuv< ::color::category::rgb_uint8 > {
			typedef ::color::category::yuv_uint8 akin_type;
		};
		template< >struct yuv< ::color::category::rgb_uint16 > {
			typedef ::color::category::yuv_uint16 akin_type;
		};
		template< >struct yuv< ::color::category::rgb_uint32 > {
			typedef ::color::category::yuv_uint32 akin_type;
		};
		template< >struct yuv< ::color::category::rgb_uint64 > {
			typedef ::color::category::yuv_uint64 akin_type;
		};
		template< >struct yuv< ::color::category::rgb_float > {
			typedef ::color::category::yuv_float akin_type;
		};
		template< >struct yuv< ::color::category::rgb_double > {
			typedef ::color::category::yuv_double akin_type;
		};
		template< >struct yuv< ::color::category::rgb_ldouble > {
			typedef ::color::category::yuv_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< >struct yuv< ::color::category::yiq_uint8 > {
			typedef ::color::category::yuv_uint8 akin_type;
		};
		template< >struct yuv< ::color::category::yiq_uint16 > {
			typedef ::color::category::yuv_uint16 akin_type;
		};
		template< >struct yuv< ::color::category::yiq_uint32 > {
			typedef ::color::category::yuv_uint32 akin_type;
		};
		template< >struct yuv< ::color::category::yiq_uint64 > {
			typedef ::color::category::yuv_uint64 akin_type;
		};
		template< >struct yuv< ::color::category::yiq_float > {
			typedef ::color::category::yuv_float akin_type;
		};
		template< >struct yuv< ::color::category::yiq_double > {
			typedef ::color::category::yuv_double akin_type;
		};
		template< >struct yuv< ::color::category::yiq_ldouble > {
			typedef ::color::category::yuv_ldouble akin_type;
		};

							 }
}

namespace color {
	namespace akin {

		template< typename tag_name >
		struct yuv< ::color::category::yuv< tag_name > > {
			public:
			typedef ::color::category::yuv< tag_name > akin_type;
										  };

		}
}

namespace color {
	namespace trait {

		template <> struct info< ::color::category::yuv_uint8 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::yuv_uint16 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::yuv_uint32 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::yuv_uint64 > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::yuv_float > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::yuv_double > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};
		template <> struct info< ::color::category::yuv_ldouble > {
			public:
			enum { implemented_enum = true };
			enum { meaningful_enum = true };
		};

							   }
}

namespace color {
	namespace _internal {
		namespace utility {
			namespace bound {

				template< typename index_name, typename scalar_name >
				struct yuv_scalar {
					public:
					typedef scalar_name scalar_type;
					typedef index_name index_type;

					typedef ::color::_internal::utility::type::traitC< scalar_type > trait_type;
					typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

					typedef typename trait_type::instance_type instance_type;
					typedef typename trait_type::return_image_type return_image_type;

					typedef typename index_trait_type::instance_type index_instance_type;
					typedef typename index_trait_type::input_const_type index_input_const_type;

					template< index_instance_type index >
	static return_image_type maximum() {
		static instance_type max_list[] = { 1, scalar_type(0.436), scalar_type(0.615) };
		return max_list[index];
	}

	static return_image_type maximum(index_input_const_type index) {
		static instance_type max_list[] = { 1, scalar_type(0.436), scalar_type(0.615) };
		return max_list[index];
	}

	template< index_instance_type index >
	static return_image_type minimum() {
		static instance_type min_list[] = { 0, scalar_type(-0.436), scalar_type(-0.615) };
		return min_list[index];
	}

	static return_image_type minimum(index_input_const_type index) {
		static instance_type min_list[] = { 0, scalar_type(-0.436), scalar_type(-0.615) };
		return min_list[index];
	}

	template< index_instance_type index >
	static return_image_type range() {
		static instance_type range_list[] = { 1, scalar_type(2*0.436), scalar_type(2 * 0.615) };
		return range_list[index];
	}

	static return_image_type range(index_input_const_type index) {
		static instance_type range_list[] = { 1, scalar_type(2*0.436), scalar_type(2*0.615) };
		return range_list[index];
	}
			};

			}
							}
																	}
}

namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::yuv_double >
		: public ::color::_internal::utility::bound::yuv_scalar< unsigned, double > {
		};

															   }
}

namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::yuv_float >
		: public ::color::_internal::utility::bound::yuv_scalar< unsigned, float > {
		};

															   }
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::yuv_ldouble >
		: public ::color::_internal::utility::bound::yuv_scalar< unsigned, long double > {
		};

															   }
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::yuv_uint16 >
		: public ::color::_internal::utility::bound::general< std::uint16_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::yuv_uint32 >
		: public ::color::_internal::utility::bound::general< std::uint32_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::yuv_uint64 >
		: public ::color::_internal::utility::bound::general< std::uint64_t, unsigned > {
		};

															}
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::yuv_uint8 >
		: public ::color::_internal::utility::bound::general< std::uint8_t, unsigned > {
		};

															}
}

namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::yuv_double >
		: public ::color::_internal::utility::component::array< double, unsigned > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::yuv_float >
		: public ::color::_internal::utility::component::array< float, unsigned > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::yuv_ldouble >
		: public ::color::_internal::utility::component::array< long double, unsigned> {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::yuv_uint16 >
		: public ::color::_internal::utility::component::array< std::uint16_t, unsigned > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::yuv_uint32 >
		: public ::color::_internal::utility::component::array< std::uint32_t, unsigned > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::yuv_uint64 >
		: public ::color::_internal::utility::component::array< std::uint64_t, unsigned > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct component< ::color::category::yuv_uint8 >
		: public ::color::_internal::utility::component::array< std::uint8_t, unsigned > {
		};

															  }
}

namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::yuv_double >
		: public ::color::_internal::utility::container::array< double, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::yuv_float >
		: public ::color::_internal::utility::container::array< float, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::yuv_ldouble >
		: public ::color::_internal::utility::container::array< long double, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::yuv_uint16 >
		: public ::color::_internal::utility::container::array< std::uint16_t, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::yuv_uint32 >
		: public ::color::_internal::utility::container::array< std::uint32_t, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::yuv_uint64 >
		: public ::color::_internal::utility::container::array< std::uint64_t, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct container< ::color::category::yuv_uint8 >
		: public ::color::_internal::utility::container::array< std::uint8_t, 3 > {
		};

															  }
}

namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::yuv_double >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::yuv_float >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::yuv_ldouble >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::yuv_uint16 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::yuv_uint32 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::yuv_uint64 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}
namespace color {
	namespace trait {

		template< >
		struct index< ::color::category::yuv_uint8 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

														 }
}

namespace color {
	namespace constant {

		template< typename category_name >
		struct yuv {
			public:
			typedef category_name category_type;

			typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

			typedef ::color::constant::yuv<category_type> this_type;

	static scalar_type const half() {
		return 0.5;
	}
	static scalar_type const one() {
		return 1;
	}
	static scalar_type const Wr() {
		return 0.298839;
	}
	static scalar_type const Wb() {
		return 0.114350;
	}
	static scalar_type const Wg() {
		return this_type::one() - this_type::Wr()-this_type::Wb();
	}
	static scalar_type const Umax() {
		return 0.436;
	}
	static scalar_type const Vmax() {
		return 0.615;
	}

	static scalar_type const u_min() {
		return -this_type::Umax();
	}
	static scalar_type const u_max() {
		return this_type::Umax();
	}
	static scalar_type const u_range() {
		return 2*this_type::Umax();
	}

	static scalar_type const v_min() {
		return -this_type::Vmax();
	}
	static scalar_type const v_max() {
		return this_type::Vmax();
	}
	static scalar_type const v_range() {
		return 2*this_type::Vmax();
	}

	static scalar_type u_deverse(scalar_type const& normal) {
		return this_type::u_range() * normal + this_type::u_min();
	}
	static scalar_type u_normalize(scalar_type const& divert) {
		return (divert + this_type::u_min()) /this_type::u_range();
	}

	static scalar_type v_deverse(scalar_type const& normal) {
		return this_type::v_range() * normal + this_type::v_min();
	}
	static scalar_type v_normalize(scalar_type const& divert) {
		return (divert + this_type::v_min()) /this_type::v_range();
	}
										  };

												   }
}

namespace color {
	namespace _internal {

		template< typename type_name >
		struct pick_yuv {
			typedef ::color::category::yuv_uint32 category_type;
		};

		template<> struct pick_yuv< std::uint8_t > {
			typedef ::color::category::yuv_uint8 category_type;
		};
		template<> struct pick_yuv< std::uint16_t > {
			typedef ::color::category::yuv_uint16 category_type;
		};
		template<> struct pick_yuv< std::uint32_t > {
			typedef ::color::category::yuv_uint32 category_type;
		};
		template<> struct pick_yuv< std::uint64_t > {
			typedef ::color::category::yuv_uint64 category_type;
		};
		template<> struct pick_yuv< float > {
			typedef ::color::category::yuv_float category_type;
		};
		template<> struct pick_yuv< double > {
			typedef ::color::category::yuv_double category_type;
		};
		template<> struct pick_yuv< long double > {
			typedef ::color::category::yuv_ldouble category_type;
		};
								  }

	template< typename type_name >
	using yuv = ::color::model< typename ::color::_internal::pick_yuv< type_name >::category_type >;

}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::gray< ::color::category::hsv<tag_name> >::akin_type >::return_type
	gray(::color::model< ::color::category::yuv<tag_name> > const& color_parameter) {
		typedef ::color::category::yuv< tag_name > category_type;
		typedef typename ::color::trait::scalar< category_type >::instance_type scalar_type;
		typedef typename ::color::akin::gray< category_type >::akin_type akin_type;
		typedef ::color::_internal::reformat< akin_type, category_type, scalar_type > reformat_type;
		return reformat_type::template process<0,0>(color_parameter.template get<0>());
	}

											   }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::rgb<::color::category::yuv<tag_name> >::akin_type >::return_type
	red(::color::model< ::color::category::yuv<tag_name> > const& color_parameter) {
		typedef ::color::category::yuv< tag_name > category_type;
		typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
		enum { red_p = ::color::place::_internal::red<akin_type>::position_enum };
		typedef ::color::_internal::diverse< akin_type > diverse_type;
		typedef ::color::_internal::normalize<category_type> normalize_type;
		typedef ::color::constant::yuv< category_type > yuv_const_type;
		typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
		static scalar_type const Wr = yuv_const_type::Wr();
		static scalar_type const Vmax = yuv_const_type::Vmax();
		static scalar_type const b11 = 1, b12 = 0, b13 = (1 - Wr) / Vmax;
		scalar_type y = normalize_type::template process<0>(color_parameter.template get<0>());
		scalar_type v = normalize_type::template process<2>(color_parameter.template get<2>());
		v = (v - scalar_type(0.5)) * scalar_type(2) * Vmax;
		scalar_type r = y + v * b13;
		return diverse_type::template process<red_p>(r);
	}

										 }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::rgb<::color::category::yuv<tag_name> >::akin_type >::return_type
	green(::color::model< ::color::category::yuv<tag_name> > const& color_parameter) {
		typedef ::color::category::yuv<tag_name> category_type;
		typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
		typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
		enum { green_p = ::color::place::_internal::green<akin_type>::position_enum };
		typedef ::color::_internal::diverse< akin_type > diverse_type;
		typedef ::color::_internal::normalize<category_type> normalize_type;
		typedef ::color::constant::yuv< category_type > yuv_const_type;
		static scalar_type const Wr = yuv_const_type::Wr();
		static scalar_type const Wb = yuv_const_type::Wb();
		static scalar_type const Wg = yuv_const_type::Wg();
		static scalar_type const Umax = yuv_const_type::Umax();
		static scalar_type const Vmax = yuv_const_type::Vmax();
		static scalar_type const b21 = 1, b22 = - Wb*(1 - Wb) / Umax / Wg, b23 = -Wr*(1 - Wr) / Vmax / Wg;
		scalar_type y = normalize_type::template process<0>(color_parameter.template get<0>());
		scalar_type u = normalize_type::template process<1>(color_parameter.template get<1>());
		scalar_type v = normalize_type::template process<2>(color_parameter.template get<2>());
		u = (u - scalar_type(0.5)) * scalar_type(2) * Umax;
		v = (v - scalar_type(0.5)) * scalar_type(2) * Vmax;
		scalar_type g = y + u * b22 + v * b23;
		return diverse_type::template process<green_p>(g);
	}

										 }
}

namespace color {
	namespace get {

		template< typename tag_name >
		inline
		typename ::color::trait::component< typename ::color::akin::rgb<::color::category::yuv<tag_name> >::akin_type >::return_type
	blue(::color::model< ::color::category::yuv<tag_name> > const& color_parameter) {
		typedef ::color::category::yuv<tag_name> category_type;
		typedef typename ::color::trait::scalar<category_type>::instance_type scalar_type;
		typedef typename ::color::akin::rgb<category_type>::akin_type akin_type;
		enum { blue_p = ::color::place::_internal::blue<akin_type>::position_enum };
		typedef ::color::_internal::diverse< akin_type > diverse_type;
		typedef ::color::_internal::normalize<category_type> normalize_type;
		typedef ::color::constant::yuv< category_type > yuv_const_type;
		static scalar_type const Wb = yuv_const_type::Wb();
		static scalar_type const Umax = yuv_const_type::Umax();
		static scalar_type const b31 = 1, b32 = ((1 - Wb) / Umax), b33 = 0;
		scalar_type y = normalize_type::template process<0>(color_parameter.template get<0>());
		scalar_type u = normalize_type::template process<1>(color_parameter.template get<1>());
		u = (u - scalar_type(0.5)) * scalar_type(2) * Umax;
		scalar_type b = y + u * b32;
		return diverse_type::template process<blue_p>(b);
	}

										 }
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		blue
		(
			::color::model< ::color::category::yuv< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::yuv< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::yuv< tag_name > category_type;
		typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
		enum { blue_p = ::color::place::_internal::blue<akin_type>::position_enum };
		::color::model< akin_type > rgb_instance(color_parameter);
		rgb_instance.template set<blue_p > (component_parameter);
		color_parameter = rgb_instance;
	}

							 }
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		green
		(
			::color::model< ::color::category::yuv< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::yuv< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::yuv< tag_name > category_type;
		typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
		enum { green_p = ::color::place::_internal::green<akin_type>::position_enum };
		::color::model< akin_type > rgb(color_parameter);
		rgb.template set< green_p > (component_parameter);
		color_parameter = rgb;
	}

					}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		red
		(
			::color::model< ::color::category::yuv< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::rgb< ::color::category::yuv< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::yuv< tag_name > category_type;
		typedef typename ::color::akin::rgb< category_type >::akin_type akin_type;
		enum { red_p = ::color::place::_internal::red<akin_type>::position_enum };
		::color::model< akin_type > rgb(color_parameter);
		rgb.template set<red_p> (component_parameter);
		color_parameter = rgb;
	}

					}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		gray
		(
			::color::model< ::color::category::yuv< tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::gray< ::color::category::yuv< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef ::color::category::yuv< tag_name > category_type;
		typedef typename ::color::akin::gray< category_type >::akin_type akin_type;
		typedef double scalar_type;
		typedef ::color::_internal::reformat< category_type, akin_type, scalar_type > reformat_type;
		color_parameter.template set<0>(reformat_type::template process<0,0>(component_parameter));
	}

								   }
}

namespace color {
	namespace _internal {

		template< typename yuv_tag_name, typename cmy_tag_name >
		struct convert
		<
			::color::category::yuv< yuv_tag_name >
			,::color::category::cmy< cmy_tag_name >
			> {
			public:
			typedef ::color::category::yuv< yuv_tag_name > category_left_type;
			typedef ::color::category::cmy< cmy_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

			typedef ::color::constant::yuv< category_left_type > yuv_const_type;

	enum {
		cyan_p = ::color::place::_internal::cyan<category_right_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_right_type>::position_enum
		,yellow_p = ::color::place::_internal::yellow<category_right_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		static scalar_type const Wr = yuv_const_type::Wr();
		static scalar_type const Wb = yuv_const_type::Wb();
		static scalar_type const Wg = yuv_const_type::Wg();
		static scalar_type const Umax = yuv_const_type::Umax();
		static scalar_type const Vmax = yuv_const_type::Vmax();
		scalar_type r = scalar_type(1) - normalize_type::template process<cyan_p >(container_right_trait_type::template get<cyan_p >(right));
		scalar_type g = scalar_type(1) - normalize_type::template process<magenta_p >(container_right_trait_type::template get<magenta_p >(right));
		scalar_type b = scalar_type(1) - normalize_type::template process<yellow_p >(container_right_trait_type::template get<yellow_p >(right));
		scalar_type y = Wr * r + Wg * g + Wb * b;
		scalar_type u = ((b - y) / (1 - Wb) + scalar_type(1)) / scalar_type(2);
		scalar_type v = ((r - y) / (1 - Wr) + scalar_type(1)) / scalar_type(2);
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(y));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(u));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(v));
	}
											  };

										   }
}

namespace color {
	namespace _internal {

		template< typename yuv_tag_name, typename cmyk_tag_name >
		struct convert
		<
			::color::category::yuv< yuv_tag_name >
			,::color::category::cmyk< cmyk_tag_name >
			> {
			public:
			typedef ::color::category::yuv< yuv_tag_name > yuv_category_type, category_left_type;
			typedef ::color::category::cmyk< cmyk_tag_name > cmyk_category_type, category_right_type;

			typedef typename ::color::akin::rgb< cmyk_category_type >::akin_type rgb_category_type;

			typedef ::color::model< yuv_category_type > yuv_model_type;
			typedef ::color::model< cmyk_category_type > cmyk_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = yuv_model_type(rgb_model_type(cmyk_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace _internal {

		template< typename yuv_tag_name, typename gray_tag_name >
		struct convert
		<
			::color::category::yuv< yuv_tag_name >
			,::color::category::gray< gray_tag_name >
			> {
			public:
			typedef ::color::category::yuv< yuv_tag_name > category_left_type;
			typedef ::color::category::gray< gray_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::bound<category_left_type> bound_left_trait_type;
			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		scalar_type g = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(g));
		container_left_trait_type::template set<1>(left, bound_left_trait_type::template minimum<1>());
		container_left_trait_type::template set<2>(left, bound_left_trait_type::template minimum<2>());
	}
											  };

										   }
}

namespace color {
	namespace _internal {

		template< typename yuv_tag_name, typename hsl_tag_name >
		struct convert
		<
			::color::category::yuv< yuv_tag_name >
			,::color::category::hsl< hsl_tag_name >
			> {
			public:
			typedef ::color::category::yuv< yuv_tag_name > yuv_category_type, category_left_type;
			typedef ::color::category::hsl< hsl_tag_name > hsl_category_type, category_right_type;

			typedef typename ::color::akin::rgb< hsl_category_type >::akin_type rgb_category_type;

			typedef ::color::model< yuv_category_type > yuv_model_type;
			typedef ::color::model< hsl_category_type > hsl_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = yuv_model_type(rgb_model_type(hsl_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace _internal {

		template< typename yuv_tag_name, typename hsv_tag_name >
		struct convert
		<
			::color::category::yuv< yuv_tag_name >
			,::color::category::hsv< hsv_tag_name >
			> {
			public:
			typedef ::color::category::yuv< yuv_tag_name > yuv_category_type, category_left_type;
			typedef ::color::category::hsv< hsv_tag_name > hsv_category_type, category_right_type;

			typedef typename ::color::akin::rgb< hsv_category_type >::akin_type rgb_category_type;

			typedef ::color::model< yuv_category_type > yuv_model_type;
			typedef ::color::model< hsv_category_type > hsv_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = yuv_model_type(rgb_model_type(hsv_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace _internal {
		template< typename yuv_tag_name, typename rgb_tag_name >
		struct convert
		<
			::color::category::yuv< yuv_tag_name >
			,::color::category::rgb< rgb_tag_name >
			> {
			public:
			typedef ::color::category::yuv< yuv_tag_name > category_left_type;
			typedef ::color::category::rgb< rgb_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

			typedef ::color::constant::yuv< category_left_type > yuv_const_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		enum {
			red_p = ::color::place::_internal::red<category_right_type>::position_enum
			,green_p = ::color::place::_internal::green<category_right_type>::position_enum
			,blue_p = ::color::place::_internal::blue<category_right_type>::position_enum
		};
		static scalar_type const Wr = yuv_const_type::Wr();
		static scalar_type const Wb = yuv_const_type::Wb();
		static scalar_type const Wg = yuv_const_type::Wg();
		static scalar_type const Umax = yuv_const_type::Umax();
		static scalar_type const Vmax = yuv_const_type::Vmax();
		scalar_type r = normalize_type::template process<red_p >(container_right_trait_type::template get<red_p >(right));
		scalar_type g = normalize_type::template process<green_p>(container_right_trait_type::template get<green_p>(right));
		scalar_type b = normalize_type::template process<blue_p >(container_right_trait_type::template get<blue_p >(right));
		scalar_type y = Wr * r + Wg * g + Wb * b;
		scalar_type u = ((b - y) / (1 - Wb) + scalar_type(1)) / scalar_type(2);
		scalar_type v = ((r - y) / (1 - Wr) + scalar_type(1)) / scalar_type(2);
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(y));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(u));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(v));
	}
											  };

										   }
}

namespace color {
	namespace _internal {

		template< typename yuv_tag_name, typename yiq_tag_name >
		struct convert
		<
			::color::category::yuv< yuv_tag_name >
			,::color::category::yiq< yiq_tag_name >
			> {
			public:
			typedef ::color::category::yuv< yuv_tag_name > yuv_category_type, category_left_type;
			typedef ::color::category::yiq< yiq_tag_name > yiq_category_type, category_right_type;

			typedef typename ::color::akin::rgb< yiq_category_type >::akin_type rgb_category_type;

			typedef ::color::model< yuv_category_type > yuv_model_type;
			typedef ::color::model< yiq_category_type > yiq_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = yuv_model_type(rgb_model_type(yiq_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace _internal {

		template< typename tag_left_name, typename tag_right_name >
		struct convert
		<
			::color::category::yuv< tag_left_name >
			,::color::category::yuv< tag_right_name>
			> {
			public:
			typedef ::color::category::yuv< tag_left_name > category_left_type;
			typedef ::color::category::yuv< tag_right_name> category_right_type;

			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,0>(container_right_trait_type::template get<0>(right)));
		container_left_trait_type::template set<1>(left, reformat_type::template process<1,1>(container_right_trait_type::template get<1>(right)));
		container_left_trait_type::template set<2>(left, reformat_type::template process<2,2>(container_right_trait_type::template get<2>(right)));
	}
																					};
											  }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void black(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0, 0, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
		void gray
		(
			::color::model< ::color::category::yuv< tag_name > > & color_parameter
			,typename ::color::trait::scalar< ::color::category::yuv< tag_name > >::input_const_type percent
	) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		color_parameter = right_type({ percent/100, 0, 0 });
	}

	template< typename tag_name >
	inline
	void gray50(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.5, 0, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void white(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 1, 0, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void red(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.299, -0.147137698, 0.615 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void green(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.2935, -0.144431151, -0.257492867 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void blue(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.114, 0.436, -0.100014265 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void cyan(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.701, 0.147137698, -0.615 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void magenta(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.413, 0.288862302, 0.514985735 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void yellow(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.886, -0.436, 0.100014265 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void aqua(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.701, 0.147137698, -0.615 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void fuchsia(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.413, 0.288862302, 0.514985735 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void lime(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.587, -0.288862302, -0.514985735 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void maroon(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.1495, -0.0735688488, 0.3075 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void navy(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.057, 0.218, -0.0500071327 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void olive(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.443, -0.218, 0.0500071327 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void orange(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.68055, -0.334898194, 0.280259272 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void purple(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.2065, 0.144431151, 0.257492867 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void silver(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.75, 0, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void teal(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.3505, 0.0735688488, -0.3075 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void violet(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.684721569, 0.122341681, 0.218111605 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void aquamarine(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.831276471, 4.7280131E-05, -0.290634849 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void azure(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.9813125, 0.00919610609, -0.0384375 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void beige(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.949607843, -0.042745098, 0.00980532013 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void bisque(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.898125, -0.0728922122, 0.0893767832 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void brown(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.308929412, -0.0709723012, 0.296647059 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void chocolate(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.501352941, -0.188821405, 0.282651255 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void coral(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.62784, -0.156408849, 0.32650271 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void crimson(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.330823529, -0.0470099588, 0.466664429 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void gainsboro(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.858823529, -5.55111512E-17, -1.11022302E-16 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void gold(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.793921569, -0.390688266, 0.180796341 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void indigo(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.146058824, 0.178998716, 0.129894688 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void ivory(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.992875, -0.02725, 0.00625089158 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void khaki(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.8713125, -0.158117664, 0.0580674929 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void lavender(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.910901961, 0.0341960784, -0.0078442561 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void linen(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.946049755, -0.0226610532, 0.0301292114 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void moccasin(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.904764706, -0.0959400699, 0.0835516489 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void orchid(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.609105882, 0.113236879, 0.215641353 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void peru(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.57294, -0.158918555, 0.199203852 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void pink(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.831729412, -0.0175438233, 0.147626836 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void plum(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.726247059, 0.0691003939, 0.123192666 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void salmon(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.637601961, -0.0937661488, 0.300736049 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void sienna(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.396486275, -0.10826957, 0.202629521 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void snow(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.986254902, -0.00288505289, 0.0120588235 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void tan(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.723176471, -0.0857024742, 0.0880414534 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void thistle(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.789509804, 0.0283198336, 0.0504887975 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void tomato(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.558635294, -0.13788816, 0.387217253 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void turquoise(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.681, 0.0647110609, -0.378124108 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void wheat(::color::model< ::color::category::yuv< tag_name > > & color_parameter) {
		typedef ::color::category::yuv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yuv< double > right_type;
		static left_type local(right_type({ 0.878333333, -0.0867928119, 0.0723357389 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace _internal {

		template< typename yiq_tag_name, typename yuv_tag_name >
		struct convert
		<
			::color::category::yiq< yiq_tag_name >
			,::color::category::yuv< yuv_tag_name >
			> {
			public:
			typedef ::color::category::yiq< yiq_tag_name > yiq_category_type, category_left_type;
			typedef ::color::category::yuv< yuv_tag_name > yuv_category_type, category_right_type;

			typedef typename ::color::akin::rgb< yuv_category_type >::akin_type rgb_category_type;

			typedef ::color::model< yiq_category_type > yiq_model_type;
			typedef ::color::model< yuv_category_type > yuv_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = yiq_model_type(rgb_model_type(yuv_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void black(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0, 0, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
		void gray
		(
			::color::model< ::color::category::yiq< tag_name > > & color_parameter
			,typename ::color::trait::scalar< ::color::category::yiq< tag_name > >::input_const_type percent
	) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		color_parameter = right_type({ percent/100, 0, 0 });
	}

	template< typename tag_name >
	inline
	void gray50(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.5, 0, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void white(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 1, 0, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void red(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.299, 0.595716135, 0.211456402 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void green(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.2935, -0.137226419, -0.261295523 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void blue(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.114, -0.321263297, 0.311134643 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void cyan(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.701, -0.595716135, -0.211456402 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void magenta(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.413, 0.274452838, 0.522591045 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void yellow(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.886, 0.321263297, -0.311134643 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void aqua(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.701, -0.595716135, -0.211456402 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void fuchsia(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.413, 0.274452838, 0.522591045 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void lime(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.587, -0.274452838, -0.522591045 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void maroon(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.1495, 0.297858067, 0.105728201 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void navy(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.057, -0.160631649, 0.155567322 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void olive(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.443, 0.160631649, -0.155567322 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void orange(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.68055, 0.41732179, -0.128227777 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void purple(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.2065, 0.137226419, 0.261295523 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void silver(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.75, 0, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void teal(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.3505, -0.297858067, -0.105728201 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void violet(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.684721569, 0.116238849, 0.221332678 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void aquamarine(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.831276471, -0.243684257, -0.158194043 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void azure(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.9813125, -0.0372322584, -0.0132160251 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void beige(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.949607843, 0.0314964017, -0.0305033964 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void bisque(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.898125, 0.114622429, -0.0124597801 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void brown(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.308929412, 0.28734543, 0.101996617 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void chocolate(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.501352941, 0.339784084, -0.00443990594 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void coral(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.62784, 0.358898094, 0.0466126189 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void crimson(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.330823529, 0.416834098, 0.214653593 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void gainsboro(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.858823529, 0, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void gold(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.793921569, 0.364314723, -0.229159577 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void indigo(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.146058824, 0.0114293392, 0.220810721 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void ivory(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.992875, 0.0200789561, -0.0194459152 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void khaki(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.8713125, 0.134781509, -0.10096751 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void lavender(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.910901961, -0.0251971213, 0.0244027171 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void linen(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.946049755, 0.0375989235, -0.00259772795 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void moccasin(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.904764706, 0.122289061, -0.0349568838 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void orchid(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.609105882, 0.119125702, 0.212353381 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void peru(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.57294, 0.253541608, -0.0247985611 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void pink(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.831729412, 0.133318511, 0.0656636643 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void plum(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.726247059, 0.065653424, 0.125011976 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void salmon(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.637601961, 0.303185416, 0.085110163 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void sienna(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.396486275, 0.228833728, 0.0195357552 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void snow(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.986254902, 0.0116807085, 0.00414620396 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void tan(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.723176471, 0.120478494, -0.0239282104 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void thistle(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.789509804, 0.026907141, 0.0512344162 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void tomato(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.558635294, 0.399714076, 0.0951977597 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void turquoise(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.681, -0.352243628, -0.151606167 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void wheat(::color::model< ::color::category::yiq< tag_name > > & color_parameter) {
		typedef ::color::category::yiq< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::yiq< double > right_type;
		static left_type local(right_type({ 0.878333333, 0.10790507, -0.0333933036 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace _internal {

		template< typename hsv_tag_name, typename yiq_tag_name >
		struct convert
		<
			::color::category::hsv< hsv_tag_name >
			,::color::category::yiq< yiq_tag_name >
			> {
			public:
			typedef ::color::category::hsv< hsv_tag_name > hsv_category_type, category_left_type;
			typedef ::color::category::yiq< yiq_tag_name > yiq_category_type, category_right_type;

			typedef typename ::color::akin::rgb< yiq_category_type >::akin_type rgb_category_type;

			typedef ::color::model< hsv_category_type > hsv_model_type;
			typedef ::color::model< yiq_category_type > yiq_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = hsv_model_type(rgb_model_type(yiq_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace _internal {

		template< typename hsv_tag_name, typename yuv_tag_name >
		struct convert
		<
			::color::category::hsv< hsv_tag_name >
			,::color::category::yuv< yuv_tag_name >
			> {
			public:
			typedef ::color::category::hsv< hsv_tag_name > hsv_category_type, category_left_type;
			typedef ::color::category::yuv< yuv_tag_name > yuv_category_type, category_right_type;

			typedef typename ::color::akin::rgb< yuv_category_type >::akin_type rgb_category_type;

			typedef ::color::model< hsv_category_type > hsv_model_type;
			typedef ::color::model< yuv_category_type > yuv_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = hsv_model_type(rgb_model_type(yuv_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void black(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 0, 0, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
		void gray
		(
			::color::model< ::color::category::hsv< tag_name > > & color_parameter
			,typename ::color::trait::scalar< ::color::category::hsv< tag_name > >::input_const_type percent
	) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		color_parameter = right_type({ 0, 0, percent });
	}

	template< typename tag_name >
	inline
	void gray50(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 0, 0, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void white(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 0, 0, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void red(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 0, 100, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void green(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 120, 100, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void blue(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 240, 100, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void cyan(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 180, 100, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void magenta(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 300, 100, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void yellow(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 60, 100, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void aqua(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 180, 100, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void fuchsia(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 300, 100, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void lime(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 120, 100, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void maroon(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 0, 100, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void navy(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 240, 100, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void olive(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 60, 100, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void orange(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 39, 100, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void purple(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 300, 100, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void silver(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 0, 0, 75 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void teal(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 180, 100, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void violet(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 300, 45.3781513, 93.3333333 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void aquamarine(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 159.764706, 50, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void azure(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 180, 6.25, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void beige(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 60, 10.2040816, 96.0784314 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void bisque(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 30, 25, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void brown(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 0, 74.5454545, 64.7058824 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void chocolate(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 25, 85.7142857, 82.3529412 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void coral(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 16.5217391, 69, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void crimson(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 348, 90.9090909, 86.2745098 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void gainsboro(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 0, 0, 85.8823529 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void gold(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 50.5882353, 100, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void indigo(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 274.615385, 100, 50.9803922 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void ivory(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 60, 6.25, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void khaki(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 54.1935484, 41.3333333, 93.75 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void lavender(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 240, 8, 98.0392157 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void linen(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 27.9878049, 8.2, 98.0392157 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void moccasin(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 38.1081081, 29.0196078, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void orchid(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 302.264151, 48.6238532, 85.4901961 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void peru(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 29.4545455, 68.75, 80 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void pink(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 349.52381, 24.7058824, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void plum(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 300, 27.60181, 86.6666667 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void salmon(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 5.95588235, 54.4, 98.0392157 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void sienna(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 19.3043478, 71.875, 62.745098 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void snow(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 0, 1.96078431, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void tan(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 34.2857143, 33.3333333, 82.3529412 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void thistle(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 300, 11.5740741, 84.7058824 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void tomato(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 9.13043478, 72.1568627, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void turquoise(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 174, 71.4285714, 87.5 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void wheat(::color::model< ::color::category::hsv< tag_name > > & color_parameter) {
		typedef ::color::category::hsv< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsv< double > right_type;
		static left_type local(right_type({ 39.0909091, 26.9387755, 96.0784314 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace _internal {

		template< typename hsl_tag_name, typename hsv_tag_name >
		struct convert
		<
			::color::category::hsl< hsl_tag_name >
			,::color::category::hsv< hsv_tag_name >
			> {
			public:
			typedef ::color::category::hsl< hsl_tag_name > category_left_type;
			typedef ::color::category::hsv< hsv_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		scalar_type h = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		scalar_type ss = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		scalar_type v = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		scalar_type l = v * (2-ss) / 2;
		scalar_type s = 0 ;
		{
			s = v*ss/(1- fabs(2 * l - 1));
		}
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(h));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(s));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(l));
	}
											  };

										   }
}

namespace color {
	namespace _internal {

		template< typename hsl_tag_name, typename rgb_tag_name >
		struct convert
		<
			::color::category::hsl< hsl_tag_name >
			,::color::category::rgb< rgb_tag_name >
			> {
			public:
			typedef ::color::category::hsl< hsl_tag_name > category_left_type;
			typedef ::color::category::rgb< rgb_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::scalar<category_left_type> scalar_trait_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

	enum {
		hue_p = ::color::place::_internal::hue<category_left_type>::position_enum
		,saturation_p = ::color::place::_internal::saturation<category_left_type>::position_enum
		, lightness_p = ::color::place::_internal::lightness<category_left_type>::position_enum
	};

	enum {
		red_p = ::color::place::_internal::red<category_right_type>::position_enum
		,green_p = ::color::place::_internal::green<category_right_type>::position_enum
		,blue_p = ::color::place::_internal::blue<category_right_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		scalar_type r = normalize_type::template process<red_p >(container_right_trait_type::template get<red_p >(right));
		scalar_type g = normalize_type::template process<green_p>(container_right_trait_type::template get<green_p>(right));
		scalar_type b = normalize_type::template process<blue_p >(container_right_trait_type::template get<blue_p >(right));
		const scalar_type hi = std::max<scalar_type>({ r, g, b });
		const scalar_type lo = std::min<scalar_type>({ r, g, b });
		scalar_type delta = hi - lo;
		scalar_type h = 0;
		scalar_type s = 0;
		scalar_type l = (hi + lo) / scalar_type(2);
		if(false == scalar_trait_type::is_small(delta)) {
			s = delta / (1 - fabs(2*l - 1));
			if(hi == r) {
				h = (scalar_type(60)/scalar_type(360)) * (g - b) / delta + (g < b ? scalar_type(1) : scalar_type(0));
			}
			if(hi == g) {
				h = (scalar_type(60)/scalar_type(360)) * (b - r) / delta + (scalar_type(120)/scalar_type(360));
			}
			if(hi == b) {
				h = (scalar_type(60)/scalar_type(360)) * (r - g) / delta + (scalar_type(240)/scalar_type(360));
			}
		}
		container_left_trait_type::template set< hue_p>(left, diverse_type::template process< hue_p>(h));
		container_left_trait_type::template set<saturation_p>(left, diverse_type::template process<saturation_p>(s));
		container_left_trait_type::template set< lightness_p>(left, diverse_type::template process< lightness_p>(l));
	}
														 };

										   }
}

namespace color {
	namespace _internal {

		template< typename hsl_tag_name, typename yiq_tag_name >
		struct convert
		<
			::color::category::hsl< hsl_tag_name >
			,::color::category::yiq< yiq_tag_name >
			> {
			public:
			typedef ::color::category::hsl< hsl_tag_name > hsl_category_type, category_left_type;
			typedef ::color::category::yiq< yiq_tag_name > yiq_category_type, category_right_type;

			typedef typename ::color::akin::rgb< yiq_category_type >::akin_type rgb_category_type;

			typedef ::color::model< hsl_category_type > hsl_model_type;
			typedef ::color::model< yiq_category_type > yiq_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = hsl_model_type(rgb_model_type(yiq_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace _internal {

		template< typename hsl_tag_name, typename yuv_tag_name >
		struct convert
		<
			::color::category::hsl< hsl_tag_name >
			,::color::category::yuv< yuv_tag_name >
			> {
			public:
			typedef ::color::category::hsl< hsl_tag_name > hsl_category_type, category_left_type;
			typedef ::color::category::yuv< yuv_tag_name > yuv_category_type, category_right_type;

			typedef typename ::color::akin::rgb< yuv_category_type >::akin_type rgb_category_type;

			typedef ::color::model< hsl_category_type > hsl_model_type;
			typedef ::color::model< yuv_category_type > yuv_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = hsl_model_type(rgb_model_type(yuv_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void black(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 0, 0, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
		void gray
		(
			::color::model< ::color::category::hsl< tag_name > > & color_parameter
			,typename ::color::trait::scalar< ::color::category::hsl< tag_name > >::input_const_type percent
	) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		color_parameter = right_type({ 0, 0, percent });
	}

	template< typename tag_name >
	inline
	void gray50(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 0, 0, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void white(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 0, 0, 100 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void red(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 0, 100, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void green(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 120, 100, 25 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void blue(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 240, 100, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void cyan(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 180, 100, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void magenta(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 300, 100, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void yellow(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 60, 100, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void aqua(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 180, 100, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void fuchsia(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 300, 100, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void lime(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 120, 100, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void maroon(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 0, 100, 25 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void navy(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 240, 100, 25 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void olive(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 60, 100, 25 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void orange(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 39, 100, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void purple(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 300, 100, 25 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void silver(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 0, 0, 75 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void teal(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 180, 100, 25 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void violet(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 300, 76.056338, 72.1568627 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void aquamarine(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 159.764706, 100, 75 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void azure(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 180, 100, 96.875 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void beige(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 60, 55.5555556, 91.1764706 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void bisque(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 30, 100, 87.5 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void brown(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 0, 59.4202899, 40.5882353 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void chocolate(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 25, 75, 47.0588235 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void coral(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 16.5217391, 100, 65.5 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void crimson(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 348, 83.3333333, 47.0588235 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void gainsboro(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 0, 0, 85.8823529 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void gold(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 50.5882353, 100, 50 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void indigo(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 274.615385, 100, 25.4901961 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void ivory(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 60, 100, 96.875 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void khaki(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 54.1935484, 75.6097561, 74.375 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void lavender(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 240, 66.6666667, 94.1176471 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void linen(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 27.9878049, 67.2131148, 94.0196078 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void moccasin(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 38.1081081, 100, 85.4901961 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void orchid(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 302.264151, 58.8888889, 64.7058824 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void peru(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 29.4545455, 57.8947368, 52.5 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void pink(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 349.52381, 100, 87.6470588 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void plum(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 300, 47.2868217, 74.7058824 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void salmon(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 5.95588235, 93.1506849, 71.372549 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void sienna(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 19.3043478, 56.097561, 40.1960784 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void snow(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 0, 100, 99.0196078 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void tan(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 34.2857143, 43.75, 68.627451 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void thistle(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 300, 24.2718447, 79.8039216 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void tomato(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 9.13043478, 100, 63.9215686 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void turquoise(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 174, 71.4285714, 56.25 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void wheat(::color::model< ::color::category::hsl< tag_name > > & color_parameter) {
		typedef ::color::category::hsl< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::hsl< double > right_type;
		static left_type local(right_type({ 39.0909091, 76.744186, 83.1372549 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace _internal {

		template< typename rgb_tag_name, typename hsl_tag_name >
		struct convert
		<
			::color::category::rgb< rgb_tag_name >
			,::color::category::hsl<hsl_tag_name>
			> {
			public:
			typedef ::color::category::rgb< rgb_tag_name > category_left_type;
			typedef ::color::category::hsl<hsl_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

			typedef ::color::_internal::convert< category_left_type, category_right_type > this_type;

	enum {
		red_p = ::color::place::_internal::red<category_left_type>::position_enum
		,green_p = ::color::place::_internal::green<category_left_type>::position_enum
		,blue_p = ::color::place::_internal::blue<category_left_type>::position_enum
	};

	enum {
		hue_p = ::color::place::_internal::hue<category_right_type>::position_enum
		,saturation_p = ::color::place::_internal::saturation<category_right_type>::position_enum
		,lightness_p = ::color::place::_internal::lightness<category_right_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		scalar_type h = normalize_type::template process<hue_p >(container_right_trait_type::template get<hue_p >(right));
		scalar_type s = normalize_type::template process<saturation_p>(container_right_trait_type::template get<saturation_p>(right));
		scalar_type l = normalize_type::template process<lightness_p >(container_right_trait_type::template get<lightness_p >(right));
		scalar_type r;
		scalar_type g;
		scalar_type b;
		if(s == 0) {
			r = l;
			g = l;
			b = l;
		} else {
			scalar_type q = l < scalar_type(0.5) ? (l * (1 + s)) : (l + s - l * s);
			scalar_type p = scalar_type(2) * l - q;
			r = this_type::value(p, q, h + (scalar_type(1) / scalar_type(3)) + (scalar_type(2) / scalar_type(3) < h ? -1 :0));
			g = this_type::value(p, q, h);
			b = this_type::value(p, q, h - (scalar_type(1) / scalar_type(3)) + (h < scalar_type(1) / scalar_type(3) ? +1 :0));
		}
		container_left_trait_type::template set<red_p >(left, diverse_type::template process<red_p >(r));
		container_left_trait_type::template set<green_p>(left, diverse_type::template process<green_p>(g));
		container_left_trait_type::template set<blue_p >(left, diverse_type::template process<blue_p >(b));
	}

	private:
	static scalar_type value(scalar_type const& p, scalar_type const& q, scalar_type const& t) {
		if(t < scalar_type(1)/scalar_type(6)) {
			return (p + (q - p) * scalar_type(6) * t);
		}
		if(t < scalar_type(1)/scalar_type(2)) {
			return (q);
		}
		if(t < scalar_type(2)/scalar_type(3)) {
			return (p + (q - p) * ((scalar_type(2)/scalar_type(3)) - t) * scalar_type(6));
		}
		return p ;
	}
	  };

	  }
}

namespace color {
	namespace _internal {

		template< typename rgb_tag_name, typename hsv_tag_name >
		struct convert
		<
			::color::category::rgb< rgb_tag_name >
			,::color::category::hsv< hsv_tag_name >
			> {
			public:
			typedef ::color::category::rgb< rgb_tag_name > category_left_type;
			typedef ::color::category::hsv< hsv_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

	enum {
		red_p = ::color::place::_internal::red<category_left_type>::position_enum
		,green_p = ::color::place::_internal::green<category_left_type>::position_enum
		,blue_p = ::color::place::_internal::blue<category_left_type>::position_enum
	};

	enum {
		hue_p = ::color::place::_internal::hue<category_right_type>::position_enum
		,saturation_p = ::color::place::_internal::saturation<category_right_type>::position_enum
		,value_p = ::color::place::_internal::value<category_right_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		scalar_type h = normalize_type::template process<hue_p >(container_right_trait_type::template get<hue_p >(right));
		scalar_type s = normalize_type::template process<saturation_p>(container_right_trait_type::template get<saturation_p>(right));
		scalar_type v = normalize_type::template process<value_p >(container_right_trait_type::template get<value_p >(right));
		int region = int(6 * h);
		scalar_type f = h * 6 - region ;
		scalar_type p = v * (1 - s);
		scalar_type q = v * (1 - f * s);
		scalar_type t = v * (1 - (1 - f) * s);
		scalar_type r;
		scalar_type g;
		scalar_type b;
		switch(region % 6) {
		case 0:
			r = v, g = t, b = p;
			break;
		case 1:
			r = q, g = v, b = p;
			break;
		case 2:
			r = p, g = v, b = t;
			break;
		case 3:
			r = p, g = q, b = v;
			break;
		case 4:
			r = t, g = p, b = v;
			break;
		case 5:
			r = v, g = p, b = q;
			break;
		}
		container_left_trait_type::template set<red_p >(left, diverse_type::template process<red_p >(r));
		container_left_trait_type::template set<green_p>(left, diverse_type::template process<green_p>(g));
		container_left_trait_type::template set<blue_p >(left, diverse_type::template process<blue_p >(b));
	}
													};

										   }
}

namespace color {
	namespace _internal {

		template< typename tag_left_name, typename tag_right_name >
		struct convert
		<
			::color::category::rgb< tag_left_name >
			,::color::category::rgb< tag_right_name>
			> {
			public:
			typedef ::color::category::rgb< tag_left_name > category_left_type;
			typedef ::color::category::rgb< tag_right_name> category_right_type;

			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		enum {
			rl = ::color::place::_internal::red<category_left_type>::position_enum
			,gl = ::color::place::_internal::green<category_left_type>::position_enum
			,bl = ::color::place::_internal::blue<category_left_type>::position_enum
			,rr = ::color::place::_internal::red<category_right_type>::position_enum
			,gr = ::color::place::_internal::green<category_right_type>::position_enum
			,br = ::color::place::_internal::blue<category_right_type>::position_enum
		};
		container_left_trait_type::template set<rl>(left, reformat_type::template process<rl,rr>(container_right_trait_type::template get<rr>(right)));
		container_left_trait_type::template set<gr>(left, reformat_type::template process<gr,gr>(container_right_trait_type::template get<gr>(right)));
		container_left_trait_type::template set<bl>(left, reformat_type::template process<bl,br>(container_right_trait_type::template get<br>(right)));
	}
																					 };
											   }
}

namespace color {
	namespace category {

		namespace _internal {
			struct xyz_bool {};
			struct xyz_uint8 {};
			struct xyz_uint16 {};
			struct xyz_uint24 {};
			struct xyz_uint32 {};
			struct xyz_uint48 {};
			struct xyz_uint64 {};
			struct xyz_float {};
			struct xyz_double {};
			struct xyz_ldouble {};
		}

		template< typename tag_name >
		struct xyz {
			typedef void category_name;
		};

		using xyz_bool = ::color::category::xyz< ::color::category::_internal::xyz_bool >;
		using xyz_uint8 = ::color::category::xyz< ::color::category::_internal::xyz_uint8 >;
		using xyz_uint16 = ::color::category::xyz< ::color::category::_internal::xyz_uint16 >;
		using xyz_uint24 = ::color::category::xyz< ::color::category::_internal::xyz_uint24 >;
		using xyz_uint32 = ::color::category::xyz< ::color::category::_internal::xyz_uint32 >;
		using xyz_uint48 = ::color::category::xyz< ::color::category::_internal::xyz_uint48 >;
		using xyz_uint64 = ::color::category::xyz< ::color::category::_internal::xyz_uint64 >;
		using xyz_float = ::color::category::xyz< ::color::category::_internal::xyz_float >;
		using xyz_double = ::color::category::xyz< ::color::category::_internal::xyz_double >;
		using xyz_ldouble = ::color::category::xyz< ::color::category::_internal::xyz_ldouble >;

												  }
}

namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::xyz_uint8 >
		: public ::color::_internal::utility::bound::split332 {
		};

		template< >
		struct index< ::color::category::xyz_uint8 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

		template< >
		struct component< ::color::category::xyz_uint8 >
		: public ::color::_internal::utility::component::cnent332< unsigned > {
		};

		template< >
		struct container< ::color::category::xyz_uint8 >
		: public ::color::_internal::utility::container::split332 {
		};

						}
}

namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::xyz_uint16 >
		: public ::color::_internal::utility::bound::split556 {
		};

		template< >
		struct index< ::color::category::xyz_uint16 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

		template< >
		struct component< ::color::category::xyz_uint16 >
		: public ::color::_internal::utility::component::cnent556< unsigned> {
		};

		template< >
		struct container< ::color::category::xyz_uint16 >
		: public ::color::_internal::utility::container::split556 {
		};

						}
}

namespace color {
	namespace _internal {
		namespace utility {
			namespace bound {

				template< typename container_name, unsigned width_size, typename index_name >
				struct intrinsic {
					public:
					typedef container_name container_type;
					typedef index_name index_type;

					typedef ::color::_internal::utility::type::traitC< container_type > component_trait_type;
					typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

					typedef typename component_trait_type::instance_type component_instance_type;
					typedef typename component_trait_type::return_image_type component_return_const_type;

					typedef typename index_trait_type::instance_type index_instance_type;
					typedef typename index_trait_type::input_const_type index_input_const_type;

					typedef ::color::_internal::utility::bound::intrinsic< container_name, width_size, index_name > this_type;

					template< index_instance_type index >
	static component_return_const_type maximum() {
		static const component_instance_type component = (((container_type(1) << (width_size-1)) - container_name(1)) << 1) + container_type(1);
				return component;
	}

	static component_return_const_type maximum(index_input_const_type index) {
		static const component_instance_type component = (((container_type(1) << (width_size-1)) - container_type(1)) << 1) + container_type(1);
				return component;
	}

			template< index_instance_type index >
	static component_return_const_type minimum() {
		static const component_instance_type component = 0;
		return component;
	}

	static component_return_const_type minimum(index_input_const_type index) {
		static const component_instance_type component = 0;
		return component;
	}

	template< index_instance_type index >
	static component_return_const_type range() {
		static const component_instance_type component = this_type::template maximum<index>() - this_type::template minimum<index>();
		return component;
	}

	static component_return_const_type range(index_input_const_type index) {
		static const component_instance_type component = this_type::maximum(index) - this_type::minimum(index);
		return component;
	}
																													   };

																				}
			}
					}
}

namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::xyz_uint32 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 8, unsigned > {
		};

		template< >
		struct index< ::color::category::xyz_uint32 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

		template< >
		struct component< ::color::category::xyz_uint32 >
		: public ::color::_internal::utility::component::Unsigned< std::uint8_t, unsigned> {
		};

		template< >
		struct container< ::color::category::xyz_uint32 >
		: public ::color::_internal::utility::container::Unsigned< std::uint32_t, std::uint8_t, unsigned, 3, 8 > {
		};

																 }
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::xyz_uint64 >
		: public ::color::_internal::utility::bound::intrinsic< std::uint16_t, 16, unsigned > {
		};

		template< >
		struct index< ::color::category::xyz_uint64 >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

		template< >
		struct component< ::color::category::xyz_uint64 >
		: public ::color::_internal::utility::component::Unsigned< std::uint16_t, unsigned> {
		};

		template< >
		struct container< ::color::category::xyz_uint64 >
		: public ::color::_internal::utility::container::Unsigned< std::uint64_t, std::uint16_t, unsigned, 3, 16 > {
		};

																 }
}

namespace color {
	namespace _internal {
		namespace utility {
			namespace bound {

				template< typename index_name, typename scalar_name >
				struct xyz_scalar {
					public:
					typedef scalar_name scalar_type;
					typedef index_name index_type;

					typedef ::color::_internal::utility::type::traitC< scalar_type > trait_type;
					typedef ::color::_internal::utility::type::index< index_type > index_trait_type;

					typedef typename trait_type::instance_type instance_type;
					typedef typename trait_type::return_image_type return_image_type;

					typedef typename index_trait_type::instance_type index_instance_type;
					typedef typename index_trait_type::input_const_type index_input_const_type;

					template< index_instance_type index >
	static return_image_type maximum() {
		static instance_type max_list[] = { 1/scalar_type(0.17697), 1/scalar_type(0.17697), 1/scalar_type(0.17697) };
		return max_list[index];
	}

	static return_image_type maximum(index_input_const_type index) {
		static instance_type max_list[] = { 1/scalar_type(0.17697), 1/scalar_type(0.17697), 1/scalar_type(0.17697) };
		return max_list[index];
	}

	template< index_instance_type index >
	static return_image_type minimum() {
		static instance_type min_list[] = { 0, 0, 0 };
		return min_list[index];
	}

	static return_image_type minimum(index_input_const_type index) {
		static instance_type min_list[] = { 0, 0, 0 };
		return min_list[index];
	}

	template< index_instance_type index >
	static return_image_type range() {
		static instance_type range_list[] = { 1/scalar_type(0.17697), 1/scalar_type(0.17697), 1/scalar_type(0.17697) };
		return range_list[index];
	}

	static return_image_type range(index_input_const_type index) {
		static instance_type range_list[] = { 1/scalar_type(0.17697), 1/scalar_type(0.17697), 1/scalar_type(0.17697) };
		return range_list[index];
	}
			};

			}
							}
																	}
}

namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::xyz_float >
		: public ::color::_internal::utility::bound::xyz_scalar< unsigned, float > {
		};

		template< >
		struct index< ::color::category::xyz_float >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

		template< >
		struct component< ::color::category::xyz_float >
		: public ::color::_internal::utility::component::array< float, unsigned> {
		};

		template< >
		struct container< ::color::category::xyz_float >
		: public ::color::_internal::utility::container::array< float, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::xyz_double >
		: public ::color::_internal::utility::bound::xyz_scalar< unsigned, double > {
		};

		template< >
		struct index< ::color::category::xyz_double >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

		template< >
		struct component< ::color::category::xyz_double >
		: public ::color::_internal::utility::component::array< double, unsigned > {
		};

		template< >
		struct container< ::color::category::xyz_double >
		: public ::color::_internal::utility::container::array< double, 3 > {
		};

															  }
}
namespace color {
	namespace trait {

		template< >
		struct bound< ::color::category::xyz_ldouble >
		: public ::color::_internal::utility::bound::xyz_scalar< unsigned, long double > {
		};

		template< >
		struct index< ::color::category::xyz_ldouble >
		: public ::color::_internal::utility::type::index< unsigned > {
		};

		template< >
		struct component< ::color::category::xyz_ldouble >
		: public ::color::_internal::utility::component::array< long double, unsigned> {
		};

		template< >
		struct container< ::color::category::xyz_ldouble >
		: public ::color::_internal::utility::container::array< long double, 3 > {
		};

															  }
}

namespace color {
	namespace make {

		inline
	void black(::color::model< ::color::category::xyz_uint8 > & color_parameter) {
		color_parameter.container() = 0x0;
	}

	inline
	void black(::color::model< ::color::category::xyz_uint16 > & color_parameter) {
		color_parameter.container() = 0x0;
	}

	inline
	void black(::color::model< ::color::category::xyz_uint32 > & color_parameter) {
		color_parameter.container() = 0xff000000u;
	}

	inline
	void black(::color::model< ::color::category::xyz_uint64 > & color_parameter) {
		color_parameter.container() = 0xffff000000000000ul;
	}

	inline
	void black(::color::model< ::color::category::xyz_float > & color_parameter) {
		color_parameter.container() = std::array<float,3>({ 0, 0, 0 });
	}

	inline
	void black(::color::model< ::color::category::xyz_double> & color_parameter) {
		color_parameter.container() = std::array<double,3>({ 0, 0, 0 });
	}

	inline
	void black(::color::model< ::color::category::xyz_ldouble> & color_parameter) {
		color_parameter.container() = std::array<long double,3>({ 0, 0, 0 });
	}

											}
}

namespace color {
	namespace make {

		inline
	void gray50(::color::model< color::category::xyz_uint8 > & color_parameter) {
		color_parameter.container() = 0x1b;
	}

	inline
	void gray50(::color::model< color::category::xyz_uint16 > & color_parameter) {
		color_parameter.container() = 0xc6f7;
	}

	inline
	void gray50(::color::model< color::category::xyz_uint32 > & color_parameter) {
		color_parameter.container() = 0xffd0d0d0u;
	}

	inline
	void gray50(::color::model< color::category::xyz_uint64 > & color_parameter) {
		color_parameter.container() = 0xffffd346d346d346ul;
	}

	inline
	void gray50(::color::model< color::category::xyz_float > & color_parameter) {
		color_parameter.container() = std::array<float,3>({ 15.9651f, 15.9651f, 15.9651f });
	}

	inline
	void gray50(::color::model< color::category::xyz_double> & color_parameter) {
		color_parameter.container() = std::array<double,3>({ 15.9651, 15.9651, 15.9651 });
	}

	inline
	void gray50(::color::model< color::category::xyz_ldouble> & color_parameter) {
		color_parameter.container() = std::array<long double,3>({ 15.9651, 15.9651, 15.9651 });
	}

											}
}

namespace color {
	namespace make {

		inline
	void white(::color::model< color::category::xyz_uint8 > & color_parameter) {
		color_parameter.container() = 0x3f;
	}

	inline
	void white(::color::model< color::category::xyz_uint16 > & color_parameter) {
		color_parameter.container() = 0x8def;
	}

	inline
	void white(::color::model< color::category::xyz_uint32 > & color_parameter) {
		color_parameter.container() = 0xffa0a0a0u;
	}

	inline
	void white(::color::model< color::category::xyz_uint64 > & color_parameter) {
		color_parameter.container() = 0xffffa68da68da68dul;
	}

	inline
	void white(::color::model< color::category::xyz_float > & color_parameter) {
		color_parameter.container() = std::array<float,3>({ 31.9301f, 31.9301f, 31.9301f });
	}

	inline
	void white(::color::model< color::category::xyz_double> & color_parameter) {
		color_parameter.container() = std::array<double,3>({ 31.9301, 31.9301, 31.9301 });
	}

	inline
	void white(::color::model< color::category::xyz_ldouble> & color_parameter) {
		color_parameter.container() = std::array<long double,3>({ 31.9301, 31.9301, 31.9301 });
	}

											}
}

namespace color {
	namespace make {

		inline
	void red(::color::model< color::category::xyz_uint8 > & color_parameter) {
		color_parameter.container() = 0x3b;
	}

	inline
	void red(::color::model< color::category::xyz_uint16 > & color_parameter) {
		color_parameter.container() = 0x3f5;
	}

	inline
	void red(::color::model< color::category::xyz_uint32 > & color_parameter) {
		color_parameter.container() = 0xff00ffc2u;
	}

	inline
	void red(::color::model< color::category::xyz_uint64 > & color_parameter) {
		color_parameter.container() = 0xffff0000ffffc4cful;
	}

	inline
	void red(::color::model< color::category::xyz_float > & color_parameter) {
		color_parameter.container() = std::array<float,3>({ 15.6458f, 5.65068f, 0 });
	}

	inline
	void red(::color::model< color::category::xyz_double> & color_parameter) {
		color_parameter.container() = std::array<double,3>({ 15.6458, 5.65068, 0 });
	}

	inline
	void red(::color::model< color::category::xyz_ldouble> & color_parameter) {
		color_parameter.container() = std::array<long double,3>({ 15.6458, 5.65068, 0 });
	}

											}
}

namespace color {
	namespace make {

		inline
	void green(::color::model< color::category::xyz_uint8 > & color_parameter) {
		color_parameter.container() = 0x6;
	}

	inline
	void green(::color::model< color::category::xyz_uint16 > & color_parameter) {
		color_parameter.container() = 0x4fb;
	}

	inline
	void green(::color::model< color::category::xyz_uint32 > & color_parameter) {
		color_parameter.container() = 0xff0749dfu;
	}

	inline
	void green(::color::model< color::category::xyz_uint64 > & color_parameter) {
		color_parameter.container() = 0xffff073b4b96e037ul;
	}

	inline
	void green(::color::model< color::category::xyz_float > & color_parameter) {
		color_parameter.container() = std::array<float,3>({ 4.94917f, 12.97f, 0.159651f });
	}

	inline
	void green(::color::model< color::category::xyz_double> & color_parameter) {
		color_parameter.container() = std::array<double,3>({ 4.94917, 12.97, 0.159651 });
	}

	inline
	void green(::color::model< color::category::xyz_ldouble> & color_parameter) {
		color_parameter.container() = std::array<long double,3>({ 4.94917, 12.97, 0.159651 });
	}

											}
}

namespace color {
	namespace make {

		inline
	void blue(::color::model< ::color::category::xyz_uint8 > & color_parameter) {
		color_parameter.container() = 0x7;
	}

	inline
	void blue(::color::model< ::color::category::xyz_uint16 > & color_parameter) {
		color_parameter.container() = 0x8023;
	}

	inline
	void blue(::color::model< ::color::category::xyz_uint32 > & color_parameter) {
		color_parameter.container() = 0xff920f20u;
	}

	inline
	void blue(::color::model< ::color::category::xyz_uint64 > & color_parameter) {
		color_parameter.container() = 0xffff98150f60214ful;
	}

	inline
	void blue(::color::model< ::color::category::xyz_float > & color_parameter) {
		color_parameter.container() = std::array<float,3>({ 6.38603f, 0.339417f, 31.6108f });
	}

	inline
	void blue(::color::model< ::color::category::xyz_double> & color_parameter) {
		color_parameter.container() = std::array<double,3>({ 6.38603, 0.339417, 31.6108 });
	}

	inline
	void blue(::color::model< ::color::category::xyz_ldouble> & color_parameter) {
		color_parameter.container() = std::array<long double,3>({ 6.38603, 0.339417, 31.6108 });
	}

											}
}

namespace color {
	namespace _internal {

		template< typename xyz_tag_name, typename gray_tag_name >
		struct convert
		<
			::color::category::xyz< xyz_tag_name >
			,::color::category::gray< gray_tag_name >
			> {
			public:
			typedef ::color::category::xyz< xyz_tag_name > category_left_type;
			typedef ::color::category::gray< gray_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
	}
												};

											 }
}

namespace color {
	namespace _internal {

		template< typename xyz_tag_name, typename rgb_tag_name >
		struct convert
		<
			::color::category::xyz< xyz_tag_name >
			,::color::category::rgb< rgb_tag_name >
			> {
			public:
			typedef ::color::category::xyz< xyz_tag_name > category_left_type;
			typedef ::color::category::rgb< rgb_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		enum {
			red_p = ::color::place::_internal::red<category_right_type>::position_enum
			,green_p = ::color::place::_internal::green<category_right_type>::position_enum
			,blue_p = ::color::place::_internal::blue<category_right_type>::position_enum
		};
		static scalar_type mc = 0.17697;
		static scalar_type b11 = 0.49000/mc, b12 = 0.31000/mc, b13 = 0.20000/mc;
		static scalar_type b21 = 0.17697/mc, b22 = 0.81240/mc, b23 = 0.01063/mc;
		static scalar_type b31 = 0.00000/mc, b32 = 0.01000/mc, b33 = 0.99000/mc;
		scalar_type r = normalize_type::template process<red_p >(container_right_trait_type::template get<red_p >(right));
		scalar_type g = normalize_type::template process<green_p>(container_right_trait_type::template get<green_p>(right));
		scalar_type b = normalize_type::template process<blue_p >(container_right_trait_type::template get<blue_p >(right));
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(b11 * r + b12 * g + b13 * b));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(b21 * r + b22 * g + b23 * b));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(b31 * r + b32 * g + b33 * b));
	}
											  };

										   }
}

namespace color {
	namespace _internal {

		template< typename tag_left_name, typename tag_right_name >
		struct convert
		<
			::color::category::xyz< tag_left_name >
			,::color::category::xyz< tag_right_name>
			> {
			public:
			typedef ::color::category::xyz< tag_left_name > category_left_type;
			typedef ::color::category::xyz< tag_right_name> category_right_type;

			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,0>(container_right_trait_type::template get<0>(right)));
		container_left_trait_type::template set<1>(left, reformat_type::template process<1,1>(container_right_trait_type::template get<1>(right)));
		container_left_trait_type::template set<2>(left, reformat_type::template process<2,2>(container_right_trait_type::template get<2>(right)));
	}
																					};
											  }
}

namespace color {
	namespace _internal {
		template< typename type_name >
		struct pick_xyz {
			typedef ::color::category::xyz_uint32 category_type;
		};

		template<> struct pick_xyz< std::uint8_t > {
			typedef ::color::category::xyz_uint8 category_type;
		};
		template<> struct pick_xyz< std::uint16_t > {
			typedef ::color::category::xyz_uint16 category_type;
		};
		template<> struct pick_xyz< std::uint32_t > {
			typedef ::color::category::xyz_uint32 category_type;
		};
		template<> struct pick_xyz< std::uint64_t > {
			typedef ::color::category::xyz_uint64 category_type;
		};
		template<> struct pick_xyz< float > {
			typedef ::color::category::xyz_float category_type;
		};
		template<> struct pick_xyz< double > {
			typedef ::color::category::xyz_double category_type;
		};
		template<> struct pick_xyz< long double > {
			typedef ::color::category::xyz_ldouble category_type;
		};
								  }

	template< typename type_name >
	using xyz = ::color::model< typename ::color::_internal::pick_xyz< type_name >::category_type >;

}

namespace color {
	namespace _internal {

		template< typename rgb_tag_name, typename xyz_tag_name >
		struct convert
		<
			::color::category::rgb< rgb_tag_name >
			,::color::category::xyz<xyz_tag_name>
			> {
			public:
			typedef ::color::category::rgb< rgb_tag_name > category_left_type;
			typedef ::color::category::xyz<xyz_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		enum {
			red_p = ::color::place::_internal::red<category_left_type>::position_enum
			,green_p = ::color::place::_internal::green<category_left_type>::position_enum
			,blue_p = ::color::place::_internal::blue<category_left_type>::position_enum
		};
		static scalar_type mc = 0.17697;
		static scalar_type b11 = 473041/scalar_type(200050)*mc, b12 = -60980/scalar_type(68017)*mc, b13 = -1591847/scalar_type(3400850)*mc;
		static scalar_type b21 = -103059/scalar_type(200050)*mc, b22 = 97020/scalar_type(68017)*mc, b23 = 301853/scalar_type(3400850)*mc;
		static scalar_type b31 = 1041/scalar_type(200050)*mc, b32 = -980/scalar_type(68017)*mc, b33 = 3432153/scalar_type(3400850)*mc;
		scalar_type x = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		scalar_type y = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		scalar_type z = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		container_left_trait_type::template set<red_p >(left, diverse_type::template process<red_p >(b11 * x + b12 * y + b13 * z));
		container_left_trait_type::template set<green_p>(left, diverse_type::template process<green_p>(b21 * x + b22 * y + b23 * z));
		container_left_trait_type::template set<blue_p >(left, diverse_type::template process<blue_p >(b31 * x + b32 * y + b33 * z));
	}
													};

										   }
}

namespace color {
	namespace _internal {

		template< typename rgb_tag_name, typename yiq_tag_name >
		struct convert
		<
			::color::category::rgb< rgb_tag_name >
			,::color::category::yiq<yiq_tag_name>
			> {
			public:
			typedef ::color::category::rgb< rgb_tag_name > category_left_type;
			typedef ::color::category::yiq<yiq_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::constant::yiq< category_right_type > yiq_const_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

	enum {
		red_p = ::color::place::_internal::red<category_left_type>::position_enum
		,green_p = ::color::place::_internal::green<category_left_type>::position_enum
		,blue_p = ::color::place::_internal::blue<category_left_type>::position_enum
	};

	enum {
		luminance_p = ::color::place::_internal::luminance<category_right_type>::position_enum
		, inphase_p = ::color::place::_internal::inphase<category_right_type>::position_enum
		,quadrature_p = ::color::place::_internal::quadrature<category_right_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		static scalar_type a11 = yiq_const_type::a11(), a12 = yiq_const_type::a12(), a13 = yiq_const_type::a13();
		static scalar_type a21 = yiq_const_type::a21(), a22 = yiq_const_type::a22(), a23 = yiq_const_type::a23();
		static scalar_type a31 = yiq_const_type::a31(), a32 = yiq_const_type::a32(), a33 = yiq_const_type::a33();
		scalar_type y = normalize_type::template process< luminance_p>(container_right_trait_type::template get< luminance_p>(right));
		scalar_type i = normalize_type::template process< inphase_p>(container_right_trait_type::template get< inphase_p>(right));
		scalar_type q = normalize_type::template process<quadrature_p>(container_right_trait_type::template get<quadrature_p>(right));
		i = yiq_const_type::i_deverse(i);
		q = yiq_const_type::q_deverse(q);
		scalar_type r = a11 * y + a12 * i + a13 * q;
		scalar_type g = a21 * y + a22 * i + a23 * q;
		scalar_type b = a31 * y + a32 * i + a33 * q;
		container_left_trait_type::template set<red_p >(left, diverse_type::template process<red_p >(r));
		container_left_trait_type::template set<green_p>(left, diverse_type::template process<green_p>(g));
		container_left_trait_type::template set<blue_p >(left, diverse_type::template process<blue_p >(b));
	}
													};

										   }
}

namespace color {
	namespace _internal {

		template< typename rgb_tag_name, typename yuv_tag_name >
		struct convert
		<
			::color::category::rgb< rgb_tag_name >
			,::color::category::yuv< yuv_tag_name>
			> {
			public:
			typedef ::color::category::rgb< rgb_tag_name > category_left_type;
			typedef ::color::category::yuv<yuv_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::constant::yuv< category_right_type > yuv_const_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

	enum {
		red_p = ::color::place::_internal::red<category_left_type>::position_enum
		,green_p = ::color::place::_internal::green<category_left_type>::position_enum
		,blue_p = ::color::place::_internal::blue<category_left_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		static scalar_type const Wr = yuv_const_type::Wr();
		static scalar_type const Wb = yuv_const_type::Wb();
		static scalar_type const Wg = yuv_const_type::Wg();
		static scalar_type const Umax = yuv_const_type::Umax();
		static scalar_type const Vmax = yuv_const_type::Vmax();
		static scalar_type const b11 = 1, b12 = 0, b13 = (1 - Wr) / Vmax;
		static scalar_type const b21 = 1, b22 = - Wb*(1 - Wb) / Umax / Wg, b23 = -Wr*(1 - Wr) / Vmax / Wg;
		static scalar_type const b31 = 1, b32 = ((1 - Wb) / Umax), b33 = 0;
		scalar_type y = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		scalar_type u = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		scalar_type v = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		u = (u - scalar_type(0.5)) * scalar_type(2) * Umax;
		v = (v - scalar_type(0.5)) * scalar_type(2) * Vmax;
		scalar_type r = y + v * b13;
		scalar_type g = y + u * b22 + v * b23;
		scalar_type b = y + u * b32;
		container_left_trait_type::template set<red_p >(left, diverse_type::template process<red_p >(r));
		container_left_trait_type::template set<green_p>(left, diverse_type::template process<green_p>(g));
		container_left_trait_type::template set<blue_p >(left, diverse_type::template process<blue_p >(b));
	}
													};

										   }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void black(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0x00, 0x00, 0x00 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void gray50(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 0.5, 0.5, 0.5 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void white(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 1, 1, 1 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void red(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 1, 0, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void green(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 0, 0.5, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void blue(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 0, 0, 1 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void cyan(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 0, 1, 1 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void magenta(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 1, 0, 1 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void yellow(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 1, 1, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void aqua(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0x00, 0xFF, 0xFF }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void fuchsia(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 1, 0, 1 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void lime(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 0, 1, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void maroon(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 0.5, 0, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void navy(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 0, 0, 0.5 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void olive(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 0.5, 0.5, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void orange(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 1, 0.65, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void purple(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 0.5, 0, 0.5 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void silver(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 0.75, 0.75, 0.75 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void teal(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 0, 0.5, 0.5 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void violet(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xEE, 0x82, 0xEE }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void aquamarine(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 0.5, 1, 212.0/255.0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void azure(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 0.9375, 1, 1 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void beige(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xF5, 0xF5, 0xDC }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void bisque(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 1, 0.875, 0.75 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void brown(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xA5, 0x2A, 0x2A }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void chocolate(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xD2, 0x69, 0x1E }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void coral(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 1, 0.5, 0.31 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void crimson(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xDC, 0x14, 0x3C }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void gainsboro(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xDB, 0xDB, 0xDB }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void gold(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xFF, 0xD7, 0x00 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void indigo(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0x4B, 0x00, 0x82 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void ivory(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 1, 1, 0.9375 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void khaki(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 0.9375, 0.9, 0.55 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void lavender(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xE6, 0xE6, 0xFA }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void linen(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 250.0/255.0, 0.9375, 0.9 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void moccasin(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xFF, 0xE4, 0xB5 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void orchid(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xDA, 0x70, 0xD6 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void peru(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 0.8, 0.52, 0.25 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void pink(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xFF, 0xC0, 0xCB }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void plum(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xDD, 0xA0, 0xDD }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void salmon(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 250/255.0, 0.5, 114/255.0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void sienna(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xA0, 0x52, 0x2D }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void snow(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xFF, 0xFA, 0xFA }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void tan(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xD2, 0xB4, 0x8C }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void thistle(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xD8, 0xBF, 0xD8 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void tomato(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xFF, 0x63, 0x47 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void turquoise(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< double > right_type;
		static left_type local(right_type({ 0.25, 0.875, 0.8125 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void wheat(::color::model< ::color::category::rgb< tag_name > > & color_parameter) {
		typedef ::color::category::rgb< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::rgb< std::uint8_t > right_type;
		static left_type local(right_type({ 0xF5, 0xDE, 0xB3 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace set {

		template< typename tag_name >
		inline
		void
		gray
		(
			::color::model< ::color::category::cmyk<tag_name > > & color_parameter
			,typename ::color::trait::component< typename ::color::akin::gray< ::color::category::hsv< tag_name > >::akin_type >::input_const_type component_parameter
	) {
		typedef typename ::color::akin::rgb< ::color::category::cmyk< tag_name > >::akin_type rgb_category_type;
		::color::model< rgb_category_type > rgb(color_parameter);
		::color::set::gray(rgb, component_parameter);
		color_parameter = rgb;
	}

				  }
}

namespace color {
	namespace _internal {

		template< typename cmyk_tag_name, typename cmy_tag_name >
		struct convert
		<
			::color::category::cmyk< cmyk_tag_name >
			,::color::category::cmy< cmy_tag_name >
			> {
			public:
			typedef ::color::category::cmyk< cmyk_tag_name > category_left_type;
			typedef ::color::category::cmy< cmy_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::scalar< category_left_type > scalar_trait_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		scalar_type cc = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		scalar_type cm = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		scalar_type cy = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		scalar_type k = std::min({ cc, cm, cy });
		scalar_type c = scalar_type(0);
		scalar_type m = scalar_type(0);
		scalar_type y = scalar_type(0);
		if(false == scalar_trait_type::is_small(1 - k)) {
			c = (cc-k) / (1-k);
			m = (cm-k) / (1-k);
			y = (cy-k) / (1-k);
		}
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(c));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(m));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(y));
		container_left_trait_type::template set<3>(left, diverse_type::template process<3>(k));
	}
											  };

										   }
}

namespace color {
	namespace _internal {

		template< typename tag_left_name, typename tag_right_name >
		struct convert
		<
			::color::category::cmyk< tag_left_name >
			,::color::category::cmyk< tag_right_name>
			> {
			public:
			typedef ::color::category::cmyk< tag_left_name > category_left_type;
			typedef ::color::category::cmyk< tag_right_name> category_right_type;

			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,0>(container_right_trait_type::template get<0>(right)));
		container_left_trait_type::template set<1>(left, reformat_type::template process<1,1>(container_right_trait_type::template get<1>(right)));
		container_left_trait_type::template set<2>(left, reformat_type::template process<2,2>(container_right_trait_type::template get<2>(right)));
		container_left_trait_type::template set<3>(left, reformat_type::template process<3,3>(container_right_trait_type::template get<3>(right)));
	}
																					};

											  }
}

namespace color {
	namespace _internal {

		template< typename cmyk_tag_name, typename gray_tag_name >
		struct convert
		<
			::color::category::cmyk< cmyk_tag_name >
			,::color::category::gray< gray_tag_name >
			> {
			public:
			typedef ::color::category::cmyk< cmyk_tag_name > category_left_type;
			typedef ::color::category::gray< gray_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::bound<category_left_type> bound_left_trait_type;
			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::operation::_internal::invert< category_right_type > invert_type;
			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	enum {
		cyan_p = ::color::place::_internal::cyan<category_left_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_left_type>::position_enum
		, yellow_p = ::color::place::_internal::yellow<category_left_type>::position_enum
		, key_p = ::color::place::_internal::key<category_left_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		container_left_trait_type::template set< cyan_p>(left, bound_left_trait_type::template minimum< cyan_p>());
		container_left_trait_type::template set<magenta_p>(left, bound_left_trait_type::template minimum<magenta_p>());
		container_left_trait_type::template set< yellow_p>(left, bound_left_trait_type::template minimum< yellow_p>());
		container_left_trait_type::template set< key_p>(left, reformat_type::template process<key_p,0>(invert_type::template component<0>(container_right_trait_type::template get<0>(right))));
	}
																								  };

																						 }
}

namespace color {
	namespace _internal {

		template< typename cmyk_tag_name, typename hsl_tag_name >
		struct convert
		<
			::color::category::cmyk< cmyk_tag_name >
			,::color::category::hsl< hsl_tag_name >
			> {
			public:
			typedef ::color::category::cmyk< cmyk_tag_name > cmyk_category_type, category_left_type;
			typedef ::color::category::hsl< hsl_tag_name > hsl_category_type, category_right_type;

			typedef typename ::color::akin::rgb< hsl_category_type >::akin_type rgb_category_type;

			typedef ::color::model< cmyk_category_type > cmyk_model_type;
			typedef ::color::model< hsl_category_type > hsl_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = cmyk_model_type(rgb_model_type(hsl_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace _internal {

		template< typename cmyk_tag_name, typename hsv_tag_name >
		struct convert
		<
			::color::category::cmyk< cmyk_tag_name >
			,::color::category::hsv< hsv_tag_name >
			> {
			public:
			typedef ::color::category::cmyk< cmyk_tag_name > cmyk_category_type, category_left_type;
			typedef ::color::category::hsv< hsv_tag_name > hsv_category_type, category_right_type;

			typedef typename ::color::akin::rgb< hsv_category_type >::akin_type rgb_category_type;

			typedef ::color::model< cmyk_category_type > cmyk_model_type;
			typedef ::color::model< hsv_category_type > hsv_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = cmyk_model_type(rgb_model_type(hsv_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace _internal {

		template< typename cmyk_tag_name, typename rgb_tag_name >
		struct convert
		<
			::color::category::cmyk< cmyk_tag_name >
			,::color::category::rgb< rgb_tag_name >
			> {
			public:
			typedef ::color::category::cmyk< cmyk_tag_name > category_left_type;
			typedef ::color::category::rgb< rgb_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::scalar< category_left_type > scalar_trait_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

	enum {
		red_p = ::color::place::_internal::red<category_right_type>::position_enum
		,green_p = ::color::place::_internal::green<category_right_type>::position_enum
		,blue_p = ::color::place::_internal::blue<category_right_type>::position_enum
	};

	enum {
		cyan_p = ::color::place::_internal::cyan<category_left_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_left_type>::position_enum
		, yellow_p = ::color::place::_internal::yellow<category_left_type>::position_enum
		, key_p = ::color::place::_internal::key<category_left_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		scalar_type r = normalize_type::template process<red_p >(container_right_trait_type::template get<red_p >(right));
		scalar_type g = normalize_type::template process<green_p>(container_right_trait_type::template get<green_p>(right));
		scalar_type b = normalize_type::template process<blue_p >(container_right_trait_type::template get<blue_p >(right));
		scalar_type k = scalar_type(1) - std::max({ r, g, b });
		scalar_type c = scalar_type(0);
		scalar_type m = scalar_type(0);
		scalar_type y = scalar_type(0);
		if(false == scalar_trait_type::is_small(1 - k)) {
			c = 1 - r / (1-k);
			m = 1 - g / (1-k);
			y = 1 - b / (1-k);
		}
		container_left_trait_type::template set< cyan_p>(left, diverse_type::template process< cyan_p>(c));
		container_left_trait_type::template set<magenta_p>(left, diverse_type::template process<magenta_p>(m));
		container_left_trait_type::template set< yellow_p>(left, diverse_type::template process< yellow_p>(y));
		container_left_trait_type::template set< key_p>(left, diverse_type::template process< key_p>(k));
	}
												   };

										   }
}

namespace color {
	namespace _internal {

		template< typename cmyk_tag_name, typename yiq_tag_name >
		struct convert
		<
			::color::category::cmyk< cmyk_tag_name >
			,::color::category::yiq< yiq_tag_name >
			> {
			public:
			typedef ::color::category::cmyk< cmyk_tag_name > cmyk_category_type, category_left_type;
			typedef ::color::category::yiq< yiq_tag_name > yiq_category_type, category_right_type;

			typedef typename ::color::akin::rgb< yiq_category_type >::akin_type rgb_category_type;

			typedef ::color::model< cmyk_category_type > cmyk_model_type;
			typedef ::color::model< yiq_category_type > yiq_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = cmyk_model_type(rgb_model_type(yiq_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace _internal {

		template< typename cmyk_tag_name, typename yuv_tag_name >
		struct convert
		<
			::color::category::cmyk< cmyk_tag_name >
			,::color::category::yuv< yuv_tag_name >
			> {
			public:
			typedef ::color::category::cmyk< cmyk_tag_name > cmyk_category_type, category_left_type;
			typedef ::color::category::yuv< yuv_tag_name > yuv_category_type, category_right_type;

			typedef typename ::color::akin::rgb< yuv_category_type >::akin_type rgb_category_type;

			typedef ::color::model< cmyk_category_type > cmyk_model_type;
			typedef ::color::model< yuv_category_type > yuv_model_type;

			typedef ::color::model< rgb_category_type > rgb_model_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		left = cmyk_model_type(rgb_model_type(yuv_model_type(right))).container();
	}
											 };

											 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void black(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0, 0, 1 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
		void gray
		(
			::color::model< ::color::category::cmyk< tag_name > > & color_parameter
			,typename ::color::trait::scalar< ::color::category::cmyk< tag_name > >::input_const_type percent
	) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		color_parameter = right_type({ 0, 0, 0, 1 - percent/100 });
	}

	template< typename tag_name >
	inline
	void gray50(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0, 0, 0.5 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void white(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0, 0, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void red(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 1, 1, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void green(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 1, 0, 1, 0.5 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void blue(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 1, 1, 0, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void cyan(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 1, 0, 0, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void magenta(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 1, 0, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void yellow(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0, 1, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void aqua(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 1, 0, 0, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void fuchsia(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 1, 0, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void lime(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 1, 0, 1, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void maroon(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 1, 1, 0.5 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void navy(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 1, 1, 0, 0.5 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void olive(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0, 1, 0.5 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void orange(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.35, 1, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void purple(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 1, 0, 0.5 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void silver(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0, 0, 0.25 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void teal(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 1, 0, 0, 0.5 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void violet(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.453781513, 0, 0.0666666667 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void aquamarine(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0.5, 0, 0.168627451, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void azure(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0.0625, 0, 0, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void beige(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0, 0.102040816, 0.0392156863 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void bisque(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.125, 0.25, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void brown(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.745454545, 0.745454545, 0.352941176 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void chocolate(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.5, 0.857142857, 0.176470588 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void coral(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.5, 0.69, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void crimson(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.909090909, 0.727272727, 0.137254902 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void gainsboro(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0, 0, 0.141176471 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void gold(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.156862745, 1, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void indigo(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0.423076923, 1, 0, 0.490196078 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void ivory(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0, 0.0625, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void khaki(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.04, 0.413333333, 0.0625 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void lavender(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0.08, 0.08, 0, 0.0196078431 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void linen(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.04375, 0.082, 0.0196078431 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void moccasin(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.105882353, 0.290196078, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void orchid(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.486238532, 0.0183486239, 0.145098039 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void peru(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.35, 0.6875, 0.2 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void pink(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.247058824, 0.203921569, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void plum(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.2760181, 0, 0.133333333 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void salmon(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.49, 0.544, 0.0196078431 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void sienna(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.4875, 0.71875, 0.37254902 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void snow(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.0196078431, 0.0196078431, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void tan(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.142857143, 0.333333333, 0.176470588 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void thistle(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.115740741, 0, 0.152941176 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void tomato(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.611764706, 0.721568627, 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void turquoise(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0.714285714, 0, 0.0714285714, 0.125 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void wheat(::color::model< ::color::category::cmyk< tag_name > > & color_parameter) {
		typedef ::color::category::cmyk< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmyk< double > right_type;
		static left_type local(right_type({ 0, 0.093877551, 0.269387755, 0.0392156863 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace _internal {
		template< typename cmy_tag_name, typename cmyk_tag_name >
		struct convert
		<
			::color::category::cmy< cmy_tag_name >
			,::color::category::cmyk<cmyk_tag_name>
			> {
			public:
			typedef ::color::category::cmy< cmy_tag_name > category_left_type;
			typedef ::color::category::cmyk<cmyk_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		scalar_type cc = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		scalar_type cm = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		scalar_type cy = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		scalar_type ck = normalize_type::template process<3>(container_right_trait_type::template get<3>(right));
		scalar_type c = cc * (1-ck) + ck;
		scalar_type m = cm * (1-ck) + ck;
		scalar_type y = cy * (1-ck) + ck;
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(c));
		container_left_trait_type::template set<1>(left, diverse_type::template process<1>(m));
		container_left_trait_type::template set<2>(left, diverse_type::template process<2>(y));
	}
											  };

										   }
}

namespace color {
	namespace _internal {

		template< typename cmy_tag_name, typename gray_tag_name >
		struct convert
		<
			::color::category::cmy< cmy_tag_name >
			,::color::category::gray<gray_tag_name>
			> {
			public:
			typedef ::color::category::cmy< cmy_tag_name > category_left_type;
			typedef ::color::category::gray<gray_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::operation::_internal::invert< category_right_type > invert_type;
			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

	enum {
		cyan_p = ::color::place::_internal::cyan<category_left_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_left_type>::position_enum
		, yellow_p = ::color::place::_internal::yellow<category_left_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		container_left_trait_type::template set< cyan_p>(left, reformat_type::template process< cyan_p,0>(invert_type::template component<0>(container_right_trait_type::template get<0>(right))));
		container_left_trait_type::template set<magenta_p>(left, reformat_type::template process<magenta_p,0>(invert_type::template component<0>(container_right_trait_type::template get<0>(right))));
		container_left_trait_type::template set< yellow_p>(left, reformat_type::template process< yellow_p,0>(invert_type::template component<0>(container_right_trait_type::template get<0>(right))));
	}
																										 };

																							}
}

namespace color {
	namespace _internal {

		template< typename cmy_tag_name, typename hsl_tag_name >
		struct convert
		<
			::color::category::cmy< cmy_tag_name >
			,::color::category::hsl<hsl_tag_name>
			> {
			public:
			typedef ::color::category::cmy< cmy_tag_name > category_left_type;
			typedef ::color::category::hsl<hsl_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

			typedef ::color::_internal::convert< category_left_type, category_right_type > this_type;

	enum {
		cyan_p = ::color::place::_internal::cyan<category_left_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_left_type>::position_enum
		, yellow_p = ::color::place::_internal::yellow<category_left_type>::position_enum
	};

	enum {
		hue_p = ::color::place::_internal::hue<category_right_type>::position_enum
		,saturation_p = ::color::place::_internal::saturation<category_right_type>::position_enum
		, lightness_p = ::color::place::_internal::lightness<category_right_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		scalar_type h = normalize_type::template process< hue_p>(container_right_trait_type::template get< hue_p>(right));
		scalar_type s = normalize_type::template process<saturation_p>(container_right_trait_type::template get<saturation_p>(right));
		scalar_type l = normalize_type::template process< lightness_p>(container_right_trait_type::template get< lightness_p>(right));
		scalar_type r;
		scalar_type g;
		scalar_type b;
		if(s == 0) {
			r = l;
			g = l;
			b = l;
		} else {
			scalar_type q = l < scalar_type(0.5) ? (l * (1 + s)) : (l + s - l * s);
			scalar_type p = scalar_type(2) * l - q;
			r = this_type::value(p, q, h + (scalar_type(1) / scalar_type(3)) + (scalar_type(2) / scalar_type(3) < h ? -1 :0));
			g = this_type::value(p, q, h);
			b = this_type::value(p, q, h - (scalar_type(1) / scalar_type(3)) + (h < scalar_type(1) / scalar_type(3) ? +1 :0));
		}
		container_left_trait_type::template set< cyan_p>(left, diverse_type::template process< cyan_p>(scalar_type(1) - r));
		container_left_trait_type::template set<magenta_p>(left, diverse_type::template process<magenta_p>(scalar_type(1) - g));
		container_left_trait_type::template set< yellow_p>(left, diverse_type::template process< yellow_p>(scalar_type(1) - b));
	}

	private:
	static scalar_type value(scalar_type const& p, scalar_type const& q, scalar_type const& t) {
		if(t < scalar_type(1)/scalar_type(6)) {
			return (p + (q - p) * scalar_type(6) * t);
		}
		if(t < scalar_type(1)/scalar_type(2)) {
			return (q);
		}
		if(t < scalar_type(2)/scalar_type(3)) {
			return (p + (q - p) * ((scalar_type(2)/scalar_type(3)) - t) * scalar_type(6));
		}
		return p ;
	}
	  };

	  }
}

namespace color {
	namespace _internal {

		template< typename cmy_tag_name, typename hsv_tag_name >
		struct convert
		<
			::color::category::cmy< cmy_tag_name >
			,::color::category::hsv<hsv_tag_name>
			> {
			public:
			typedef ::color::category::cmy< cmy_tag_name > category_left_type;
			typedef ::color::category::hsv<hsv_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

	enum {
		cyan_p = ::color::place::_internal::cyan<category_left_type>::position_enum
		,yellow_p = ::color::place::_internal::yellow<category_left_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_left_type>::position_enum
	};

	enum {
		hue_p = ::color::place::_internal::hue<category_right_type>::position_enum
		,saturation_p = ::color::place::_internal::saturation<category_right_type>::position_enum
		,value_p = ::color::place::_internal::value<category_right_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		scalar_type h = normalize_type::template process<hue_p >(container_right_trait_type::template get<hue_p >(right));
		scalar_type s = normalize_type::template process<saturation_p>(container_right_trait_type::template get<saturation_p>(right));
		scalar_type v = normalize_type::template process<value_p >(container_right_trait_type::template get<value_p >(right));
		int region = int(6 * h);
		scalar_type f = h * 6 - region ;
		scalar_type p = v * (scalar_type(1) - s);
		scalar_type q = v * (scalar_type(1) - f * s);
		scalar_type t = v * (scalar_type(1) - (1 - f) * s);
		scalar_type r;
		scalar_type g;
		scalar_type b;
		switch(region % 6) {
		case 0:
			r = v, g = t, b = p;
			break;
		case 1:
			r = q, g = v, b = p;
			break;
		case 2:
			r = p, g = v, b = t;
			break;
		case 3:
			r = p, g = q, b = v;
			break;
		case 4:
			r = t, g = p, b = v;
			break;
		case 5:
			r = v, g = p, b = q;
			break;
		}
		container_left_trait_type::template set<cyan_p >(left, diverse_type::template process<cyan_p >(scalar_type(1) - r));
		container_left_trait_type::template set<yellow_p >(left, diverse_type::template process<yellow_p >(scalar_type(1) - g));
		container_left_trait_type::template set<magenta_p>(left, diverse_type::template process<magenta_p>(scalar_type(1) - b));
	}
													  };

										   }
}

namespace color {
	namespace _internal {

		template< typename cmy_tag_name, typename rgb_tag_name >
		struct convert
		<
			::color::category::cmy< cmy_tag_name >
			,::color::category::rgb<rgb_tag_name>
			> {
			public:
			typedef ::color::category::cmy< cmy_tag_name > category_left_type;
			typedef ::color::category::rgb<rgb_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;
			typedef ::color::operation::_internal::invert< category_right_type > invert_type;

	enum {
		cyan_p = ::color::place::_internal::cyan<category_left_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_left_type>::position_enum
		, yellow_p = ::color::place::_internal::yellow<category_left_type>::position_enum
	};

	enum {
		red_p = ::color::place::_internal::red<category_right_type>::position_enum
		,green_p = ::color::place::_internal::green<category_right_type>::position_enum
		,blue_p = ::color::place::_internal::blue<category_right_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		container_left_trait_type::template set< cyan_p>(left, reformat_type::template process< cyan_p,red_p >(invert_type::template component<red_p >(container_right_trait_type::template get<red_p >(right))));
		container_left_trait_type::template set<magenta_p>(left, reformat_type::template process<magenta_p,green_p>(invert_type::template component<green_p>(container_right_trait_type::template get<green_p>(right))));
		container_left_trait_type::template set< yellow_p>(left, reformat_type::template process< yellow_p,blue_p >(invert_type::template component<blue_p >(container_right_trait_type::template get<blue_p >(right))));
	}
																											   };

																							}
}

namespace color {
	namespace _internal {

		template< typename cmy_tag_name, typename yiq_tag_name >
		struct convert
		<
			::color::category::cmy< cmy_tag_name >
			,::color::category::yiq<yiq_tag_name>
			> {
			public:
			typedef ::color::category::cmy< cmy_tag_name > category_left_type;
			typedef ::color::category::yiq<yiq_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::constant::yiq< category_right_type > yiq_const_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

	enum {
		cyan_p = ::color::place::_internal::cyan<category_left_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_left_type>::position_enum
		, yellow_p = ::color::place::_internal::yellow<category_left_type>::position_enum
	};

	enum {
		luminance_p = ::color::place::_internal::luminance<category_right_type>::position_enum
		, inphase_p = ::color::place::_internal::inphase<category_right_type>::position_enum
		,quadrature_p = ::color::place::_internal::quadrature<category_right_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		static scalar_type a11 = yiq_const_type::a11(), a12 = yiq_const_type::a12(), a13 = yiq_const_type::a13();
		static scalar_type a21 = yiq_const_type::a21(), a22 = yiq_const_type::a22(), a23 = yiq_const_type::a23();
		static scalar_type a31 = yiq_const_type::a31(), a32 = yiq_const_type::a32(), a33 = yiq_const_type::a33();
		scalar_type y = normalize_type::template process< luminance_p>(container_right_trait_type::template get< luminance_p>(right));
		scalar_type i = normalize_type::template process< inphase_p>(container_right_trait_type::template get< inphase_p>(right));
		scalar_type q = normalize_type::template process<quadrature_p>(container_right_trait_type::template get<quadrature_p>(right));
		i = yiq_const_type::i_deverse(i);
		q = yiq_const_type::q_deverse(q);
		scalar_type r = a11 * y + a12 * i + a13 * q;
		scalar_type g = a21 * y + a22 * i + a23 * q;
		scalar_type b = a31 * y + a32 * i + a33 * q;
		container_left_trait_type::template set< cyan_p>(left, diverse_type::template process< cyan_p>(scalar_type(1) - r));
		container_left_trait_type::template set< yellow_p>(left, diverse_type::template process< yellow_p>(scalar_type(1) - g));
		container_left_trait_type::template set< magenta_p>(left, diverse_type::template process<magenta_p>(scalar_type(1) - b));
	}
													   };

										   }
}

namespace color {
	namespace _internal {

		template< typename cmy_tag_name, typename yuv_tag_name >
		struct convert
		<
			::color::category::cmy< cmy_tag_name >
			,::color::category::yuv<yuv_tag_name>
			> {
			public:
			typedef ::color::category::cmy< cmy_tag_name > category_left_type;
			typedef ::color::category::yuv<yuv_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::constant::yuv< category_right_type > yuv_const_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

	enum {
		cyan_p = ::color::place::_internal::cyan<category_left_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_left_type>::position_enum
		, yellow_p = ::color::place::_internal::yellow<category_left_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		static scalar_type const Wr = yuv_const_type::Wr();
		static scalar_type const Wb = yuv_const_type::Wb();
		static scalar_type const Wg = yuv_const_type::Wg();
		static scalar_type const Umax = yuv_const_type::Umax();
		static scalar_type const Vmax = yuv_const_type::Vmax();
		static scalar_type const b11 = 1, b12 = 0, b13 = (1 - Wr) / Vmax;
		static scalar_type const b21 = 1, b22 = - Wb*(1 - Wb) / Umax / Wg, b23 = -Wr*(1 - Wr) / Vmax / Wg;
		static scalar_type const b31 = 1, b32 = ((1 - Wb) / Umax), b33 = 0;
		scalar_type y = normalize_type::template process<0>(container_right_trait_type::template get<0>(right));
		scalar_type u = normalize_type::template process<1>(container_right_trait_type::template get<1>(right));
		scalar_type v = normalize_type::template process<2>(container_right_trait_type::template get<2>(right));
		u = (u - scalar_type(0.5)) * scalar_type(2) * Umax;
		v = (v - scalar_type(0.5)) * scalar_type(2) * Vmax;
		scalar_type r = y + v * b13;
		scalar_type g = y + u * b22 + v * b23;
		scalar_type b = y + u * b32 ;
		container_left_trait_type::template set< cyan_p>(left, diverse_type::template process< cyan_p>(scalar_type(1) - r));
		container_left_trait_type::template set<magenta_p>(left, diverse_type::template process<magenta_p>(scalar_type(1) - g));
		container_left_trait_type::template set< yellow_p>(left, diverse_type::template process< yellow_p>(scalar_type(1) - b));
	}
													  };

										   }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void black(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 1, 1, 1 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
		void gray
		(
			::color::model< ::color::category::cmy< tag_name > > & color_parameter
			,typename ::color::trait::scalar< ::color::category::cmy< tag_name > >::input_const_type percent
	) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		color_parameter = right_type({ 1-percent/100, 1-percent/100, 1-percent/100 });
	}

	template< typename tag_name >
	inline
	void gray50(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.5, 0.5, 0.5 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void white(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0, 0, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void red(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0, 1, 1 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void green(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 1, 0.5, 1 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void blue(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 1, 1, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void cyan(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 1, 0, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void magenta(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0, 1, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void yellow(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0, 0, 1 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void aqua(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 1, 0, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void fuchsia(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0, 1, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void lime(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 1, 0, 1 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void maroon(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.5, 1, 1 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void navy(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 1, 1, 0.5 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void olive(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.5, 0.5, 1 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void orange(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0, 0.35, 1 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void purple(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.5, 1, 0.5 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void silver(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.25, 0.25, 0.25 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void teal(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 1, 0.5, 0.5 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void violet(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.0666666667, 0.490196078, 0.0666666667 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void aquamarine(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.5, 0, 0.168627451 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void azure(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.0625, 0, 0 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void beige(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.0392156863, 0.0392156863, 0.137254902 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void bisque(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0, 0.125, 0.25 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void brown(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.352941176, 0.835294118, 0.835294118 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void chocolate(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.176470588, 0.588235294, 0.882352941 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void coral(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0, 0.5, 0.69 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void crimson(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.137254902, 0.921568627, 0.764705882 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void gainsboro(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.141176471, 0.141176471, 0.141176471 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void gold(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0, 0.156862745, 1 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void indigo(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.705882353, 1, 0.490196078 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void ivory(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0, 0, 0.0625 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void khaki(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.0625, 0.1, 0.45 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void lavender(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.0980392157, 0.0980392157, 0.0196078431 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void linen(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.0196078431, 0.0625, 0.1 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void moccasin(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0, 0.105882353, 0.290196078 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void orchid(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.145098039, 0.560784314, 0.160784314 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void peru(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.2, 0.48, 0.75 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void pink(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0, 0.247058824, 0.203921569 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void plum(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.133333333, 0.37254902, 0.133333333 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void salmon(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.0196078431, 0.5, 0.552941176 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void sienna(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.37254902, 0.678431373, 0.823529412 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void snow(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0, 0.0196078431, 0.0196078431 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void tan(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.176470588, 0.294117647, 0.450980392 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void thistle(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.152941176, 0.250980392, 0.152941176 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void tomato(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0, 0.611764706, 0.721568627 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void turquoise(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.75, 0.125, 0.1875 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void wheat(::color::model< ::color::category::cmy< tag_name > > & color_parameter) {
		typedef ::color::category::cmy< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::cmy< double > right_type;
		static left_type local(right_type({ 0.0392156863, 0.129411765, 0.298039216 }));
		color_parameter = local;
	}

						}
}

namespace color {
	namespace _internal {

		template< typename gray_tag_name, typename cmy_tag_name >
		struct convert
		<
			::color::category::gray< gray_tag_name >
			,::color::category::cmy<cmy_tag_name>
			> {
			public:
			typedef ::color::category::gray< gray_tag_name > category_left_type;
			typedef ::color::category::cmy<cmy_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::constant::gray< category_left_type > gray_const_type;

	enum {
		cyan_p = ::color::place::_internal::cyan<category_right_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_right_type>::position_enum
		, yellow_p = ::color::place::_internal::yellow<category_right_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		scalar_type value =
		gray_const_type::Rc() * (1 - normalize_type::template process< cyan_p> (container_right_trait_type::template get< cyan_p>(right)))
		+ gray_const_type::Gc() * (1 - normalize_type::template process<magenta_p> (container_right_trait_type::template get<magenta_p>(right)))
		+ gray_const_type::Bc() * (1 - normalize_type::template process< yellow_p> (container_right_trait_type::template get< yellow_p>(right)));
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(value));
	}
											  };

										   }
}

namespace color {
	namespace _internal {

		template< typename gray_tag_name, typename cmyk_tag_name >
		struct convert
		<
			::color::category::gray< gray_tag_name >
			,::color::category::cmyk<cmyk_tag_name>
			> {
			public:
			typedef ::color::category::gray< gray_tag_name > category_left_type;
			typedef ::color::category::cmyk<cmyk_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::constant::gray< category_left_type > gray_const_type;

	enum {
		cyan_p = ::color::place::_internal::cyan<category_right_type>::position_enum
		,magenta_p = ::color::place::_internal::magenta<category_right_type>::position_enum
		, yellow_p = ::color::place::_internal::yellow<category_right_type>::position_enum
		, key_p = ::color::place::_internal::key<category_right_type>::position_enum
	};

	static void process
	(
		container_left_input_type left
		,container_right_const_input_type right
	) {
		scalar_type c = normalize_type::template process< cyan_p>(container_right_trait_type::template get< cyan_p>(right));
		scalar_type m = normalize_type::template process<magenta_p>(container_right_trait_type::template get<magenta_p>(right));
		scalar_type y = normalize_type::template process< yellow_p>(container_right_trait_type::template get< yellow_p>(right));
		scalar_type k = normalize_type::template process< key_p>(container_right_trait_type::template get< key_p>(right));
		scalar_type value =
		(gray_const_type::Rc() * (1-c)
		 + gray_const_type::Gc() * (1-m)
		 + gray_const_type::Bc() * (1-y)) * (1-k);
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(value));
	}
											  };

										   }
}

namespace color {
	namespace _internal {

		template< typename tag_left_name, typename tag_right_name >
		struct convert
		<
			::color::category::gray< tag_left_name >
			,::color::category::gray< tag_right_name>
			> {
			public:
			typedef ::color::category::gray< tag_left_name > category_left_type;
			typedef ::color::category::gray< tag_right_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		enum {
			gl = ::color::place::_internal::gray<category_left_type>::position_enum
			,gr = ::color::place::_internal::gray<category_right_type>::position_enum
		};
		container_left_trait_type::template set<gl>(left, reformat_type::template process<gl,gr>(container_right_trait_type::template get<gr>(right)));
	}
																					 };

											   }
}

namespace color {
	namespace _internal {

		template< typename gray_tag_name, typename hsl_tag_name >
		struct convert
		<
			::color::category::gray< gray_tag_name >
			,::color::category::hsl<hsl_tag_name>
			> {
			public:
			typedef ::color::category::gray< gray_tag_name > category_left_type;
			typedef ::color::category::hsl<hsl_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,2>(container_right_trait_type::template get<2>(right)));
	}
																					};

											  }
}

namespace color {
	namespace _internal {

		template< typename gray_tag_name, typename hsv_tag_name >
		struct convert
		<
			::color::category::gray< gray_tag_name >
			,::color::category::hsv<hsv_tag_name>
			> {
			public:
			typedef ::color::category::gray< gray_tag_name > category_left_type;
			typedef ::color::category::hsv<hsv_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,2>(container_right_trait_type::template get<2>(right)));
	}
																					};

											  }
}

namespace color {
	namespace _internal {

		template< typename gray_tag_name, typename rgb_tag_name >
		struct convert
		<
			::color::category::gray< gray_tag_name >
			,::color::category::rgb< rgb_tag_name >
			> {
			public:
			typedef ::color::category::gray< gray_tag_name > category_left_type;
			typedef ::color::category::rgb< rgb_tag_name > category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::diverse< category_left_type > diverse_type;
			typedef ::color::_internal::normalize< category_right_type > normalize_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			typedef ::color::constant::gray< category_left_type > gray_const_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		enum {
			red_p = ::color::place::_internal::red<category_right_type>::position_enum
			, green_p = ::color::place::_internal::green<category_right_type>::position_enum
			, blue_p = ::color::place::_internal::blue<category_right_type>::position_enum
		};
		scalar_type value =
		gray_const_type::Rc() * normalize_type::template process<red_p > (container_right_trait_type::template get<red_p >(right))
		+ gray_const_type::Gc() * normalize_type::template process<green_p> (container_right_trait_type::template get<green_p>(right))
		+ gray_const_type::Bc() * normalize_type::template process<blue_p > (container_right_trait_type::template get<blue_p >(right));
		container_left_trait_type::template set<0>(left, diverse_type::template process<0>(value));
	}
											  };

										   }
}

namespace color {
	namespace _internal {

		template< typename gray_tag_name, typename yiq_tag_name >
		struct convert
		<
			::color::category::gray< gray_tag_name >
			,::color::category::yiq<yiq_tag_name>
			> {
			public:
			typedef ::color::category::gray< gray_tag_name > category_left_type;
			typedef ::color::category::yiq<yiq_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,0>(container_right_trait_type::template get<0>(right)));
	}
																					};

											  }
}

namespace color {
	namespace _internal {

		template< typename gray_tag_name, typename yuv_tag_name >
		struct convert
		<
			::color::category::gray< gray_tag_name >
			,::color::category::yuv<yuv_tag_name>
			> {
			public:
			typedef ::color::category::gray< gray_tag_name > category_left_type;
			typedef ::color::category::yuv<yuv_tag_name> category_right_type;
			typedef double scalar_type;

			typedef ::color::trait::container<category_left_type> container_left_trait_type;
			typedef ::color::trait::container<category_right_type> container_right_trait_type;

			typedef ::color::_internal::reformat< category_left_type, category_right_type, scalar_type > reformat_type;

			typedef typename container_left_trait_type::input_type container_left_input_type;
			typedef typename container_right_trait_type::input_const_type container_right_const_input_type;

			static void process
			(
				container_left_input_type left
				,container_right_const_input_type right
	) {
		container_left_trait_type::template set<0>(left, reformat_type::template process<0,0>(container_right_trait_type::template get<0>(right)));
	}
																					};

											  }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void black(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
		void gray
		(
			::color::model< ::color::category::gray< tag_name > > & color_parameter
			,typename ::color::trait::scalar< ::color::category::gray< tag_name > >::input_const_type percent
	) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		color_parameter = right_type({ percent / 100 });
	}

	template< typename tag_name >
	inline
	void gray50(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.5 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void white(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 1.0000001 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void red(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.2126729 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void green(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.3575761 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void blue(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.072175 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void cyan(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.7873272 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void magenta(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.2848479 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void yellow(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.9278251 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void aqua(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.7873272 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void fuchsia(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.2848479 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void lime(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.7151522 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void maroon(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.10633645 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void navy(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.0360875 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void olive(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.46391255 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void orange(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.67752183 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void purple(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.14242395 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void silver(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.750000075 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void teal(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.3936636 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void violet(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.630445436 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void aquamarine(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.881492964 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void azure(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.986708044 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void beige(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.953708429 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void bisque(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.892562325 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void brown(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.267289298 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void chocolate(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.478108 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void coral(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.59262325 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void crimson(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.256555224 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void gainsboro(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.858823615 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void gold(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.815644363 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void indigo(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.099345951 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void ivory(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.995489162 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void khaki(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.882714074 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void lavender(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.907621659 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void linen(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.943915531 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void moccasin(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.9033332 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void orchid(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.556490936 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void peru(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.560061214 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void pink(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.8085974 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void plum(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.695591129 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void salmon(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.598345414 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void sienna(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.376149096 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void snow(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.984562312 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void tan(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.719581196 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void thistle(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.776945947 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void tomato(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.510416009 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void turquoise(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.737568587 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace make {

		template< typename tag_name >
		inline
	void wheat(::color::model< ::color::category::gray< tag_name > > & color_parameter) {
		typedef ::color::category::gray< tag_name > category_left_type;
		typedef ::color::model< category_left_type > left_type;
		typedef ::color::gray< double > right_type;
		static left_type local(right_type({ 0.877599898 }));
		color_parameter = local;
	}

						 }
}

namespace color {
	namespace compare {

		template < typename category_name >
	bool darker(::color::model< category_name > const& left, ::color::model< category_name > const& right) {
		using namespace ::color::compare::operators;
		typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;
		return ::color::gray<scalar_type>(left).container() < ::color::gray<scalar_type>(right).container();
	}

																	   }
}

namespace color {
	namespace compare {

		template < typename category_name >
	bool brighter(::color::model< category_name > const& left, ::color::model< category_name > const& right) {
		using namespace ::color::compare::operators;
		typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;
		return ::color::gray<scalar_type>(left).container() > ::color::gray<scalar_type>(right).container();
	}

																	   }
}

namespace color {
	namespace get {

		template< typename category_name >
		inline
		typename ::color::trait::component< category_name >::return_image_type
	red(::color::model< category_name > const& color_parameter) {
		return color_parameter.template get<0>();
	}

									   }
}

namespace color {
	namespace get {

		template< typename category_name >
		inline
		typename ::color::trait::component< category_name >::return_image_type
	green(::color::model< category_name > const& color_parameter) {
		return color_parameter.template get<0>();
	}

									   }
}

namespace color {
	namespace get {

		template< typename category_name >
		inline
		typename ::color::trait::component< category_name >::return_image_type
	blue(::color::model< category_name > const& color_parameter) {
		return color_parameter.template get<0>();
	}

									   }
}

namespace color {
	namespace get {

		template< typename category_name >
		inline
		typename ::color::trait::component< category_name >::return_image_type
	gray(::color::model< category_name > const& color_parameter) {
		return color_parameter.template get<0>();
	}

									   }
}

namespace color {
	namespace get {

		template< typename category_name >
		inline
		typename ::color::trait::component< category_name >::return_image_type
	hue(::color::model< category_name > const& color_parameter) {
		return color_parameter.template get<0>();
	}

									   }
}

namespace color {

	namespace make {

		template< typename category_name >
	void black(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	black() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::black(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct black_type {};
		}

		using black_type = ::color::constant::base< ::color::constant::_internal::black_type >;
		using black_t = ::color::constant::black_type;
		using black = ::color::constant::black_type;

		template< typename category_name >
		struct make<::color::constant::black, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::black color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::black<category_type>().container();
	}

							};

													  }

}
namespace color {
	namespace make {

		template< typename category_name >
		void gray
		(
			::color::model< category_name > & color_parameter
			,typename ::color::trait::scalar< category_name >::input_const_type percent_param
	) {
		typedef ::color::trait::bound< category_name > bound_type;
		typedef ::color::trait::container< category_name > container_trait_type;
		typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;
		typedef typename ::color::trait::index< category_name >::instance_type index_type;
		for(index_type index=0; index < container_trait_type::size() ; ++index) {
			color_parameter.set(index, ((scalar_type(100) - percent_param) * bound_type::minimum(index) + percent_param * bound_type::maximum(index)) / scalar_type(100));
		}
	}

	template< typename category_name >
	::color::model< category_name >
	gray
	(
		typename ::color::trait::scalar< category_name >::input_const_type percent_param
									   ) {
		typedef ::color::model< category_name > model_type;
		model_type color_return;
		::color::make::gray(color_return, percent_param);
		return color_return;
	}

	template< typename category_name >
	::color::model< category_name >
	gray
	(
		typename ::color::trait::scalar< category_name >::input_const_type percent_param
		, category_name category_param
									   ) {
		typedef ::color::model< category_name > model_type;
		model_type color_return;
		::color::make::gray(color_return, percent_param);
		return color_return;
	}

	template< typename category_name >
	void gray50(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef ::color::trait::bound< category_name > bound_type;
		typedef typename model_type::index_type index_type;
		for(index_type index=0; index < model_type::size() ; ++index) {
			color_parameter.set(index, bound_type::minimum(index) + bound_type::range(index)/2);
		}
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	gray50() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::gray50(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct gray50_type {};
		}

		using gray50 = ::color::constant::base< ::color::constant::_internal::gray50_type >;
		using gray50_t = ::color::constant::gray50;
		using gray50_type = ::color::constant::gray50;

		template< typename category_name >
		struct make<::color::constant::gray50, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::gray50 color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::gray50<category_type>().container();
	}

							 };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void white(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	white() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::white(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct white_type {};
		}

		using white_type = ::color::constant::base< ::color::constant::_internal::white_type >;
		using white_t = ::color::constant::white_type;
		using white = ::color::constant::white_type;

		template< typename category_name >
		struct make<::color::constant::white, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::white color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::white<category_type>().container();
	}

							};

													  }

}

namespace color {

	namespace make {

		template< typename category_name >
	void red(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	red() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::red(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct red_type {};
		}

		using red_type = ::color::constant::base< ::color::constant::_internal::red_type >;
		using red_t = ::color::constant::red_type;
		using red = ::color::constant::red_type;

		template< typename category_name >
		struct make<::color::constant::red, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::red color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::red<category_type>().container();
	}

						  };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void green(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	green() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::green(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct green_type {};
		}

		using green_type = ::color::constant::base< ::color::constant::_internal::green_type >;
		using green_t = ::color::constant::green_type;
		using green = ::color::constant::green_type;

		template< typename category_name >
		struct make<::color::constant::green, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::green color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::green<category_type>().container();
	}

							};

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void blue(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	blue() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::blue(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct blue_type {};
		}

		using blue_type = ::color::constant::base< ::color::constant::_internal::blue_type >;
		using blue_t = ::color::constant::blue_type;
		using blue = ::color::constant::blue_type;

		template< typename category_name >
		struct make<::color::constant::blue, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::blue color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::blue<category_type>().container();
	}

						   };

													  }

}

namespace color {

	namespace make {

		template< typename category_name >
	void cyan(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	cyan() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::cyan(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct cyan_type {};
		}

		using cyan_type = ::color::constant::base< ::color::constant::_internal::cyan_type >;
		using cyan_t = ::color::constant::cyan_type;
		using cyan = ::color::constant::cyan_type;

		template< typename category_name >
		struct make<::color::constant::cyan, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::cyan color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::cyan<category_type>().container();
	}

						   };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void magenta(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	magenta() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::magenta(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct magenta_type {};
		}

		using magenta = ::color::constant::base< ::color::constant::_internal::magenta_type >;
		using magenta_t = ::color::constant::magenta;
		using magenta_type = ::color::constant::magenta;

		template< typename category_name >
		struct make<::color::constant::magenta, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::magenta color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::magenta<category_type>().container();
	}

							  };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void yellow(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	yellow() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::yellow(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct yellow_type {};
		}

		using yellow_type = ::color::constant::base< ::color::constant::_internal::yellow_type >;
		using yellow_t = ::color::constant::yellow_type;
		using yellow = ::color::constant::yellow_type;

		template< typename category_name >
		struct make<::color::constant::yellow, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::yellow color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::yellow<category_type>().container();
	}

							 };

													  }

}

namespace color {

	namespace make {

		template< typename category_name >
	void aqua(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	aqua() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::aqua(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct aqua_type {};
		}

		using aqua_type = ::color::constant::base< ::color::constant::_internal::aqua_type >;
		using aqua_t = ::color::constant::aqua_type;
		using aqua = ::color::constant::aqua_type;

		template< typename category_name >
		struct make<::color::constant::aqua, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::aqua color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::aqua<category_type>().container();
	}

						   };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void fuchsia(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	fuchsia() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::fuchsia(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct fuchsia_type {};
		}

		using fuchsia_type = ::color::constant::base< ::color::constant::_internal::fuchsia_type >;
		using fuchsia_t = ::color::constant::fuchsia_type;
		using fuchsia = ::color::constant::fuchsia_type;

		template< typename category_name >
		struct make<::color::constant::fuchsia, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::fuchsia color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::fuchsia<category_type>().container();
	}

							  };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void lime(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	lime() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::lime(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct lime_type {};
		}

		using lime = ::color::constant::base< ::color::constant::_internal::lime_type >;
		using lime_t = ::color::constant::lime;
		using lime_type = ::color::constant::lime;

		template< typename category_name >
		struct make<::color::constant::lime, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::lime color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::lime<category_type>().container();
	}

						   };

													  }

}

namespace color {

	namespace make {

		template< typename category_name >
	void maroon(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	maroon() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::maroon(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct maroon_type {};
		}

		using maroon = ::color::constant::base< ::color::constant::_internal::maroon_type >;
		using maroon_t = ::color::constant::maroon;
		using maroon_type = ::color::constant::maroon;

		template< typename category_name >
		struct make<::color::constant::maroon, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::maroon color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::maroon<category_type>().container();
	}

							 };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void navy(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	navy() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::navy(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct navy_type {};
		}

		using navy = ::color::constant::base< ::color::constant::_internal::navy_type >;
		using navy_t = ::color::constant::navy;
		using navy_type = ::color::constant::navy;

		template< typename category_name >
		struct make<::color::constant::navy, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::navy color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::navy<category_type>().container();
	}

						   };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void olive(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	olive() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::olive(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct olive_type {};
		}

		using olive = ::color::constant::base< ::color::constant::_internal::olive_type >;
		using olive_t = ::color::constant::olive;
		using olive_type = ::color::constant::olive;

		template< typename category_name >
		struct make<::color::constant::olive, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::olive color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::olive<category_type>().container();
	}

							};

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void orange(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	orange() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::orange(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct orange_type {};
		}

		using orange = ::color::constant::base< ::color::constant::_internal::orange_type >;
		using orange_t = ::color::constant::orange;
		using orange_type = ::color::constant::orange;

		template< typename category_name >
		struct make<::color::constant::orange, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::orange color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::orange<category_type>().container();
	}

							 };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void purple(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	purple() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::purple(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct purple_type {};
		}

		using purple_type = ::color::constant::base< ::color::constant::_internal::purple_type >;
		using purple_t = ::color::constant::purple_type;
		using purple = ::color::constant::purple_type;

		template< typename category_name >
		struct make<::color::constant::purple, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::purple color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::purple<category_type>().container();
	}

							 };

													  }

}

namespace color {

	namespace make {

		template< typename category_name >
	void silver(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	silver() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::silver(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct silver_type {};
		}

		using silver_type = ::color::constant::base< ::color::constant::_internal::silver_type >;
		using silver_t = ::color::constant::silver_type;
		using silver = ::color::constant::silver_type;

		template< typename category_name >
		struct make<::color::constant::silver, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::silver color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::silver<category_type>().container();
	}

							 };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void teal(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	teal() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::teal(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct teal_type {};
		}

		using teal_type = ::color::constant::base< ::color::constant::_internal::teal_type >;
		using teal_t = ::color::constant::teal_type;
		using teal = ::color::constant::teal_type;

		template< typename category_name >
		struct make<::color::constant::teal, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::teal color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::teal<category_type>().container();
	}

						   };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void violet(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	violet() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::violet(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct violet_type {};
		}

		using violet_type = ::color::constant::base< ::color::constant::_internal::violet_type >;
		using violet_t = ::color::constant::violet_type;
		using violet = ::color::constant::violet_type;

		template< typename category_name >
		struct make<::color::constant::violet, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::violet color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::violet<category_type>().container();
	}

							 };

													  }

}

namespace color {

	namespace make {

		template< typename category_name >
	void aquamarine(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	aquamarine() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::aquamarine(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct aquamarine_type {};
		}

		using aquamarine = ::color::constant::base< ::color::constant::_internal::aquamarine_type >;
		using aquamarine_t = ::color::constant::aquamarine;
		using aquamarine_type = ::color::constant::aquamarine;

		template< typename category_name >
		struct make<::color::constant::aquamarine, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::aquamarine color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::aquamarine<category_type>().container();
	}

								 };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void azure(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	azure() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::azure(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct azure_type {};
		}

		using azure_type = ::color::constant::base< ::color::constant::_internal::azure_type >;
		using azure_t = ::color::constant::azure_type;
		using azure = ::color::constant::azure_type;

		template< typename category_name >
		struct make<::color::constant::azure, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::azure color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::azure<category_type>().container();
	}

							};

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void beige(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	beige() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::beige(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct beige_type {};
		}

		using beige_type = ::color::constant::base< ::color::constant::_internal::beige_type >;
		using beige_t = ::color::constant::beige_type;
		using beige = ::color::constant::beige_type;

		template< typename category_name >
		struct make<::color::constant::beige, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::beige color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::beige<category_type>().container();
	}

							};

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void bisque(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	bisque() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::bisque(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct bisque_type {};
		}

		using bisque_type = ::color::constant::base< ::color::constant::_internal::bisque_type >;
		using bisque_t = ::color::constant::bisque_type;
		using bisque = ::color::constant::bisque_type;

		template< typename category_name >
		struct make<::color::constant::bisque, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::bisque color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::bisque<category_type>().container();
	}

							 };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void brown(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	brown() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::brown(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct brown_type {};
		}

		using brown_type = ::color::constant::base< ::color::constant::_internal::brown_type >;
		using brown_t = ::color::constant::brown_type;
		using brown = ::color::constant::brown_type;

		template< typename category_name >
		struct make<::color::constant::brown, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::brown color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::brown<category_type>().container();
	}

							};

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void chocolate(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	chocolate() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::chocolate(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct chocolate_type {};
		}

		using chocolate_type = ::color::constant::base< ::color::constant::_internal::chocolate_type >;
		using chocolate_t = ::color::constant::chocolate_type;
		using chocolate = ::color::constant::chocolate_type;

		template< typename category_name >
		struct make<::color::constant::chocolate, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::chocolate color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::chocolate<category_type>().container();
	}

								};

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void coral(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	coral() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::coral(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct coral_type {};
		}

		using coral_type = ::color::constant::base< ::color::constant::_internal::coral_type >;
		using coral_t = ::color::constant::coral_type;
		using coral = ::color::constant::coral_type;

		template< typename category_name >
		struct make<::color::constant::coral, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::coral color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::coral<category_type>().container();
	}

							};

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void crimson(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	crimson() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::crimson(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct crimson_type {};
		}

		using crimson_type = ::color::constant::base< ::color::constant::_internal::crimson_type >;
		using crimson_t = ::color::constant::crimson_type;
		using crimson = ::color::constant::crimson_type;

		template< typename category_name >
		struct make<::color::constant::crimson, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::crimson color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::crimson<category_type>().container();
	}

							  };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void gainsboro(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	gainsboro() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::gainsboro(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct gainsboro_type {};
		}

		using gainsboro_type = ::color::constant::base< ::color::constant::_internal::gainsboro_type >;
		using gainsboro_t = ::color::constant::gainsboro_type;
		using gainsboro = ::color::constant::gainsboro_type;

		template< typename category_name >
		struct make<::color::constant::gainsboro, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::gainsboro color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::gainsboro<category_type>().container();
	}

								};

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void gold(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	gold() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::gold(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct gold_type {};
		}

		using gold_type = ::color::constant::base< ::color::constant::_internal::gold_type >;
		using gold_t = ::color::constant::gold_type;
		using gold = ::color::constant::gold_type;

		template< typename category_name >
		struct make<::color::constant::gold, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::gold color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::gold<category_type>().container();
	}

						   };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void indigo(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	indigo() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::indigo(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct indigo_type {};
		}

		using indigo_type = ::color::constant::base< ::color::constant::_internal::indigo_type >;
		using indigo_t = ::color::constant::indigo_type;
		using indigo = ::color::constant::indigo_type;

		template< typename category_name >
		struct make<::color::constant::indigo, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::indigo color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::indigo<category_type>().container();
	}

							 };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void ivory(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	ivory() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::ivory(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct ivory_type {};
		}

		using ivory_type = ::color::constant::base< ::color::constant::_internal::ivory_type >;
		using ivory_t = ::color::constant::ivory_type;
		using ivory = ::color::constant::ivory_type;

		template< typename category_name >
		struct make<::color::constant::ivory, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::ivory color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::ivory<category_type>().container();
	}

							};

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void khaki(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	khaki() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::khaki(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct khaki_type {};
		}

		using khaki_type = ::color::constant::base< ::color::constant::_internal::khaki_type >;
		using khaki_t = ::color::constant::khaki_type;
		using khaki = ::color::constant::khaki_type;

		template< typename category_name >
		struct make<::color::constant::khaki, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::khaki color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::khaki<category_type>().container();
	}

							};

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void lavender(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	lavender() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::lavender(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct lavender_type {};
		}

		using lavender_type = ::color::constant::base< ::color::constant::_internal::lavender_type >;
		using lavender_t = ::color::constant::lavender_type;
		using lavender = ::color::constant::lavender_type;

		template< typename category_name >
		struct make<::color::constant::lavender, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::lavender color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::lavender<category_type>().container();
	}

							   };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void linen(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	linen() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::linen(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct linen_type {};
		}

		using linen = ::color::constant::base< ::color::constant::_internal::linen_type >;
		using linen_t = ::color::constant::linen;
		using linen_type = ::color::constant::linen;

		template< typename category_name >
		struct make<::color::constant::linen, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::linen color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::linen<category_type>().container();
	}

							};

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void moccasin(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	moccasin() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::moccasin(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct moccasin_type {};
		}

		using moccasin = ::color::constant::base< ::color::constant::_internal::moccasin_type >;
		using moccasin_t = ::color::constant::moccasin;
		using moccasin_type = ::color::constant::moccasin;

		template< typename category_name >
		struct make<::color::constant::moccasin, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::moccasin color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::moccasin<category_type>().container();
	}

							   };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void orchid(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	orchid() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::orchid(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct orchid_type {};
		}

		using orchid = ::color::constant::base< ::color::constant::_internal::orchid_type >;
		using orchid_t = ::color::constant::orchid;
		using orchid_type = ::color::constant::orchid;

		template< typename category_name >
		struct make<::color::constant::orchid, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::orchid color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::orchid<category_type>().container();
	}

							 };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void peru(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	peru() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::peru(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct peru_type {};
		}

		using peru = ::color::constant::base< ::color::constant::_internal::peru_type >;
		using peru_t = ::color::constant::peru;
		using peru_type = ::color::constant::peru;

		template< typename category_name >
		struct make<::color::constant::peru, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::peru color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::peru<category_type>().container();
	}

						   };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void pink(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	pink() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::pink(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct pink_type {};
		}

		using pink = ::color::constant::base< ::color::constant::_internal::pink_type >;
		using pink_t = ::color::constant::pink;
		using pink_type = ::color::constant::pink;

		template< typename category_name >
		struct make<::color::constant::pink, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::pink color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::pink<category_type>().container();
	}

						   };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void plum(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	plum() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::plum(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct plum_type {};
		}

		using plum = ::color::constant::base< ::color::constant::_internal::plum_type >;
		using plum_t = ::color::constant::plum;
		using plum_type = ::color::constant::plum;

		template< typename category_name >
		struct make<::color::constant::plum, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::plum color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::plum<category_type>().container();
	}

						   };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void salmon(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	salmon() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::salmon(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct salmon_type {};
		}

		using salmon_type = ::color::constant::base< ::color::constant::_internal::salmon_type >;
		using salmon_t = ::color::constant::salmon_type;
		using salmon = ::color::constant::salmon_type;

		template< typename category_name >
		struct make<::color::constant::salmon, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::salmon color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::salmon<category_type>().container();
	}

							 };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void sienna(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	sienna() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::sienna(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct sienna_type {};
		}

		using sienna_type = ::color::constant::base< ::color::constant::_internal::sienna_type >;
		using sienna_t = ::color::constant::sienna_type;
		using sienna = ::color::constant::sienna_type;

		template< typename category_name >
		struct make<::color::constant::sienna, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::sienna color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::sienna<category_type>().container();
	}

							 };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void snow(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	snow() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::snow(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct snow_type {};
		}

		using snow_type = ::color::constant::base< ::color::constant::_internal::snow_type >;
		using snow_t = ::color::constant::snow_type;
		using snow = ::color::constant::snow_type;

		template< typename category_name >
		struct make<::color::constant::snow, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::snow color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::snow<category_type>().container();
	}

						   };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void tan(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	tan() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::tan(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct tan_type {};
		}

		using tan = ::color::constant::base< ::color::constant::_internal::tan_type >;
		using tan_t = ::color::constant::tan;
		using tan_type = ::color::constant::tan;

		template< typename category_name >
		struct make<::color::constant::tan, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::tan color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::tan<category_type>().container();
	}

						  };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void thistle(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	thistle() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::thistle(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct thistle_type {};
		}

		using thistle = ::color::constant::base< ::color::constant::_internal::thistle_type >;
		using thistle_t = ::color::constant::thistle;
		using thistle_type = ::color::constant::thistle;

		template< typename category_name >
		struct make<::color::constant::thistle, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::thistle color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::thistle<category_type>().container();
	}

							  };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void tomato(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	tomato() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::tomato(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct tomato_type {};
		}

		using tomato_type = ::color::constant::base< ::color::constant::_internal::tomato_type >;
		using tomato_t = ::color::constant::tomato_type;
		using tomato = ::color::constant::tomato_type;

		template< typename category_name >
		struct make<::color::constant::tomato, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::tomato color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::tomato<category_type>().container();
	}

							 };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void turquoise(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	turquoise() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::turquoise(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct turquoise_type {};
		}

		using turquoise_type = ::color::constant::base< ::color::constant::_internal::turquoise_type >;
		using turquoise_t = ::color::constant::turquoise_type;
		using turquoise = ::color::constant::turquoise_type;

		template< typename category_name >
		struct make<::color::constant::turquoise, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::turquoise color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		auto static s_container = ::color::make::turquoise<category_type>().container();
		m = s_container;
	}

													  };

													  }

}
namespace color {

	namespace make {

		template< typename category_name >
	void wheat(::color::model< category_name > & color_parameter) {
		typedef ::color::model< category_name > model_type;
		typedef typename model_type::index_type index_type;
	}

	template< typename category_name >
	inline
	::color::model< category_name >
	wheat() {
		typedef ::color::model< category_name > model_type;
		static model_type dummy;
		::color::make::wheat(dummy);
		return dummy;
	}

						  }

	namespace constant {
		namespace _internal {
			struct wheat_type {};
		}

		using wheat_type = ::color::constant::base< ::color::constant::_internal::wheat_type >;
		using wheat_t = ::color::constant::wheat_type;
		using wheat = ::color::constant::wheat_type;

		template< typename category_name >
		struct make<::color::constant::wheat, category_name > {
			typedef category_name category_type;
			typedef ::color::constant::wheat color_type;

			typedef typename ::color::trait::container<category_type>::output_type container_output_type;

	inline static void process(container_output_type & m) {
		m = ::color::make::wheat<category_type>().container();
	}

							};

													  }

}

namespace color {
	namespace set {

		template< typename category_name >
		inline
		void
		red
		(
			::color::model< category_name > & color_parameter,
			typename ::color::model< category_name >::component_input_const_type component_parameter
	) {
	}
						  }
}

namespace color {
	namespace set {

		template< typename category_name >
		inline
		void
		green
		(
			::color::model< category_name > & color_parameter,
			typename ::color::model< category_name >::component_input_const_type component_parameter
	) {
	};

						  }
}

namespace color {
	namespace set {

		template< typename category_name >
		inline
		void
		blue
		(
			::color::model< category_name > & color_parameter,
			typename ::color::model< category_name >::component_input_const_type component_parameter
	) {
	};

						  }
}

namespace color {
	namespace set {

		template< typename category_name >
		inline
		void
		gray
		(
			::color::model< category_name > & color_parameter,
			typename ::color::model< category_name >::component_input_const_type component_parameter
	) {
	};

						  }
}

namespace color {
	namespace set {

		template< typename category_name >
		inline
		void
		hue
		(
			::color::model< category_name > & color_parameter,
			typename ::color::model< category_name >::component_input_const_type component_parameter
	) {
	};

						  }
}

namespace color {
	namespace set {

		template< typename category_name >
		inline
		void
		inphase
		(
			::color::model< category_name > & color_parameter,
			typename ::color::model< category_name >::component_input_const_type component_parameter
	) {
	};

						  }
}

namespace color {
	namespace set {

		template< typename category_name >
		inline
		void
		key
		(
			::color::model< category_name > & color_parameter,
			typename ::color::model< category_name >::component_input_const_type component_parameter
	) {
	};

						  }
}

namespace color {
	namespace set {

		template< typename category_name >
		inline
		void
		luma
		(
			::color::model< category_name > & color_parameter,
			typename ::color::model< category_name >::component_input_const_type component_parameter
	) {
	};

						  }
}

namespace color {
	namespace set {

		template< typename category_name >
		inline
		void
		luminance
		(
			::color::model< category_name > & color_parameter,
			typename ::color::model< category_name >::component_input_const_type component_parameter
	) {
	};

						  }
}

namespace color {
	namespace set {

		template< typename category_name >
		inline
		void
		quadrature
		(
			::color::model< category_name > & color_parameter,
			typename ::color::model< category_name >::component_input_const_type component_parameter
	) {
	};

						  }
}

namespace color {
	namespace fix {
		namespace _internal {

			template< typename category_name >
			struct overburn {
				public:
				typedef category_name category_type;

				typedef ::color::trait::index<category_type> index_trait_type;
				typedef ::color::trait::bound< category_type > bound_type;
				typedef ::color::trait::component<category_type> component_trait_type;
				typedef ::color::trait::container< category_type > container_trait_type;

				typedef typename ::color::model<category_type> model_type;

				typedef typename component_trait_type::instance_type component_type;

				typedef typename index_trait_type::instance_type index_type;

	static void process(model_type &result) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			if(result.get(index) < bound_type::minimum(index)) {
				result.set(index, bound_type::minimum(index));
				continue;
			}
			if(bound_type::maximum(index) < result.get(index)) {
				result.set(index, bound_type::maximum(index));
				continue;
			}
		}
	}

	static void process(model_type & result, model_type const& right) {
		for(index_type index = 0; index < container_trait_type::size(); index ++) {
			if(right.get(index) < bound_type::minimum(index)) {
				result.set(index, bound_type::minimum(index));
				continue;
			}
			if(bound_type::maximum(index) < right.get(index)) {
				result.set(index, bound_type::maximum(index));
				continue;
			}
			result.set(index, right.get(index));
		}
	}

	  };

	  }

	template< typename category_name >
	void overburn
	(
		::color::model<category_name> & result
					  ) {
		::color::fix::_internal::overburn<category_name>::process(result);
	}

	template< typename category_name >
	void overburn
	(
		::color::model<category_name> & result
		,::color::model<category_name> const& right
					   ) {
		::color::fix::_internal::overburn<category_name>::process(result, right);
	}

									 }
}

namespace color {
	namespace category {

		namespace _internal {
			struct generic_bool {};
			struct generic_uint8 {};
			struct generic_uint16 {};
			struct generic_uint24 {};
			struct generic_uint32 {};
			struct generic_uint48 {};
			struct generic_uint64 {};
			struct generic_float {};
			struct generic_double {};
			struct generic_ldouble {};
		}

		template< typename tag_name>
		struct generic {
		};

		using generic_bool = ::color::category::generic< ::color::category::_internal::generic_bool >;
		using generic_uint8 = ::color::category::generic< ::color::category::_internal::generic_uint8 >;
		using generic_uint16 = ::color::category::generic< ::color::category::_internal::generic_uint16 >;
		using generic_uint24 = ::color::category::generic< ::color::category::_internal::generic_uint24 >;
		using generic_uint32 = ::color::category::generic< ::color::category::_internal::generic_uint32 >;
		using generic_uint48 = ::color::category::generic< ::color::category::_internal::generic_uint48 >;
		using generic_uint64 = ::color::category::generic< ::color::category::_internal::generic_uint64 >;
		using generic_float = ::color::category::generic< ::color::category::_internal::generic_float >;
		using generic_double = ::color::category::generic< ::color::category::_internal::generic_double >;
		using generic_ldouble = ::color::category::generic< ::color::category::_internal::generic_ldouble >;

														  }

}

namespace color {
	namespace constant {

		template< typename category_name>
		struct generic {
			public:
			typedef category_name category_type;

			typedef typename ::color::trait::scalar< category_name >::instance_type scalar_type;

			typedef ::color::constant::yuv<category_type> this_type;

	static scalar_type const zero() {
		return 0;
	}
	static scalar_type const one() {
		return 1;
	}
	static scalar_type const two() {
		return 2;
	}
										  };

												   }
}

using namespace ::color::operation::arithmetic;
using namespace ::color::compare::operators;

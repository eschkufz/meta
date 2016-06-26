#ifndef META_INCLUDE_IS_STL_TUPLE_H
#define META_INCLUDE_IS_STL_TUPLE_H

#include <tuple>

namespace meta {

template <typename T>
struct is_stl_tuple : public std::false_type {};

template <typename... Ts>
struct is_stl_tuple<std::tuple<Ts...>> : public std::true_type {};
template <typename... Ts>
struct is_stl_tuple<const std::tuple<Ts...>> : public std::true_type {};

} // namespace meta

#endif

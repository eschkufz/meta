#ifndef META_INCLUDE_IS_STL_PAIR_H
#define META_INCLUDE_IS_STL_PAIR_H

#include <utility>

namespace meta {

template <typename T>
struct is_stl_pair : public std::false_type {};

template <typename T1, typename T2>
struct is_stl_pair<std::pair<T1, T2>> : public std::true_type {};
template <typename T1, typename T2>
struct is_stl_pair<const std::pair<T1, T2>> : public std::true_type {};

} // namespace meta

#endif


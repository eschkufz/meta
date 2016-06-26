#ifndef META_INCLUDE_IS_STL_STRING_H
#define META_INCLUDE_IS_STL_STRING_H

#include <string>

namespace meta {

template <typename T>
struct is_stl_string : public std::false_type {};

template <>
struct is_stl_string<std::string> : public std::true_type {};
template <>
struct is_stl_string<const std::string> : public std::true_type {};

} // namespace meta

#endif




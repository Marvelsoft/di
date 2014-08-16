//
// Copyright (c) 2014 Krzysztof Jusiak (krzysztof at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#ifndef BOOST_DI_TYPE_TRAITS_HAS_CONFIGURE_HPP
#define BOOST_DI_TYPE_TRAITS_HAS_CONFIGURE_HPP

#include "boost/di/aux_/mpl.hpp"

namespace boost {
namespace di {
namespace type_traits {

template<typename T>
class has_configure {
    struct base_impl { void configure() { } };
    struct base
        : base_impl
        , std::conditional<std::is_class<T>::value, T, void_>::type
    { base() { } };

    template<typename U>
    static no_tag test(
        U*
      , non_type<void (base_impl::*)(), &U::configure>* = 0
    );

    template<typename>
    static yes_tag test(...);

public:
    static constexpr bool value = sizeof(test<base>(0)) == sizeof(yes_tag);
};

} // namespace type_traits
} // namespace di
} // namespace boost

#endif


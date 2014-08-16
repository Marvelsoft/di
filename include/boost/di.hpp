//
// Copyright (c) 2014 Krzysztof Jusiak (krzysztof at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#ifndef BOOST_DI_HPP
#define BOOST_DI_HPP

#include "boost/di/aux_/config.hpp"

#if !defined(BOOST_DI_CFG_NO_PREPROCESSED_HEADERS)
    //TODO
#else

    // injections
    #include "boost/di/inject.hpp"

    // annotations
    #include "boost/di/named.hpp"

    // scopes
    #include "boost/di/scopes/deduce.hpp"
    #include "boost/di/scopes/external.hpp"
    #include "boost/di/scopes/session.hpp"
    #include "boost/di/scopes/shared.hpp"
    #include "boost/di/scopes/unique.hpp"

    // bindings
    #include "boost/di/bindings.hpp"

    // injectors
    #include "boost/di/injector.hpp"
    #include "boost/di/make_injector.hpp"

    //utilities
    #include "boost/di/provider.hpp"

#endif

#endif


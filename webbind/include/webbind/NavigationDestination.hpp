#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class NavigationDestination : public emlite::Val {
    explicit NavigationDestination(Handle h) noexcept;

public:
    explicit NavigationDestination(const emlite::Val &val) noexcept;
    static NavigationDestination take_ownership(Handle h) noexcept;

    NavigationDestination clone() const noexcept;
    jsbind::String url() const;
    jsbind::String key() const;
    jsbind::String id() const;
    long long index() const;
    bool sameDocument() const;
    jsbind::Any getState();
};


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
    jsbind::USVString url() const;
    jsbind::DOMString key() const;
    jsbind::DOMString id() const;
    long long index() const;
    bool sameDocument() const;
    jsbind::Any getState();
};


#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class NavigatorLogin : public emlite::Val {
    explicit NavigatorLogin(Handle h) noexcept;

public:
    explicit NavigatorLogin(const emlite::Val &val) noexcept;
    static NavigatorLogin take_ownership(Handle h) noexcept;

    NavigatorLogin clone() const noexcept;
    jsbind::Promise setStatus(const LoginStatus& status);
};


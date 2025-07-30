#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class TrustedScriptURL : public emlite::Val {
    explicit TrustedScriptURL(Handle h) noexcept;

public:
    explicit TrustedScriptURL(const emlite::Val &val) noexcept;
    static TrustedScriptURL take_ownership(Handle h) noexcept;

    TrustedScriptURL clone() const noexcept;
    jsbind::String toJSON();
};


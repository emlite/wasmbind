#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WEBGL_lose_context : public emlite::Val {
    explicit WEBGL_lose_context(Handle h) noexcept;

public:
    explicit WEBGL_lose_context(const emlite::Val &val) noexcept;
    static WEBGL_lose_context take_ownership(Handle h) noexcept;

    WEBGL_lose_context clone() const noexcept;
    jsbind::Undefined loseContext();
    jsbind::Undefined restoreContext();
};


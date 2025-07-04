#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class XRHitTestSource : public emlite::Val {
    explicit XRHitTestSource(Handle h) noexcept;

public:
    explicit XRHitTestSource(const emlite::Val &val) noexcept;
    static XRHitTestSource take_ownership(Handle h) noexcept;

    XRHitTestSource clone() const noexcept;
    jsbind::Undefined cancel();
};


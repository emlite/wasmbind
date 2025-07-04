#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class XRTransientInputHitTestSource : public emlite::Val {
    explicit XRTransientInputHitTestSource(Handle h) noexcept;

public:
    explicit XRTransientInputHitTestSource(const emlite::Val &val) noexcept;
    static XRTransientInputHitTestSource take_ownership(Handle h) noexcept;

    XRTransientInputHitTestSource clone() const noexcept;
    jsbind::Undefined cancel();
};


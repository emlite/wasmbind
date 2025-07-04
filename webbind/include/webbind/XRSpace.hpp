#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class XRSpace : public EventTarget {
    explicit XRSpace(Handle h) noexcept;

public:
    explicit XRSpace(const emlite::Val &val) noexcept;
    static XRSpace take_ownership(Handle h) noexcept;

    XRSpace clone() const noexcept;
};


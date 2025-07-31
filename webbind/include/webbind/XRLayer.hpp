#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


/// The XRLayer class.
/// [`XRLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRLayer)
class XRLayer : public EventTarget {
    explicit XRLayer(Handle h) noexcept;

public:
    explicit XRLayer(const emlite::Val &val) noexcept;
    static XRLayer take_ownership(Handle h) noexcept;

    [[nodiscard]] XRLayer clone() const noexcept;
};


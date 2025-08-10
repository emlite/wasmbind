#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

/// Interface XRLayer
/// [`XRLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRLayer)
class XRLayer : public EventTarget {
    explicit XRLayer(Handle h) noexcept;
public:
    explicit XRLayer(const emlite::Val &val) noexcept;
    static XRLayer take_ownership(Handle h) noexcept;
    [[nodiscard]] XRLayer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind
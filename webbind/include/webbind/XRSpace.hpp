#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

/// Interface XRSpace
/// [`XRSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRSpace)
class XRSpace : public EventTarget {
    explicit XRSpace(Handle h) noexcept;
public:
    explicit XRSpace(const emlite::Val &val) noexcept;
    static XRSpace take_ownership(Handle h) noexcept;
    [[nodiscard]] XRSpace clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind
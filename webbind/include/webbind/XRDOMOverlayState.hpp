#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type XRDOMOverlayState
/// [`XRDOMOverlayState`](https://developer.mozilla.org/en-US/docs/Web/API/XRDOMOverlayState)
class XRDOMOverlayState : public emlite::Val {
  explicit XRDOMOverlayState(Handle h) noexcept;
public:
    static XRDOMOverlayState take_ownership(Handle h) noexcept;
    explicit XRDOMOverlayState(const emlite::Val &val) noexcept;
    XRDOMOverlayState() noexcept;
    [[nodiscard]] XRDOMOverlayState clone() const noexcept;
    [[nodiscard]] XRDOMOverlayType type() const;
    void type(const XRDOMOverlayType& value);
};

} // namespace webbind
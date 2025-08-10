#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type XRDOMOverlayState
class XRDOMOverlayState : public emlite::Val {
  explicit XRDOMOverlayState(Handle h) noexcept;
public:
    static XRDOMOverlayState take_ownership(Handle h) noexcept;
    explicit XRDOMOverlayState(const emlite::Val &val) noexcept;
    XRDOMOverlayState() noexcept;
    [[nodiscard]] XRDOMOverlayState clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] XRDOMOverlayType type() const;
    /// Setter of the `type` attribute.
    void type(const XRDOMOverlayType& value);
};

} // namespace webbind
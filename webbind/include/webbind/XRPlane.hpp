#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class XRSpace;
class DOMPointReadOnly;

/// Interface XRPlane
/// [`XRPlane`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane)
class XRPlane : public emlite::Val {
    explicit XRPlane(Handle h) noexcept;
public:
    explicit XRPlane(const emlite::Val &val) noexcept;
    static XRPlane take_ownership(Handle h) noexcept;
    [[nodiscard]] XRPlane clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XRPlane.planeSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane/planeSpace)
    /// [`XRPlane.planeSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane/planeSpace)
    [[nodiscard]] XRSpace planeSpace() const;
    /// [`XRPlane.polygon`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane/polygon)
    /// [`XRPlane.polygon`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane/polygon)
    [[nodiscard]] jsbind::TypedArray<DOMPointReadOnly> polygon() const;
    /// [`XRPlane.orientation`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane/orientation)
    /// [`XRPlane.orientation`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane/orientation)
    [[nodiscard]] XRPlaneOrientation orientation() const;
    /// [`XRPlane.lastChangedTime`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane/lastChangedTime)
    /// [`XRPlane.lastChangedTime`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane/lastChangedTime)
    [[nodiscard]] jsbind::Any lastChangedTime() const;
    /// [`XRPlane.semanticLabel`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane/semanticLabel)
    /// [`XRPlane.semanticLabel`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane/semanticLabel)
    [[nodiscard]] jsbind::String semanticLabel() const;
};

} // namespace webbind
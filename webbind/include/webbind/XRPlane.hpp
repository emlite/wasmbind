#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRSpace;
class DOMPointReadOnly;


/// The XRPlane class.
/// [`XRPlane`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane)
class XRPlane : public emlite::Val {
    explicit XRPlane(Handle h) noexcept;

public:
    explicit XRPlane(const emlite::Val &val) noexcept;
    static XRPlane take_ownership(Handle h) noexcept;

    [[nodiscard]] XRPlane clone() const noexcept;
    /// Getter of the `planeSpace` attribute.
    /// [`XRPlane.planeSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane/planeSpace)
    [[nodiscard]] XRSpace planeSpace() const;
    /// Getter of the `polygon` attribute.
    /// [`XRPlane.polygon`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane/polygon)
    [[nodiscard]] jsbind::TypedArray<DOMPointReadOnly> polygon() const;
    /// Getter of the `orientation` attribute.
    /// [`XRPlane.orientation`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane/orientation)
    [[nodiscard]] XRPlaneOrientation orientation() const;
    /// Getter of the `lastChangedTime` attribute.
    /// [`XRPlane.lastChangedTime`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane/lastChangedTime)
    [[nodiscard]] jsbind::Any lastChangedTime() const;
    /// Getter of the `semanticLabel` attribute.
    /// [`XRPlane.semanticLabel`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlane/semanticLabel)
    [[nodiscard]] jsbind::String semanticLabel() const;
};


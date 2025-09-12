#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DOMPointInit;
class XRRayDirectionInit;
class XRRigidTransform;
class DOMPointReadOnly;

/// Interface XRRay
/// [`XRRay`](https://developer.mozilla.org/en-US/docs/Web/API/XRRay)
class XRRay : public emlite::Val {
    explicit XRRay(Handle h) noexcept;
public:
    explicit XRRay(const emlite::Val &val) noexcept;
    static XRRay take_ownership(Handle h) noexcept;
    [[nodiscard]] XRRay clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new XRRay(..)` constructor, creating a new XRRay instance
    XRRay();
    /// The `new XRRay(..)` constructor, creating a new XRRay instance
    XRRay(const DOMPointInit& origin);
    /// The `new XRRay(..)` constructor, creating a new XRRay instance
    XRRay(const DOMPointInit& origin, const XRRayDirectionInit& direction);
    /// The `new XRRay(..)` constructor, creating a new XRRay instance
    XRRay(const XRRigidTransform& transform);
    /// [`XRRay.origin`](https://developer.mozilla.org/en-US/docs/Web/API/XRRay/origin)
    /// [`XRRay.origin`](https://developer.mozilla.org/en-US/docs/Web/API/XRRay/origin)
    [[nodiscard]] DOMPointReadOnly origin() const;
    /// [`XRRay.direction`](https://developer.mozilla.org/en-US/docs/Web/API/XRRay/direction)
    /// [`XRRay.direction`](https://developer.mozilla.org/en-US/docs/Web/API/XRRay/direction)
    [[nodiscard]] DOMPointReadOnly direction() const;
    /// [`XRRay.matrix`](https://developer.mozilla.org/en-US/docs/Web/API/XRRay/matrix)
    /// [`XRRay.matrix`](https://developer.mozilla.org/en-US/docs/Web/API/XRRay/matrix)
    [[nodiscard]] jsbind::Float32Array matrix() const;
};

} // namespace webbind
#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMPointReadOnly;
class XRRigidTransform;


/// The XRRay class.
/// [`XRRay`](https://developer.mozilla.org/en-US/docs/Web/API/XRRay)
class XRRay : public emlite::Val {
    explicit XRRay(Handle h) noexcept;

public:
    explicit XRRay(const emlite::Val &val) noexcept;
    static XRRay take_ownership(Handle h) noexcept;

    [[nodiscard]] XRRay clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new XRRay(..)` constructor, creating a new XRRay instance
    XRRay(const XRRigidTransform& transform);
    /// Getter of the `origin` attribute.
    /// [`XRRay.origin`](https://developer.mozilla.org/en-US/docs/Web/API/XRRay/origin)
    [[nodiscard]] DOMPointReadOnly origin() const;
    /// Getter of the `direction` attribute.
    /// [`XRRay.direction`](https://developer.mozilla.org/en-US/docs/Web/API/XRRay/direction)
    [[nodiscard]] DOMPointReadOnly direction() const;
    /// Getter of the `matrix` attribute.
    /// [`XRRay.matrix`](https://developer.mozilla.org/en-US/docs/Web/API/XRRay/matrix)
    [[nodiscard]] jsbind::Float32Array matrix() const;
};


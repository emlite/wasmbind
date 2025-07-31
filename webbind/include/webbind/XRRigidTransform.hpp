#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMPointReadOnly;
class XRRigidTransform;
class DOMPointInit;


/// The XRRigidTransform class.
/// [`XRRigidTransform`](https://developer.mozilla.org/en-US/docs/Web/API/XRRigidTransform)
class XRRigidTransform : public emlite::Val {
    explicit XRRigidTransform(Handle h) noexcept;

public:
    explicit XRRigidTransform(const emlite::Val &val) noexcept;
    static XRRigidTransform take_ownership(Handle h) noexcept;

    [[nodiscard]] XRRigidTransform clone() const noexcept;
    /// The `new XRRigidTransform(..)` constructor, creating a new XRRigidTransform instance
    XRRigidTransform();
    /// The `new XRRigidTransform(..)` constructor, creating a new XRRigidTransform instance
    XRRigidTransform(const DOMPointInit& position);
    /// The `new XRRigidTransform(..)` constructor, creating a new XRRigidTransform instance
    XRRigidTransform(const DOMPointInit& position, const DOMPointInit& orientation);
    /// Getter of the `position` attribute.
    /// [`XRRigidTransform.position`](https://developer.mozilla.org/en-US/docs/Web/API/XRRigidTransform/position)
    [[nodiscard]] DOMPointReadOnly position() const;
    /// Getter of the `orientation` attribute.
    /// [`XRRigidTransform.orientation`](https://developer.mozilla.org/en-US/docs/Web/API/XRRigidTransform/orientation)
    [[nodiscard]] DOMPointReadOnly orientation() const;
    /// Getter of the `matrix` attribute.
    /// [`XRRigidTransform.matrix`](https://developer.mozilla.org/en-US/docs/Web/API/XRRigidTransform/matrix)
    [[nodiscard]] jsbind::Float32Array matrix() const;
    /// Getter of the `inverse` attribute.
    /// [`XRRigidTransform.inverse`](https://developer.mozilla.org/en-US/docs/Web/API/XRRigidTransform/inverse)
    [[nodiscard]] XRRigidTransform inverse() const;
};


#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DOMPointInit;
class DOMPointReadOnly;
class XRRigidTransform;

/// Interface XRRigidTransform
/// [`XRRigidTransform`](https://developer.mozilla.org/en-US/docs/Web/API/XRRigidTransform)
class XRRigidTransform : public emlite::Val {
    explicit XRRigidTransform(Handle h) noexcept;
public:
    explicit XRRigidTransform(const emlite::Val &val) noexcept;
    static XRRigidTransform take_ownership(Handle h) noexcept;
    [[nodiscard]] XRRigidTransform clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new XRRigidTransform(..)` constructor, creating a new XRRigidTransform instance
    XRRigidTransform();
    /// The `new XRRigidTransform(..)` constructor, creating a new XRRigidTransform instance
    XRRigidTransform(const DOMPointInit& position);
    /// The `new XRRigidTransform(..)` constructor, creating a new XRRigidTransform instance
    XRRigidTransform(const DOMPointInit& position, const DOMPointInit& orientation);
    /// [`XRRigidTransform.position`](https://developer.mozilla.org/en-US/docs/Web/API/XRRigidTransform/position)
    /// [`XRRigidTransform.position`](https://developer.mozilla.org/en-US/docs/Web/API/XRRigidTransform/position)
    [[nodiscard]] DOMPointReadOnly position() const;
    /// [`XRRigidTransform.orientation`](https://developer.mozilla.org/en-US/docs/Web/API/XRRigidTransform/orientation)
    /// [`XRRigidTransform.orientation`](https://developer.mozilla.org/en-US/docs/Web/API/XRRigidTransform/orientation)
    [[nodiscard]] DOMPointReadOnly orientation() const;
    /// [`XRRigidTransform.matrix`](https://developer.mozilla.org/en-US/docs/Web/API/XRRigidTransform/matrix)
    /// [`XRRigidTransform.matrix`](https://developer.mozilla.org/en-US/docs/Web/API/XRRigidTransform/matrix)
    [[nodiscard]] jsbind::Float32Array matrix() const;
    /// [`XRRigidTransform.inverse`](https://developer.mozilla.org/en-US/docs/Web/API/XRRigidTransform/inverse)
    /// [`XRRigidTransform.inverse`](https://developer.mozilla.org/en-US/docs/Web/API/XRRigidTransform/inverse)
    [[nodiscard]] XRRigidTransform inverse() const;
};

} // namespace webbind
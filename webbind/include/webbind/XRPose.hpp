#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRRigidTransform;
class DOMPointReadOnly;

/// Interface XRPose
/// [`XRPose`](https://developer.mozilla.org/en-US/docs/Web/API/XRPose)
class XRPose : public emlite::Val {
    explicit XRPose(Handle h) noexcept;
public:
    explicit XRPose(const emlite::Val &val) noexcept;
    static XRPose take_ownership(Handle h) noexcept;
    [[nodiscard]] XRPose clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XRPose.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XRPose/transform)
    /// [`XRPose.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XRPose/transform)
    [[nodiscard]] XRRigidTransform transform() const;
    /// [`XRPose.linearVelocity`](https://developer.mozilla.org/en-US/docs/Web/API/XRPose/linearVelocity)
    /// [`XRPose.linearVelocity`](https://developer.mozilla.org/en-US/docs/Web/API/XRPose/linearVelocity)
    [[nodiscard]] DOMPointReadOnly linearVelocity() const;
    /// [`XRPose.angularVelocity`](https://developer.mozilla.org/en-US/docs/Web/API/XRPose/angularVelocity)
    /// [`XRPose.angularVelocity`](https://developer.mozilla.org/en-US/docs/Web/API/XRPose/angularVelocity)
    [[nodiscard]] DOMPointReadOnly angularVelocity() const;
    /// [`XRPose.emulatedPosition`](https://developer.mozilla.org/en-US/docs/Web/API/XRPose/emulatedPosition)
    /// [`XRPose.emulatedPosition`](https://developer.mozilla.org/en-US/docs/Web/API/XRPose/emulatedPosition)
    [[nodiscard]] bool emulatedPosition() const;
};

} // namespace webbind
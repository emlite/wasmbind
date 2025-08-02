#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRRigidTransform;
class DOMPointReadOnly;


/// The XRPose class.
/// [`XRPose`](https://developer.mozilla.org/en-US/docs/Web/API/XRPose)
class XRPose : public emlite::Val {
    explicit XRPose(Handle h) noexcept;

public:
    explicit XRPose(const emlite::Val &val) noexcept;
    static XRPose take_ownership(Handle h) noexcept;

    [[nodiscard]] XRPose clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `transform` attribute.
    /// [`XRPose.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XRPose/transform)
    [[nodiscard]] XRRigidTransform transform() const;
    /// Getter of the `linearVelocity` attribute.
    /// [`XRPose.linearVelocity`](https://developer.mozilla.org/en-US/docs/Web/API/XRPose/linearVelocity)
    [[nodiscard]] DOMPointReadOnly linearVelocity() const;
    /// Getter of the `angularVelocity` attribute.
    /// [`XRPose.angularVelocity`](https://developer.mozilla.org/en-US/docs/Web/API/XRPose/angularVelocity)
    [[nodiscard]] DOMPointReadOnly angularVelocity() const;
    /// Getter of the `emulatedPosition` attribute.
    /// [`XRPose.emulatedPosition`](https://developer.mozilla.org/en-US/docs/Web/API/XRPose/emulatedPosition)
    [[nodiscard]] bool emulatedPosition() const;
};


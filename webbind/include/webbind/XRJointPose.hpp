#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRPose.hpp"
#include "enums.hpp"


/// The XRJointPose class.
/// [`XRJointPose`](https://developer.mozilla.org/en-US/docs/Web/API/XRJointPose)
class XRJointPose : public XRPose {
    explicit XRJointPose(Handle h) noexcept;

public:
    explicit XRJointPose(const emlite::Val &val) noexcept;
    static XRJointPose take_ownership(Handle h) noexcept;

    [[nodiscard]] XRJointPose clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `radius` attribute.
    /// [`XRJointPose.radius`](https://developer.mozilla.org/en-US/docs/Web/API/XRJointPose/radius)
    [[nodiscard]] float radius() const;
};


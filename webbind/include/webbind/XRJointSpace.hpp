#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRSpace.hpp"
#include "enums.hpp"


/// The XRJointSpace class.
/// [`XRJointSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRJointSpace)
class XRJointSpace : public XRSpace {
    explicit XRJointSpace(Handle h) noexcept;

public:
    explicit XRJointSpace(const emlite::Val &val) noexcept;
    static XRJointSpace take_ownership(Handle h) noexcept;

    [[nodiscard]] XRJointSpace clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `jointName` attribute.
    /// [`XRJointSpace.jointName`](https://developer.mozilla.org/en-US/docs/Web/API/XRJointSpace/jointName)
    [[nodiscard]] XRHandJoint jointName() const;
};


#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRSpace.hpp"
#include "enums.hpp"


class XRJointSpace : public XRSpace {
    explicit XRJointSpace(Handle h) noexcept;

public:
    explicit XRJointSpace(const emlite::Val &val) noexcept;
    static XRJointSpace take_ownership(Handle h) noexcept;

    XRJointSpace clone() const noexcept;
    XRHandJoint jointName() const;
};


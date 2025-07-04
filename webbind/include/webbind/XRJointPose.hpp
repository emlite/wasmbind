#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRPose.hpp"
#include "enums.hpp"


class XRJointPose : public XRPose {
    explicit XRJointPose(Handle h) noexcept;

public:
    explicit XRJointPose(const emlite::Val &val) noexcept;
    static XRJointPose take_ownership(Handle h) noexcept;

    XRJointPose clone() const noexcept;
    float radius() const;
};


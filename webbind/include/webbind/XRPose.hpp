#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRRigidTransform;
class DOMPointReadOnly;


class XRPose : public emlite::Val {
    explicit XRPose(Handle h) noexcept;

public:
    explicit XRPose(const emlite::Val &val) noexcept;
    static XRPose take_ownership(Handle h) noexcept;

    XRPose clone() const noexcept;
    XRRigidTransform transform() const;
    DOMPointReadOnly linearVelocity() const;
    DOMPointReadOnly angularVelocity() const;
    bool emulatedPosition() const;
};


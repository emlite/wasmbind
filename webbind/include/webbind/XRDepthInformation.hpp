#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRRigidTransform;


class XRDepthInformation : public emlite::Val {
    explicit XRDepthInformation(Handle h) noexcept;

public:
    explicit XRDepthInformation(const emlite::Val &val) noexcept;
    static XRDepthInformation take_ownership(Handle h) noexcept;

    XRDepthInformation clone() const noexcept;
    unsigned long width() const;
    unsigned long height() const;
    XRRigidTransform normDepthBufferFromNormView() const;
    float rawValueToMeters() const;
    jsbind::Float32Array projectionMatrix() const;
    XRRigidTransform transform() const;
};


#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRCompositionLayer.hpp"
#include "enums.hpp"

class XRRigidTransform;


class XRProjectionLayer : public XRCompositionLayer {
    explicit XRProjectionLayer(Handle h) noexcept;

public:
    explicit XRProjectionLayer(const emlite::Val &val) noexcept;
    static XRProjectionLayer take_ownership(Handle h) noexcept;

    XRProjectionLayer clone() const noexcept;
    unsigned long textureWidth() const;
    unsigned long textureHeight() const;
    unsigned long textureArrayLength() const;
    bool ignoreDepthValues() const;
    float fixedFoveation() const;
    void fixedFoveation(float value);
    XRRigidTransform deltaPose() const;
    void deltaPose(const XRRigidTransform& value);
};


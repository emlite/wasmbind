#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRCamera;
class XRRigidTransform;


class XRView : public emlite::Val {
    explicit XRView(Handle h) noexcept;

public:
    explicit XRView(const emlite::Val &val) noexcept;
    static XRView take_ownership(Handle h) noexcept;

    XRView clone() const noexcept;
    XREye eye() const;
    double recommendedViewportScale() const;
    jsbind::Undefined requestViewportScale(double scale);
    XRCamera camera() const;
    bool isFirstPersonObserver() const;
    jsbind::Float32Array projectionMatrix() const;
    XRRigidTransform transform() const;
};


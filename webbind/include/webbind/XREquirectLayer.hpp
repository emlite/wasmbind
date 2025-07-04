#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRCompositionLayer.hpp"
#include "enums.hpp"

class XRSpace;
class XRRigidTransform;


class XREquirectLayer : public XRCompositionLayer {
    explicit XREquirectLayer(Handle h) noexcept;

public:
    explicit XREquirectLayer(const emlite::Val &val) noexcept;
    static XREquirectLayer take_ownership(Handle h) noexcept;

    XREquirectLayer clone() const noexcept;
    XRSpace space() const;
    void space(const XRSpace& value);
    XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
    float radius() const;
    void radius(float value);
    float centralHorizontalAngle() const;
    void centralHorizontalAngle(float value);
    float upperVerticalAngle() const;
    void upperVerticalAngle(float value);
    float lowerVerticalAngle() const;
    void lowerVerticalAngle(float value);
    jsbind::Any onredraw() const;
    void onredraw(const jsbind::Any& value);
};


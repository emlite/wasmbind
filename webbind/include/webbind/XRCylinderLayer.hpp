#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRCompositionLayer.hpp"
#include "enums.hpp"

class XRSpace;
class XRRigidTransform;


class XRCylinderLayer : public XRCompositionLayer {
    explicit XRCylinderLayer(Handle h) noexcept;

public:
    explicit XRCylinderLayer(const emlite::Val &val) noexcept;
    static XRCylinderLayer take_ownership(Handle h) noexcept;

    XRCylinderLayer clone() const noexcept;
    XRSpace space() const;
    void space(const XRSpace& value);
    XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
    float radius() const;
    void radius(float value);
    float centralAngle() const;
    void centralAngle(float value);
    float aspectRatio() const;
    void aspectRatio(float value);
    jsbind::Any onredraw() const;
    void onredraw(const jsbind::Any& value);
};


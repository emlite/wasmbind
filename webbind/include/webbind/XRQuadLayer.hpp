#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRCompositionLayer.hpp"
#include "enums.hpp"

class XRSpace;
class XRRigidTransform;


class XRQuadLayer : public XRCompositionLayer {
    explicit XRQuadLayer(Handle h) noexcept;

public:
    explicit XRQuadLayer(const emlite::Val &val) noexcept;
    static XRQuadLayer take_ownership(Handle h) noexcept;

    XRQuadLayer clone() const noexcept;
    XRSpace space() const;
    void space(const XRSpace& value);
    XRRigidTransform transform() const;
    void transform(const XRRigidTransform& value);
    float width() const;
    void width(float value);
    float height() const;
    void height(float value);
    jsbind::Any onredraw() const;
    void onredraw(const jsbind::Any& value);
};

